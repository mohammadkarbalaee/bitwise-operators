#include <iostream>
#include <cmath>
using namespace std;
//--------------------------
void initialize(int**,int,int);
void transpose(int**,int,int);
void print(int**,int,int);
//-------------------------
int main()
{
   int m,n;
   cout << "please enter the number of rows\n";
   cin >> m;
   cout << "please enter the number of column\n";
   cin >> n;
   cout << "--------------\n";
   int size = max(m,n);
   int ** Matrix;
   Matrix = new int *[size];
   for (int i = 0; i < m; i++)
   {
	   Matrix[i] = new int[size];
   }
   //-------------------------------------------
   initialize(Matrix,m,n);
   transpose(Matrix,m,n);
   print(Matrix,n,m);
   //-------------------------------------------
   for (int i = 0; i < m; i++)
   {
	   delete[] Matrix[i];
   }
   delete[] Matrix;
   //------------------------------------------
   return 0;
}
//--------------------------------------
void initialize(int ** Matrix,int m,int n)
{
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin >> Matrix[i][j];
        }
    }
}
//-----------------------------------------
void transpose(int ** Matrix,int m,int n)
{
    for(int i = 0; i < m;i++)
    {
        for(int j = i; j < n;j++) 
        {
            swap(Matrix[i][j],Matrix[j][i]);   
        }
    }
}
//---------------------------------------------
void print(int ** Matrix,int m,int n)
{
    cout << "Here is the transformed matrix\n";
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {   
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
}
//---------------------------------------------
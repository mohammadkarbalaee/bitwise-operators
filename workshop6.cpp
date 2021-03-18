#include<iostream>
using namespace std;
//------------------------------------------------------
int main()
{
	int n, m, o, k;
	cin >> n >> m >> o;
	int ** arr1;
	arr1 = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr1[i] = new int[m];
	}
	int ** arr2;
	arr2 = new int *[m];
	for (int i = 0; i < m; i++)
	{
		arr2[i] = new int[o];
	}
	int ** arrMultiplication;
	arrMultiplication = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arrMultiplication[i] = new int[o];
	}
	//------------------------------------------------------
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < o; j++)
		{
			arrMultiplication[i][j] = 0;
		}
	}
	//-----------------------------------------------
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr1[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < o; j++)
		{
			cin >> arr2[i][j];
		}
	}
	//--------------------------------------------------------------
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < o; j++)
		{
			
			int sum = 0;
			int temp1, temp2, temp3;
			for (k = 0; k < m; k++)
			{
				temp1 = (arr1[i][k]);
				temp2 = (arr2[k][j]);
				temp3 = temp1 * temp2;
				sum = sum + temp3;
			}
			arrMultiplication[i][j] = sum;
		}
	}
	//--------------------------------------------------------
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < o; j++)
		{
			cout << arrMultiplication[i][j] << " ";
		}
		cout << endl;
	}
	//--------------------------------------------------------
	for (int i = 0; i < n; i++)
	{
		delete[] arr1[i];
	}
    for (int i = 0; i < m; i++)
	{
		delete[] arr2[i];
	}
    for (int i = 0; i < n; i++)
	{
		delete[] arrMultiplication[i];
	}
	delete[] arr1;
	delete[] arr2;
	delete[] arrMultiplication;
	//-----------------------------------------------------------
	return 0;
}
--------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int ** arr;
	arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	//-----------------------------------------------
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	//-----------------------------------------------
	int x, y, end;
	cin >> x >> y;
	end = arr[x - 1][y - 1];
	cout << end;
	//-------------------------------------------
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}
--------------------------------

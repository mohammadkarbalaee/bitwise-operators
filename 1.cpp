#include <iostream>
#include <cstring>
using namespace std;
//------------------------------
int main()
{   
    char EndMarker[] = "finish";
    char Names[1000][51];
    int Quantity = 0;
    int Compare;
    int IsIdentical;
    int IndexOfSmallest[100];
    int LargestLength = 0;
    int Length;
    cout << "enter names and press the Enter button after each.for finishing up the input taking process just type the word \' finish \' out\n";
    for(int i = 0;true;i++)
    {
        cin >> Names[i];
        Compare = strcmp(EndMarker,Names[i]);
        if(Compare == 0)
        {
            break;
        }
        else
        {
            Quantity++;
        }
    }
    //------------------------------------------
    for(int i = 0;i < Quantity;i++)
    {
        Length = strlen(Names[i]);
        for(int j = 0;j < Length;j++)
        {
            if(Names[i][j] > 65 && Names[i][j] < 91)
            {
                Names[i][j] += 32; 
            }
        }
    }
    //------------------------------------------
    for(int i = 0;i < Quantity;i++)
    {
        Length = strlen(Names[i]);
        Compare = strcmp(EndMarker,Names[i]);
        if(Length > LargestLength && Compare != 0)
        {
           LargestLength = Length;
        }
    }
    //-------------------------------------------
    int SmallestLength = LargestLength;
    for(int i = 0;i < Quantity;i++)
    {
        Length = strlen(Names[i]);
        Compare = strcmp(EndMarker,Names[i]);
        if(Length < SmallestLength && Compare != 0)
        {
           SmallestLength = Length;
        }
    }
    //--------------------------------------------
    for(int i = 0;i < Quantity;i++)
    {
        for(int j = i;j < Quantity;j++)
        {
            IsIdentical = strcmp(Names[i],Names[j]);
            if(IsIdentical > 0)
            {
                swap(Names[i],Names[j]);
            }
        }
    }
    //--------------------------------------------------
    int k = 0;
    for(int i = 0;i < Quantity;i++)
    {
        Length = strlen(Names[i]);
        Compare = strcmp(EndMarker,Names[i]);
        if(Length == SmallestLength && Compare != 0)
        {
           IndexOfSmallest[k] = i;
           k++;
        }
    }
    //-------------------------------------------
    cout << "--------------------------------------\nthe sorted list is printed down below:\n";
    for(int i = 0;i < Quantity;i++)
    {
        cout << Names[i] << endl;
    }
    //---------------------------------------------------
    cout << "---------------------------------------\nthe smallest name is(are): ";
    for(int i = 0; i < k;i++)
    {
        cout << Names[IndexOfSmallest[i]] << "\\";
    }
    //--------------------------------------------------
    return 0;
}
//---------------------------------------------------
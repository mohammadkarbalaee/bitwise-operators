#include<iostream>
#include<cmath>
using namespace std;
//-------------------------------------
int DigitsSum(int);
int Sum(int,int);
int Multiply(int,int);
int Power(int,int);
//-----------------------------------
int main()
{
    int n,FirstNum[100],SecondNum[100];
    char OperationSign[100];
    cin >> n;
    for(int i = 0;n > i;i++)
    {
        cin >> FirstNum[i] >> OperationSign[i] >> SecondNum[i];
    }
    for(int i = 0;n > i;i++)
    {
        if(OperationSign[i] == '+')
        {
           cout << Sum(FirstNum[i],SecondNum[i]) << endl;
        }
        else if(OperationSign[i] == '*')
        {
          cout << Multiply(FirstNum[i],SecondNum[i]) << endl;
        }
        else if(OperationSign[i] == '^')
        {
            cout << Power(FirstNum[i],SecondNum[i]) << endl;
        }
    }
    return 0;
}
//--------------------------------------------------------
int DigitsSum(int number)
{
    int sum = 0;
    while(true)
    {
    if(number == 0) {break;}
    sum = sum + number % 10;
    number = number / 10;
    }
    return sum;
}
//----------------------------------------
int Sum(int num1,int num2)
{
    int sum = DigitsSum(num1) + DigitsSum(num2);
    return sum;
}
//-------------------------------------------------
int Multiply(int num1,int num2)
{
    int multiply = 0;
    for(int i = 1; i<=num2;i++)
    {
        multiply = multiply + DigitsSum(num1);
        if(multiply>=10 && i!=num2)
        {
            multiply = DigitsSum(multiply);
        }
    }
    return multiply;
}
//-----------------------------------------------
int Power(int num1,int num2)
{
    int pow = Multiply(num1,num1);
    for(int i = 1;i < num2-1;i++)
    {
       pow = Multiply(pow,num1);
    }
    return pow;
}
//--------------------------------------------
---------------------------------------------------------
#include<iostream>
using namespace std;
//------------------------
void Farzad(int arr[], int arraySize)
{
	int MAX = 0, max = 0;
	for (int i = 0; i < arraySize; i++)
	{
		max = max + arr[i];
		if (max < 0)
		{
			max = 0;
		}
		if (MAX < max)
		{
			MAX = max;
		}
	}
	cout << MAX;
}
int main()
{
	int Quantity, max = 0, sum = 0;
	int* profitArray;
	cin >> Quantity;
	profitArray = new int[Quantity];
	for (int i = 0; i < Quantity; i++)
	{
		cin >> profitArray[i];
	}
	//--------------------------------------------
	Farzad(profitArray, Quantity);
	//--------------------------------------------
	delete[] profitArray;
	return 0;
}
-----------------------------------------------
#include<iostream>
#include<cmath>
using namespace std;
//--------------------------
void Merge(int ArrayOfNumbers[], int start, int middle, int end)
{
	int x = middle - start + 1;
	int y = end - middle;
	int* Left;
	int* Right;
	Left = new int[x];
	Right = new int[y];
	//--------------------------------------------------
	for (int i = 0; i < x; i++)
	{
		Left[i] = ArrayOfNumbers[start + i];
	}
	for (int j = 0; j < y; j++)
	{
		Right[j] = ArrayOfNumbers[middle + j + 1];
	}
	//----------------------------------------------------------------
	int i = 0, j = 0, k = start;
	//------------------------------------------------------
	while (i < x && j < y)
	{
		if (Left[i] <= Right[j])
		{
			ArrayOfNumbers[k] = Left[i];
			i++;
		}
		else
		{
			ArrayOfNumbers[k] = Right[j];
			j++;
		}
		k++;
	}
	//---------------------------------------------------
	while (i < x)
	{
		ArrayOfNumbers[k] = Left[i];
		i++;
		k++;
	}
	while (j < y)
	{
		ArrayOfNumbers[k] = Right[j];
		j++;
		k++;
	}
	delete[] Right;
	delete[] Left;
}
//-----------------------------------------------------------------
void MergeSort(int ArrayOfNumbers[], int start, int end)
{
	if (start < end)
	{
		int middle = floor((start + end) / 2.0);
		//---------------------------------------
		MergeSort(ArrayOfNumbers, start, middle);
		MergeSort(ArrayOfNumbers, middle + 1, end);
		Merge(ArrayOfNumbers, start, middle, end);
	}
}
//------------------------------------------
int main()
{
	int QuantityOfNumbers;
	int* ArrayOfNumbers;
	cin >> QuantityOfNumbers;
	ArrayOfNumbers = new int[QuantityOfNumbers];
	for (int i = 0; i < QuantityOfNumbers; i++)
	{
		cin >> ArrayOfNumbers[i];
	}

	//-------------------------------------------
	MergeSort(ArrayOfNumbers, 0, QuantityOfNumbers - 1);
	//-----------------------------------------
	for (int i = 0; i < QuantityOfNumbers; i++)
	{
		cout << ArrayOfNumbers[i] << " ";
	}
	delete[] ArrayOfNumbers;
	return 0;
}
-------------------------------------------------------
#include<iostream>
using namespace std;
//------------------------------
int main()
{
	int i = 0, j = 0, k = 0, arr1[100], arr2[100],sorted[200], m, n;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
	}
	//--------------------------------------
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			sorted[k] = arr1[i];
			i++;
			k++;
		}
		else
		{
			sorted[k] = arr2[j];
			j++;
			k++;
		}
	}
	//---------------------------------
	while (i < n)
	{
		sorted[k++] = arr1[i++];
	}
	while (j < m)
	{
		sorted[k++] = arr2[j++];
	}
	//----------------------------------
	for (int i = 0; i < m + n; i++)
	{
		cout << sorted[i] << " ";
	}
	//----------------------------------
	return 0;
}
----------------------------------------------------
#include<iostream>
using namespace std;
//----------------------
int main()
{
	int Input, n, edge = 0;
	cin >> n;
	int arr[100000] = { 0 };
	//-------------------------------------
	for (int j = 0; j < n; j++)
	{
		cin >> Input;
		arr[Input]++;
	}
	//---------------------------------
	for (int k = 0; k < 100000; k++)
	{
		edge = edge + arr[k] * arr[k + 1];
	}
	//---------------------------------
	cout << edge;
	return 0;
}
--------------------------------------------------
#include<iostream>
using namespace std;
//---------------------------------------------------------------------------------
int Partition(int arr[], int start, int end)
{
	int pivot = arr[end];
	int pivotIndex = start;
	
	for (int i = start; i < end; i++)
	{
		if (arr[i] < pivot)
		{
			int temporary = arr[i];
			arr[i] = arr[pivotIndex];
			arr[pivotIndex] = temporary;
			pivotIndex++;
		}
	}
	int temporary = arr[end];
	arr[end] = arr[pivotIndex];
	arr[pivotIndex] = temporary;

	return pivotIndex;

}
//---------------------------------------------------------------------------------
void Quicksort(int arr[], int start, int end)
{
	if (start < end)
	{
		int n = Partition(arr, start, end);
		Quicksort(arr, start, (n - 1));
		Quicksort(arr, (n + 1), end);
	}
}
//------------------------------------------------------------------------------------
int main()
{
	int NumbersArray[500000], QuantityOfNumbers = 0, i = 0;
	//----------------------------------------------------
	while (cin >> NumbersArray[i])
	{
		i++;
		QuantityOfNumbers++;
	}
	//----------------------------------------------------------------
	Quicksort(NumbersArray, 0, QuantityOfNumbers - 1);
	//---------------------------------------------------------------------
	for (int i = 0; i < QuantityOfNumbers; i++)
	{
		cout << NumbersArray[i] << " ";
	}
	//--------------------------------------------------------------------------
	return 0;
}


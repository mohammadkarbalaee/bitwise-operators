#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;
//--------------------------------
string ToBinary(int);
string AND(int,int);
string OR(int,int);
string XOR(int,int);
int NOT(int);
string toString(int);
int ShiftToRight(int,int);
int ShiftToLeft(int,int);
//--------------------------------------------
int main()
{
    int OperatorChoice;
    char RepeatProgram = 'y';
    while(RepeatProgram == 'y' || RepeatProgram == 'Y')
    {
    cout << "choose which operator you want to use\n1 for AND\n2 for OR\n3 for XOR\n4 for NOT\n5 for shifting to right\n6 for shifitng to left" << endl;
    cin >> OperatorChoice;
    if(OperatorChoice == 1)
    {
        int num1,num2;
        cout << "please enter two integers\n";
        cin >> num1 >> num2;
        cout << "the result is: " << AND(num1,num2) << endl;
        cout << "do you want the program to run once again?(y/n)\n";
        cin >> RepeatProgram;
        if(RepeatProgram != 'y' && RepeatProgram != 'Y')
        {return 0;}
        else 
        {continue;}
    }
    if(OperatorChoice == 2)
    {
        int num1,num2;
        cout << "please enter two integers\n";
        cin >> num1 >> num2;
        cout << "the result is: " << OR(num1,num2) << endl;
        cout << "do you want the program to run once again?(y/n)\n";
        cin >> RepeatProgram;
        if(RepeatProgram != 'y' && RepeatProgram != 'Y')
        {return 0;}
        else
        {continue;}
    }
    if(OperatorChoice == 3)
    {
        int num1,num2;
        cout << "please enter two integers\n";
        cin >> num1 >> num2;
        cout << "the result is: " << XOR(num1,num2) << endl;
        cout << "do you want the program to run once again?(y/n)\n";
        cin >> RepeatProgram;
        if(RepeatProgram != 'y' && RepeatProgram != 'Y')
        {return 0;}
        else
        {continue;}
    }
    if(OperatorChoice == 4)
    {
        int num1;
        cout << "please enter an integer\n";
        cin >> num1;
        cout << "the result is: " << NOT(num1) << endl;
        cout << "do you want the program to run once again?(y/n)\n";
        cin >> RepeatProgram;
        if(RepeatProgram != 'y' && RepeatProgram != 'Y')
        {return 0;}
        else
        {continue;}
    }
     if(OperatorChoice == 5)
    {
        int num1,shifter;
        cout << "please enter two integers.the first integer is your number and the second one is how many times you want to shift\n";
        cin >> num1 >> shifter;
        cout << "the result is: " << ShiftToRight(num1,shifter) << endl;
        cout << "do you want the program to run once again?(y/n)\n";
        cin >> RepeatProgram;
        if(RepeatProgram != 'y' && RepeatProgram != 'Y')
        {return 0;}
        else
        {continue;}
    }
     if(OperatorChoice == 6)
    {
        int num1,shifter;
        cout << "please enter two integers.the first integer is your number and the second one is how many times you want to shift\n";
        cin >> num1 >> shifter;
        cout << "the result is: " << ShiftToLeft(num1,shifter) << endl;
        cout << "do you want the program to run once again?(y/n)\n";
        cin >> RepeatProgram;
        if(RepeatProgram != 'y' && RepeatProgram != 'Y')
        {return 0;}
        else
        {continue;}
    }
    }
    return 0;
}
//---------------------------------------------------------------------------------
string toString(int num)
{
   stringstream temp;
   temp << num;
   string result;
   temp >> result;
   return result;
}
//----------------------------------------------------------------------------
string ToBinary(int num)
{
    int rem = 0;
    int arr[30];
    int i = 0;
    string result = "";
    if(num == 0) 
    {
    result = "0";
    return result;
    }
    else
    {
      for(;num > 0;i++)
      {
        rem = num % 2;
        arr[i] = rem;
        num = num / 2;
      }
      if(i == 0)
      {
          result = toString(num);
          return result;
      }
      for(int j = i;j >= 0;j--)
      {
        result = result + toString(arr[j]);
      }
     return result;
    }
}
//-----------------------------------------------------------------------------
string AND(int num1,int num2)
{
    string Zero = "0";
    string One = "1";
    string result = "";
    string number1 = ToBinary(num1);
    string number2 = ToBinary(num2);
    int num1Length = number1.length();
    int num2Length = number2.length();
    int LengthDifference = abs(num2Length - num1Length);
    if(num1Length > num2Length)
    {
    for(int i = 0;i < LengthDifference;i++)
    {number2 = Zero + number2;}
    for(int j = 0;j < num1Length;j++)
    {
        if(number1[j] == '1' && number2[j] == '1')
        {result = result + One;}
        else 
        {result = result + Zero;}
    }
    }
    if(num1Length < num2Length)
    {
    for(int i = 0;i < LengthDifference;i++)
    {number1 = Zero + number1;}
      for(int j = 0;j < num2Length;j++)
    {
        if(number1[j] == '1' && number2[j] == '1')
        {result = result + One;}
        else 
        {result = result + Zero;}
    }
    }
    if(num1Length == num2Length)
    {
      for(int j = 0;j < num2Length;j++)
    {
        if(number1[j] == '1' && number2[j] == '1')
        {result = result + One;}
        else 
        {result = result + Zero;}
    }
    }
    return result;
}
//---------------------------------------------------------------
string OR(int num1,int num2)
{
    string Zero = "0";
    string One = "1";
    string result = "";
    string number1 = ToBinary(num1);
    string number2 = ToBinary(num2);
    int num1Length = number1.length();
    int num2Length = number2.length();
    int LengthDifference = abs(num2Length - num1Length);
    if(num1Length > num2Length)
    {
    for(int i = 0;i < LengthDifference;i++)
    {number2 = Zero + number2;}
    for(int j = 0;j < num1Length;j++)
    {
        if(number1[j] == '1' || number2[j] == '1')
        {result = result + One;}
        else 
        {result = result + Zero;}
    }
    }
    if(num1Length < num2Length)
    {
    for(int i = 0;i < LengthDifference;i++)
    {number1 = Zero + number1;}
      for(int j = 0;j < num2Length;j++)
    {
        if(number1[j] == '1' || number2[j] == '1')
        {result = result + One;}
        else 
        {result = result + Zero;}
    }
    }
    if(num1Length == num2Length)
    {   
        for(int j = 0;j < num2Length;j++)
        {
        if(number1[j] == '1' || number2[j] == '1')
        {result = result + One;}
        else 
        {result = result + Zero;}
        }
    }
    return result;
}
//-------------------------------------------------------------------------
string XOR(int num1,int num2)
{
    string Zero = "0";
    string One = "1";
    string result = "";
    string number1 = ToBinary(num1);
    string number2 = ToBinary(num2);
    int num1Length = number1.length();
    int num2Length = number2.length();
    int LengthDifference = abs(num2Length - num1Length);
    if(num1Length > num2Length)
    {
    for(int i = 0;i < LengthDifference;i++)
    {number2 = Zero + number2;}
    for(int j = 0;j < num1Length;j++)
    {
        if(number1[j] != number2[j])
        {result = result + One;}
        else 
        {result = result + Zero;}
    }
    }
    if(num1Length < num2Length)
    {
    for(int i = 0;i < LengthDifference;i++)
    {number1 = Zero + number1;}
      for(int j = 0;j < num2Length;j++)
    {
        if(number1[j] != number2[j])
        {result = result + One;}
        else 
        {result = result + Zero;}
    }
    }
    if(num1Length == num2Length)
    {
        for(int j = 0;j < num2Length;j++)
        {
        if(number1[j] != number2[j])
        {result = result + One;}
        else 
        {result = result + Zero;}
        }
    }
    return result;
}
//---------------------------------------------------------------------
int NOT(int num)
{
    int result = -(num + 1);
    return result;
}
//-------------------------------------------------------------------------
int ShiftToRight(int num,int shifter)
{
    num = num >> shifter;
    return num;
}
//------------------------------------------------------------
int ShiftToLeft(int num,int shifter)
{
    num = num << shifter;
    return num;
}
//-------------------------------------------------------------
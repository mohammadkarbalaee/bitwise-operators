#include <iostream>
#include <string>
using namespace std;
//--------------------------------
struct R
{
    int a;
    int b;
};
//----------------------------------------------
string addition(R num1,R num2)
{
    int a1 = num1.a;
    int b1 = num1.b;
    int a2 = num2.a;
    int b2 = num2.b;
    int denom = b1 * b2;
    int nume = (a1 * b2) + (a2 * b1);
    string denominator = to_string(denom);
    string numerator = to_string(nume);
    string result = numerator + "/" + denominator;
    return result;
}
//---------------------------------
string subtraction(R num1,R num2)
{
    int a1 = num1.a;
    int b1 = num1.b;
    int a2 = num2.a;
    int b2 = num2.b;
    int denom = b1 * b2;
    int nume = (a1 * b2) - (a2 * b1);
    string denominator = to_string(denom);
    string numerator = to_string(nume);
    string result = numerator + "/" + denominator;
    return result;
}
//------------------------------------------
string division(R num1,R num2)
{
    int a1 = num1.a;
    int b1 = num1.b;
    int a2 = num2.a;
    int b2 = num2.b;
    int denom = b1 * a2;
    int nume = a1 * b2;
    string denominator = to_string(denom);
    string numerator = to_string(nume);
    string result = numerator + "/" + denominator;
    return result;
}
//-----------------------------------------------
string multiplication(R num1,R num2)
{
    int a1 = num1.a;
    int b1 = num1.b;
    int a2 = num2.a;
    int b2 = num2.b;
    int denom = b1 * b2;
    int nume = a1 * a2;
    string denominator = to_string(denom);
    string numerator = to_string(nume);
    string result = numerator + "/" + denominator;
    return result;
}
//--------------------------------
int main()
{
   R num1;
   R num2;
   char RepeatChoice = 'y';
   char oper;
   string result;
   while(RepeatChoice == 'y' || RepeatChoice == 'Y')
   {
        cout << "please enter the numerator of the first number\n";
        cin >> num1.a;
        cout << "please enter the denominator of the first number\n";
        cin >> num1.b;
        cout << "please enter the numerator of the second number\n";
        cin >> num2.a;
        cout << "please enter the denominator of the second number\n";
        cin >> num2.b;
        cout << "please choose which operation you want: \n";
        cout << "* for multiplication\n/ for division\n- for subtraction\n+ for addition\n";
        cin >> oper;
        cout << "----------------------------------------------\n";
        //----------------------------------------------------------
        switch(oper)
        {
            case '*': result = multiplication(num1,num2);cout << result << endl; break;
            case '/': result = division(num1,num2);cout << result << endl; break;
            case '-': result = subtraction(num1,num2);cout << result << endl; break;
            case '+': result = addition(num1,num2);cout << result << endl; break;
            default: cout << "wrong operator entered" << endl; return 1;
        }
        cout << "do you want the program to run again?(y/n)\n";
        cin >> RepeatChoice;
   }
        //-------------------------------------------------------
   return 0;
}
//------------------------------------------------
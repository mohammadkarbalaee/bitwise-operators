#include <iostream>
using namespace std;
//---------------------------------
string thousands(int*);
string hundreds(int*);
string decimal(int*);
string unity(int*);
//---------------------------------
int main()
{
    int num;
    int digit;
    cout << "please enter the number\n";
    cin >> num;
    cout << "--------------------\n";
    //----------------------------------------
    int digits[4];
    for(int i = 0;i < 4;i++)
    {
        digit = num % 10;
        digits[i] = digit;
        num /= 10;
    }
    //----------------------------------------
    string Thousands = thousands(digits);
    string Hundreds = hundreds(digits);
    string Decimal = decimal(digits);
    string Unity = unity(digits);
    //------------------------------------------
    cout << Thousands << Hundreds << Decimal << Unity << endl;
    //---------------------------------------------------------
    return 0;
}
//---------------------------------
string thousands(int num[])
{
    string result;
    switch(num[3])
    {
        case 1: result = "one thousand,"; break;
        case 2: result = "two thousand,"; break;
        case 3: result = "three thousand,"; break;
        case 4: result = "four thousand,"; break;
        case 5: result = "five thousand,"; break;
        case 6: result = "six thousand,"; break;
        case 7: result = "seven thousand,"; break;
        case 8: result = "eight thousand,"; break;
        case 9: result = "nine thousand,"; break;
        default: break; 
    }
    return result;
}
//--------------------------------
string hundreds(int num[])
{
    string result;
    switch(num[2])
    {
        case 0: result = "";break;
        case 1: result = "one hundred,"; break;
        case 2: result = "two hundred,"; break;
        case 3: result = "three hundred,"; break;
        case 4: result = "four hundred,"; break;
        case 5: result = "five hundred,"; break;
        case 6: result = "six hundred,"; break;
        case 7: result = "seven hundred,"; break;
        case 8: result = "eight hundred,"; break;
        case 9: result = "nine hundred,"; break;
        default: break; 
    }
    return result;
}
//--------------------------------
string decimal(int num[])
{
    string result;
    switch(num[1])
    {
        case 0: result = ""; break;
        case 1: result = ""; break;
        case 2: result = "twenty "; break;
        case 3: result = "thirty "; break;
        case 4: result = "fourty "; break;
        case 5: result = "fifty "; break;
        case 6: result = "sixty "; break;
        case 7: result = "seventy "; break;
        case 8: result = "eighty "; break;
        case 9: result = "ninty "; break;
        default: break; 
    }
    return result;
}
//----------------------------------
string unity(int num[])
{
    string result;
    if(num[1] != 1)
    {
        switch(num[0])
        {
            case 0: result = ""; break;
            case 1: result = "one"; break;
            case 2: result = "two"; break;
            case 3: result = "three"; break;
            case 4: result = "four"; break;
            case 5: result = "five"; break;
            case 6: result = "six"; break;
            case 7: result = "seven"; break;
            case 8: result = "eight"; break;
            case 9: result = "nine"; break;
            default: break;
        }
    }
    else if(num[1] == 1)
    {
        switch(num[0])
        {
            case 0: result = "ten"; break;
            case 1: result = "eleven"; break;
            case 2: result = "twelve"; break;
            case 3: result = "thirteen"; break;
            case 4: result = "fourteen"; break;
            case 5: result = "fifteen"; break;
            case 6: result = "sixteen"; break;
            case 7: result = "seventeen"; break;
            case 8: result = "eightteen"; break;
            case 9: result = "nineteen"; break;
            default: break;
        }
    }
    return result;    
}
//----------------------------------
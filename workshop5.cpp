#include <iostream> 
#include <string> 
using namespace std;
//--------------------------------
int main()
{
	int quantity;
	cin >> quantity;
	string null;
	//----------------------------------
	getline(cin, null);
	//----------------------------------
	for (int i = 0; i < quantity; i++)
	{
		string filmName;
		getline(cin, filmName);
		//-------------------------------------------------
		if ((96 < filmName[0]) && (filmName[0] < 123))
		{
			char firstLetter = filmName[0] - 32;
			cout << firstLetter;
		}
	    if (64 < filmName[0] && filmName[0] < 91)
		{
			char firstLetter = filmName[0];
			cout << firstLetter;
		}
		if (filmName[0] < 65 || (filmName[0] > 90 && filmName[0] < 97) || (filmName[0]>122 && filmName[0] != 32))
		{
			cout << filmName[0];
		}
		//---------------------------------------------------------------
		for (int j = 1; j < filmName.size(); j++)
		{
			/*if (filmName[j] == 32)
			{
				cout << " ";
			}*/
			if (filmName[j] < 65 || (filmName[j] > 90 && filmName[j] < 97) || filmName[j]>122 && filmName[j]!=32)
			{
				cout << filmName[j];
			}
			if (96 < filmName[j] && filmName[j] < 123 && filmName[j - 1] ==32)
			{
				char Letter = filmName[j]-32;
				cout << Letter;
			}
			if (96 < filmName[j] && filmName[j] < 123 && filmName[j - 1] != 32)
			{
				char Letter = filmName[j];
				cout << Letter;
			}
		    if (64 < filmName[j] && filmName[j] < 91 && filmName[j - 1] == 32)
			{
				char Letter = filmName[j];
				cout << Letter;
			}
			if (64 < filmName[j] && filmName[j] < 91 && filmName[j - 1] != 32)
			{
				char Letter = filmName[j]+32;
				cout << Letter;
			}
		}
		cout << endl;
		continue;
	}
	//--------------------------------
	return 0;
}
------------------------------------------------------------
#include<iostream>
using namespace std;

int main()
{
	int Arr2D1[2][2];
	int Arr2D2[2][2];

	cin >> Arr2D1[0][0] >> Arr2D1[0][1];
	cin >> Arr2D1[1][0] >> Arr2D1[1][1];
	cin >> Arr2D2[0][0] >> Arr2D2[0][1];
	cin >> Arr2D2[1][0] >> Arr2D2[1][1];

	int Final11 = Arr2D1[0][0] * Arr2D2[0][0] + Arr2D1[0][1] * Arr2D2[1][0];
	int Final12 = Arr2D1[0][0] * Arr2D2[0][1] + Arr2D1[0][1] * Arr2D2[1][1];
	int Final21 = Arr2D1[1][0] * Arr2D2[0][0] + Arr2D1[1][1] * Arr2D2[1][0];
	int Final22 = Arr2D1[1][0] * Arr2D2[0][1] + Arr2D1[1][1] * Arr2D2[1][1];

	cout << Final11 << " " << Final12 << endl;
	cout << Final21 << " " << Final22 << endl;
	return 0;
}

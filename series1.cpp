#include <iostream>
using namespace std;
int main()
{
	/*first modify the variables you wanna get as input and wanna give as output*/
    int names_p_day;
	int day1_names, day2_names, day3_names;
	int day1_turn, day2_turn, day3_turn;
	int day1_leftnames, day2_leftnames;
	/*get the input from user*/
	cin >> names_p_day;
	cin >> day1_names >> day2_names >> day3_names;
	/* here we calculate the namber of names which are left in an incomplete page from the previous day*/
	day1_leftnames = day1_names % names_p_day;
	day2_leftnames = (day2_names + day1_names) % names_p_day;
	/*here we add up the number of names in a day to the number of left names in the current page from the previous day then we divide the sum to the number of names per day with integral division this gives the quantity of page turnings in that day*/
	day1_turn = day1_names / names_p_day;
	day2_turn = (day2_names+ day1_leftnames) / names_p_day;
	day3_turn = (day3_names + day2_leftnames) / names_p_day;
	/*here we give the output*/
	cout << day1_turn << "  " << day2_turn << "  " << day3_turn << endl;
	return 0;
}
-----------------------------------------------------------------
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int trick = abs(a % 2) + abs(b % 2) + abs(c % 2);
	int even = 3 - trick;
	int odd = 3 - even;
	cout << odd << endl;
	cout << even;
	return 0;
}
-------------------------------------------------------------
/*for odd n quantities the formula is (n+1)/2
for even n quantities the formula is n/2*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if ((n % 2) == 1) { cout << (n + 1) / 2; }
	else if ((n % 2 == 0)) { cout << n / 2; };
	return 0;
}
--------------------------------------------------------
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int xa, xb, xc, ya, yb, yc;
	double AB, AC, BC,total;
	cin >> xa >> ya;
	cin >> xb >> yb;
	cin >> xc >> yc;
	 AB = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
     BC = sqrt(pow(xb - xc, 2) + pow(yb - yc, 2));
     AC = sqrt(pow(xa - xc, 2) + pow(ya - yc, 2));
	 total = ceil(AB + AC + BC);
	cout << total;
	return 0;
}
--------------------------------------------------------
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	double icpp, ijava, iinflation;
	cin >> icpp >> ijava >> iinflation;
	double sjava = 50 * ijava * ((iinflation/100)+1);
	double scpp = 150 * icpp *((iinflation / 100)+1);
	double total = scpp + sjava;
	cout << fixed << setprecision(2) << total;
	return 0;
}
------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
	int bottle1, bottle2, bottle3;
	cin >> bottle1 >> bottle2 >> bottle3;
	double numerator = bottle1 + bottle2 + bottle3;
	double total = numerator /3;
	cout << total;
	return 0;
}
---------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
	cout << "welcome to \"C++\"\n" << "this language is my love\n" << "the \'c++\' website    \\www.cplusplus.com\\ \n" << "is a good source to learn!\n";
	return 0;
}
------------------------------------------------------------------

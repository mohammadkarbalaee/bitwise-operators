#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned int num,sum=0,rem;
	cin >> num;
	while (num > 0) { rem = num % 10;
	sum = sum + rem;
	num = num / 10;
	}
	cout << sum;
	return 0;
}
---------------------------------------------
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float xa, xb, ya, yb;
	cin >> xa >> ya;
	cin >> xb >> yb;
	float dis = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
		cout << dis;
	return 0;
}
------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cin >> a >> b;
	float average = (a + b) / 2.0;
	cout << average;
	return 0;
}
-----------------------------------------
#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	float average = (a + b + c) / 3.0;
	cout << average;
	return 0;
}
----------------------------------------------

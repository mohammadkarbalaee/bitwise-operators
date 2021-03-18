#include <iostream>
#include<string>
#include<cmath>
using namespace std;

long long gcd(long long x, long long y)
{
	long long Max, Min, rem;
	Max = max(x, y);
	Min = min(x, y);
	if (Max%Min == 0)
	{
		return Min;
	}
	rem = Max % Min;
	

	return gcd(Min, Max%Min);
}
int main()
{
	long long input1, input2;
	cin >> input1 >> input2;
	cout << gcd(input1,input2);

	return 0;
}
-------------------------------------
#include <iostream>
#include<string>
using namespace std;

long long sum_num(long long n)
{
	if (n == 0)
	{
		return 0;
	}
	int rem;
	rem = n % 10;
	n /= 10;

	return rem + sum_num(n);
}
int main()
{
	long long input;
	cin >> input;
	cout << sum_num(input);

	return 0;
}
---------------------------------
#include <iostream>
#include<string>
using namespace std;

long long fib(long long n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	long long input;
	cin >> input;
	cout << fib(input);

	return 0;
}
---------------------------------------


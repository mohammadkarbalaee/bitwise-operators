#include <iostream>

using namespace std;

int main()
{
	
	long long j=1, f, b, c, z, m;

	cin >> m;

	z = f = (m - 1) / 2;

	for (; f >= 0; f--)
	{
		cout.width(f + 1);

		for (b = 1; b <= j; b++)
		{
			if (b <= j)
			{
				cout << "*";
			}
			else
			{
				break;
			}

		}

		cout.width(2 * f + 1);

		for (b = 1; b <= j; b++)
		{
			if (b <= j)
		    {
				cout << "*";
		    }
			else
			{
				break;
			}
				
		}

		cout << endl;

		j = j + 2;
	}
	f = f + 2;
	j = j - 4;

	for (; f <= z; f++)
	{
		cout.width(f + 1);

		for (b = 1; b <= j; b++)
		{
			if (b <= j)
			{
				cout << "*";
			}
			else
			{
				break;
			}
		}

		cout.width(2 * f + 1);

		for (b = 1; b <= j; b++)
		{
			if (b <= j)
			{
				cout << "*";
			}
			else
			{
				break;
			}
		}

		cout << endl;

		j = j - 2;
	}


	return 0;
}

-----------------------------------------------------
#include<iostream>

using namespace std;

int main()
{
	long long m, N;

	cin >> m;

	while (m > 0)
	{
		cin >> N;
		if (N % 2 == 0)
		{
			cout << "A Wins!\n";
		}
		if (N % 2 != 0)
		{
			cout << "B Wins!\n";
		}

		m = m - 1;
	}

	return 0;
}
----------------------------------------------------
#include<iostream>
#include<cmath>

using namespace std;

int intpow(int base, int power)
{
	int k = 1;
	for (int i = 1; i <= power; i++)
	{
		k = k * base;
	}
	return k;
}


int main()
{
	long long a, b, rem1 = 0, k, digits = 0, changed = 0, digitsf, rem2 = 0, sum1 = 0, sum2 = 0;

	cin >> a >> b;

	k = a;

	while (k > 0)
	{
		k = k / b;

		digits++;
	}

	digitsf = digits;

	while (a > 0)
	{
		rem1 = a % b;

		a = a / b;

		changed = (intpow(10, digitsf)*rem1) + changed;

		--digitsf;
	}

	for (; changed > 0; digits--)
	{
		rem2 = changed % 10;

		changed = changed / 10;

		if (digits % 2 == 0)
		{
			sum1 = sum1 + rem2;
		}

		if (digits % 2 == 1)
		{
			sum2 = sum2 + rem2;
		}

	}

	if (sum1 == sum2)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}
---------------------------------------
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int y,x, Min = 100000, Max = -100000;

	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		cin >> y;

		if (y > Max)
		{
			Max = y;
		}

	    if (y < Min)
		{
			Min = y;
		}

	}
	cout << Min << " " << Max;


	return 0;
}
---------------------------------------
#include<iostream>
#include<cmath>
using namespace std;

int intpow(int base, int power)
{
	int k = 1;
	for (int i = 1; i <= power; i++)
	{
		k = k * base;
	}
	return k;
}

int main()
{
	
	long long counter = 0, first, rem1 = 0, rem2 = 0, integer;
	;	double n, decimal;
	cin >> n;
	integer = floorf(int(n));
	decimal =(n - integer);

	while ((n - int(n)) != 0)
	{
		n = n * 10;
		counter = counter + 1;
	}
	first = floorf(decimal*intpow(10, counter));
	while (first > 0)
	{
		rem1 = first % 10;
		first = first / 10;
		cout << rem1;
	}
	cout << ".";
	while (integer > 0)
	{
		rem2 = integer % 10;
		integer = integer / 10;
		cout << rem2;
	}
	return 0;
}
--------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
	int k, i = 1, count = 0, good_num, rem;
	cin >> k;
	while (true)
	{   
		good_num = (i*(i + 1)) / 2;
		i = i + 1;
		for (int j = 1;j<=good_num;j++)
		{
			 
			
			rem = good_num % j;
			if (rem == 0)
			{
				count = count + 1;
			}
		}
		if (count >= k)
		{
			cout << good_num;
			break;
		}
		count = 0;
	
	}

	return 0;
}
-----------------------------------------------------------
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long k = 0, i = 0, j;
	double x, y, z;
	cin >> x;
	y = abs(x);
	j = int(y);
	z = y - j;
	for (; z > 0.00001;)
	{
		z = z * 10;
		k = k + 1;
		z = z - floorf(z);
	}
	if (j != 0)
	{
		i = int(log10(j)) + 1;
	}
	else if (j == 0)
	{
		i = 0;
	}
	cout << i << " " << k;
	return 0;
}
---------------------------------------------------------
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, rem, i = 0;
	cin >> n;
	int o = n;
	while (o != 0)
	{
		i++;
		o = o/ 16;
	}
	while (i > 0)
	{
		int k = pow(16, i - 1);

		rem = n / k;
		n = n % k;
		i--;

		if (rem == 10)
		{
			cout << "A";
		}
		else if (rem == 11)
		{
			cout << "B";
		}
		else if (rem == 12)
		{
			cout << "C";
		}
		else if (rem == 13)
		{
			cout << "D";
		}
		else if (rem == 14)
		{
			cout << "E";
		}
		else if (rem == 15)
		{
			cout << "F";
		}
		else if (rem < 10)
		{
			cout << rem;
		}
	}
	return 0;
}
------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
	long long n, m, multiple;
	cin >> n >> m;
	for (int j=1; j <= n; j++)
	{
		for (int i=1;i<=m;i++)
		{
			multiple = j * i;
			cout << multiple << "\t";
		}
		cout << "\n";
	}

	return 0;
}
-----------------------------------------------
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long n, divisor=0;
	cin >> n;
	for (int i = 1; i < (n - 1); i++)
	{
		if (n%i == 0)
		{
			divisor = divisor + i;
		}
		else
		{
			continue;
		}
	}
	if (divisor == n)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	return 0;
}
--------------------------------------------------------
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long integer = 0, counter = 0;
	double n, decimal;
	cin >> n;
	integer = int(n);
	decimal = n - integer;

	while ((n - int(n)) != 0)
	{
		n = n * 10;
		counter = counter + 1;
	}
	cout << integer << endl << abs(decimal*pow(10, counter));
	return 0;
}
------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	long long n, t1 = 1, t2 = 1, nextTerm = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		if (i == 1)
		{
			cout << t1<< " ";
			continue;
		}
		if (i == 2)
		{
			cout << t2 << " ";
			continue;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		cout << nextTerm << " ";
	}
	return 0;
}
---------------------------------------------------
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long Min, Max, x, y,lcm, gcd,rem;
	cin >> x >> y;
	Max = max(x, y);
	Min = min(x, y);
	
	while (true)
	{ 
		rem = Max % Min;
		if (rem == 0)
		{
			gcd = Min;
			break;
		}
		else
		{
			Max = Min;
			Min = rem;
		}
	}
	lcm = (x*y) / gcd;
	cout << gcd << " " << lcm;
	return 0;
}
--------------------------------------------------
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x;
	
	cin >> x;
	for (int i =1; i <= x; i++) 
	{
		double k = (sqrt(i) - floor(sqrt(i)));
		bool sqr_num = false;
		for (;;)
		{
			if (k == 0)
			{
				sqr_num = true; 
			}
			break;
		}
		if (sqr_num)
			cout << i << " ";
	}
	return 0;
}
-----------------------------------------------------


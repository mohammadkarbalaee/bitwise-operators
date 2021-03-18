#include <iostream>
using namespace std;

int main()
{
	int num_rows, coeffi = 1;

	cin >> num_rows;

	for (int i = 0; i < num_rows; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == 0)
			{
				coeffi = 1;
			}
			else
			{
				coeffi = coeffi * (i - j + 1) / j;
			}
			cout << coeffi << " ";
		}
		cout << endl;
	}

	return 0;
}
------------------------------------------------------
#include <iostream>

using namespace std;

int main()
{
	int input;

	cin >> input;

	for (int i = 0; i < 2 * input - 1; i++)
	{
		if (i < input)
		{
			for (int j = 0; j < input - i - 1; j++)
			{
				cout << " ";
			}
			for (int j = 0; j <= i; j++)

			{
				cout << j + 1 << " ";
			}
			for (int j = i; j > 0; j--)
			{
				cout << j << " ";
			}

			cout << endl;
		}
		else
		{
			for (int j = 0;j<i - input +1;j++)
			{
				cout << " ";
			}
			for (int j = 0; j < 2 * input - i - 1; j++)
			{
				cout << j + 1 << " ";
			}
			for (int j = 2 * input - i - 2; j > 0; j--)
			{
				cout << j<<" ";
			}

			cout << endl;
		}
		
	}
}
-----------------------------------------------------
#include <iostream>
using namespace std;

long long reverse(long long input)
{
	long long temp0, ans = 0;
	while (input > 0)
	{
		ans += input % 10;
		ans *= 10;
		input /= 10;
	}
	ans /= 10;
	return ans;
}

int main()
{
	long long x, count = 0, fake, rem1 = 0, reverse_num = 0, rem2;
	cin >> x;
	fake = x;

	if (x == 0)
	{
		cout << "0: ";
	}
	if (x != 0)
	{
		while (fake % 10 == 0)
		{
			fake = fake / 10;
			count++;
		}

		reverse_num = reverse(x);

		while (reverse_num > 0)
		{
			rem2 = reverse_num % 10;
			reverse_num = reverse_num / 10;
			cout << rem2 << ": ";

			for (int i = 0; i < rem2; i++)
			{
				cout << rem2;
			}
			cout << endl;

		}
		for (long long j = 0; j < count; j++)
		{
			cout << "0: " << endl;
		}
	}
	return 0;
}

--------------------------------------------------------------


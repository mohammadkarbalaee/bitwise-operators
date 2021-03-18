#include <iostream>

using namespace std;

int main()
{
	int input;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = i; j < input; j++)
		{
			int k = input - (i + j);

				if (i + j <= k) 
				{
					continue;
				}
				if (k * k == i * i + j * j) 
				{
					cout << i << " " << j << " " << k;
					return 0;
				}
		}
	}
	cout << "Impossible";

	return 0;
}
-----------------------------------------
#include <iostream>
#include<string>
using namespace std;

bool isPrime(int input_num)
{
	int rem;
	bool isPrime = true;

	for (int test_divisor = 2; test_divisor < input_num; test_divisor++)
	{
		rem = input_num % test_divisor;

		if (rem == 0)
		{
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

int main() 
{
	int input, factor = 2, temp;
	string output, str_factor, str_pow, end;
	cin >> input;

	temp = input;
	bool starSign = true, prime_check;
	prime_check = isPrime(input);

	if (prime_check)
	{
		cout << input;
	}
	else
	{
		for (; factor < input; factor++)
		{
			int powCount = 0;
			while (temp % factor == 0)
			{
				temp /= factor;
				powCount++;
			}
			if (powCount > 0)
			{
				if (!starSign)
				{
					output = output + "*";
				}
			}
			str_factor = to_string(factor);
			str_pow = to_string(powCount);

			if (powCount == 1)
			{
				output = output + str_factor;
			}
			if (powCount > 1)
			{
				output = output + str_factor + "^" + str_pow;
			}
			starSign = false;
		}
		cout << output;
	}
	return 0;
}
-----------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int n, k, current_num = 0, round = 0;
	cin >> n >> k;

	while (current_num != 1)
	{
		current_num += k;

		if (round == 0)
		{
			++current_num;
		}
		if (current_num > n)
		{
			current_num -= n;
		}

		++round;
	}

	cout << round;

	return 0;
}
-----------------------------
#include<iostream>
using namespace std;

long long intpow(long long base, long long power)
{
	long long k = 1;
	for (long long i = 1; i <= power; i++)
	{
		k = k * base;
	}
	return k;
}

int factorial(int n)
{
	{
		int factorial;
		factorial = 1;
		while (n > 0)
		{
			factorial = factorial * n;
			n--;
		}
		return factorial;
	}
}
int combination(int a, int b)
{
	int result;
	result = factorial(a) / (factorial(a - b)*factorial(b));
	return result;
}
int bino(int a, int x, int n)
{
	int output = 0;
	for (int k = 0; k <= n; k++)
	{
		output = output + (combination(n, k)*intpow(x, k)*intpow(a, n - k));
	}
	return output;
}
int main()
{
	int a, x, n, end;
	cin >> a >> x >> n;
	end = bino(a, x, n);
	cout << end;

	return 0;
}
------------------------------------------
#include<iostream>

using namespace std;

int score(int initial_score, int trip_days)
{
	int final_score;
	if (trip_days == 0)
	{
		final_score = 20;
	}
	else if (trip_days == 7)
	{
		final_score = initial_score;
	}
	else
	{
		for (int i = 1; i <= trip_days && initial_score>0; i++)
		{
			initial_score=initial_score-1;
		}
		final_score = initial_score;
	}
	return final_score;
}

int main()
{
	int x, n, end;

	cin >> x;
	cin >> n;

	end = score(x, n);

	cout << end;

	return 0;
}
------------------------------------------------
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
    
    -------------------------------------------
    

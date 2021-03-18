#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x;
	cin >> y;
	for (int i = x; i <= y; i++) {
		bool prime = true;
		for (int j = 2; j < i / 2 + 1; j++)
		{
			if (i%j == 0) {
				prime = false; break;
			}
		}
		if (prime && i != 1)
			cout << i << endl;
	}
	return 0;
}
---------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int n, t1 = 0, t2 = 1, i = 2, next;
	cin >> n;
	if (n == 1) {
		cout << t1;
	}
	else if (n == 2) {
		cout << t2;
	}
	else {
		while(i<n)
		{
			next = t1 + t2;
			t1 = t2;
			t2 = next;
			i = i + 1;
		}
		cout << next;
	}
	return 0;
}
-------------------------------------
#include<iostream>
using namespace std;
int main()
{
	int a, factorial;
	factorial = 1;
	cin >> a;
	while (a > 0)
	{
		factorial = factorial * a;
		a--;
	}
	cout << factorial;
	return 0;
}
-----------------------------------------

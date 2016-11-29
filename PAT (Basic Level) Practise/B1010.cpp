#include<iostream>
using namespace std;

int main()
{
	int x, n;
	bool first = true;
	while (cin >> x >> n) {
		if (first == true && n >= 0) {
			if (n > 0)
				cout << x*n << ' ' << n - 1;
			else
				cout << "0 0";
			first = false;
		}
		else if (n > 0)
			cout << ' ' << x*n << ' ' << n - 1;
	}
	return 0;
}
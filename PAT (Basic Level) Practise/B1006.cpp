#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, d = -1;
	cin >> n;
	int b, s, g;
	b = n / 100; s = n / 10 % 10; g = n % 100 % 10;
	while (b > 0) {
		cout << 'B';
		b--;
	}
	while (s > 0) {
		cout << 'S';
		s--;
	}
	for (int i = 1; i <= g; i++)
		cout << i;
	cout << endl;

	return 0;
}
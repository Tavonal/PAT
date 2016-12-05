#include<iostream>
using namespace std;

int main()
{
	int A, B;
	int D, t = 0, num[100];
	cin >> A >> B >> D;
	A += B;
	do {
		num[t++] = A%D;
		A /= D;
	} while (A != 0);
	for (int i = t - 1; i >= 0; i--)
		cout << num[i];
	cout << endl;
	return 0;
}
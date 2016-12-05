#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	char str[20][20] = { '\0' };
	while (cin >> str[n])
		n++;
	cout << str[n - 1];
	for (int i = n - 2; i >= 0; i--)
		cout << ' ' << str[i];
	cout << endl;
	return 0;
}
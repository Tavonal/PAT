#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int n, n1=0, n2=0, n3=0;
	cin >> s;
	n = s.length();
	bool flag = false;
	n1 = (n + 2) / 3;
	n2 = n + 2 - 2 * n1;
	n3 = n2;
	int i, j;
	for (i = 0; i < n1 - 1; i++) {
		cout << s[i];
		for (j = 0; j < n2 - 2; j++)
			cout << ' ';
		cout << s[n - i - 1];
		cout << endl;
	}
	for (i = n1 - 1; i < n1 + n2 - 1; i++)
		cout << s[i];
	cout << endl;
	return 0;
}
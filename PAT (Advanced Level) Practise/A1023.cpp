#include<iostream>
#include<string>
using namespace std;


int main()
{
	int book[10] = { 0 };
	string s;
	cin >> s;
	bool flag = 0;
	int dec = 0;
	int len = s.length();
	for (int i = len - 1; i >= 0; i--)
	{
		int t = s[i] - '0';
		book[t]++;
		t = t * 2 + dec;
		dec = 0;
		if (t >= 10) {
			t = t - 10;
			dec = 1;
		}
		s[i] = (t + '0');
		book[t]--;
	}
	for (int i = 0; i < 10; i++)
		if (book[i] != 0)
			flag = 1;
	if (flag == 1 || dec == 1)
		cout << "No" << endl;
	else cout << "Yes" << endl;
	if (dec == 1)
		cout << '1';
	cout << s << endl;
	return 0;
}
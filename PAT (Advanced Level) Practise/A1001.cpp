#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	string s = to_string(a + b);
	int len = s.length();
	int cnt = 1;
	for (int i = 0; i < len; i++)
	{
		cout << s[i];
		if (s[i] == '-')continue;
		if ( (len - i-1)%3==0&&len-i>=3)cout << ',';
	}
	cout << endl;
	return 0;
}
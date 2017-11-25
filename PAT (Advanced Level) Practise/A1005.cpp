#include<iostream>
#include<string>
#include<vector>
using namespace std;
string num[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
int main()
{
	string s;
	int sum = 0;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++)
		sum += s[i] - '0';
	vector<int> v;
	int t = 0;
	while (sum / 10)
	{
		v.push_back(sum % 10);
		sum = sum / 10;
	}
	v.push_back(sum);
	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (i == v.size() - 1)cout << num[v[i]];
		else cout << ' ' << num[v[i]];
	}
	cout << endl;
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int n, b,t=0;
	int v[40];
	cin >> n >> b;
	while (n) {
		v[t++] = n%b;
		n /= b;
	}
	int f = 0, l = t - 1;
	bool flag = true;
	while (f<=l)
	{
		if (v[f] == v[l])
		{
			f++; l--;
		}
		else {
			flag = false;
			break;
		}
	}
	if (flag == true)
		cout << "Yes" << endl;
	else cout << "No" << endl;
	if (t == 0) {
		cout << 0 << endl;
		return 0;
	}
	cout << v[t - 1];
	for (int i = t - 2; i >= 0; --i)
		cout << ' ' << v[i];
	cout << endl;
	return 0;
}
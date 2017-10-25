#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string sys;
	string a, b;
	vector<int> v;
	cin >> sys; cin.get();
	cin >> a; cin.get();
	cin >> b; cin.get();
	int l_s = sys.length() - 1;
	int l_a = a.length() - 1;
	int l_b = b.length() - 1;
	int last = 0;
	while (l_a >= 0 || l_b >= 0)
	{
		int x = 0;
		int pos = sys[l_s] - '0';
		if (pos == 0)pos = 10;
		if (l_a >= 0 && l_b >= 0)
		{
			int cur = (a[l_a] - '0' + b[l_b] - '0');
			x = (cur + last) % pos;
			last = (cur + last) / pos;
			v.push_back(x);
			l_s--; l_a--; l_b--;
		}
		else if (l_a >= 0)
		{
			int cur = (a[l_a] - '0');
			x = (cur + last) % pos;
			last = (cur + last) / pos;
			v.push_back(x);
			l_s--; l_a--;
		}
		else if (l_b >= 0)
		{
			int cur = (b[l_b] - '0');
			x = (cur + last) % pos;
			last = (cur + last) / pos;
			v.push_back(x);
			l_s--; l_b--;
		}
		else
			break;
	}
	while (last != 0)
	{
		int pos = sys[l_s] - '0';
		if (pos == 0)pos = 10;
		int x = last%pos;
		last = last / pos;
		v.push_back(x);
		l_s--;
	}

	int len = v.size() - 1;
	while (v[len] == 0)
	{
		v.pop_back();
		len--;
		if (len < 0)
		{
			cout << 0 << endl;
			return 0;
		}
	}

	for (int i = v.size() - 1; i >= 0; i--) 
		cout << v[i];
	cout << endl;
	return 0;
}
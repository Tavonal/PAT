#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> v;

bool isPrimer(int x)
{
	if (x == 1)return false;
	if (x == 2)return true;
	int t = sqrt(x);
	for (int i = 2; i <= t; ++i)
		if (x%i == 0)return false;
	return true;
}

void trave2d(int x,int d)
{
	while (x !=0) {
		v.push_back(x%d);
		x = x / d;
	}
}
int  retrave(int d)
{
	int t = 0;
	int m = 1;
	int l = v.size();
	for (int i = l-1; i>=0; i--)
	{
		t += m*v[i];
		m *= d;
	}
	return t;
}

int main()
{
	int flag = 0;
	int x,d;
	while (cin >> x)
	{
		flag = 0;
		v.clear();
		if (x < 0)break;
		cin >> d;
		if (isPrimer(x))
			flag += 1;
		else
		{
			cout << "No" << endl; continue;
		}
		trave2d(x, d);
		if (isPrimer(retrave(d)))
		{
			cout << "Yes" << endl; continue;
		}
		else
		{
			cout << "No" << endl; continue;
		}
	}
	return 0;
}
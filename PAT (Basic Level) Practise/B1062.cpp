#include<iostream>
using namespace std;


int maxnum(int x, int y, int z)
{
	int max;
	max = x > y ? x : y;
	max = max > z ? max : z;
	return max;
}

int lcm(int x, int y, int z)
{
	int t = maxnum(x, y, z);
	int a = 1, b = 1, c = 1;
	while ((0 != a) || (0 != b) || (0 != c)) {
		a = t%x; 
		b = t%y;
		c = t%z;
		t++;
	}
	return t-1;
}

int gcd(int x, int y)
{
	int r=y;
	while (x%y)
	{
	    r = x%y;
		x = y;
		y = r;
	}
	return r;
}

int main()
{

	int n1, m1, n2, m2,k;
	char ch;
	cin >> n1 >> ch >> m1 >> n2 >> ch >> m2 >> k;
	int mx = lcm(m1, m2, k);
	n1 = n1*(mx / m1);
	n2 = n2*(mx / m2);
	int min = n1 < n2 ? n1 : n2;
	int max = n1 > n2 ? n1 : n2;
	int div = mx / k;
	bool flag = false;
	for (int t = min + 1; t < max; t++) {
		if (t%div != 0) continue;
		int frac = t / div;
		if (gcd(frac, k) != 1)continue;
		else
			if (!flag) {
				flag = true;
				cout << frac << '/' << k;
			}
			else
				cout << ' ' << frac << '/' << k;
	}
	cout << endl;
	system("pause");
	return 0;
}
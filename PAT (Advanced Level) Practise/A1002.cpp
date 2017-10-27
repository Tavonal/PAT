#include<iostream>
#include<iomanip>
#include<map>
using namespace std;

int main()
{
	map<int, float> m;
	map<int, float>::reverse_iterator iter;
	int k;
	int exp;
	float coe;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> exp >> coe;
		m[exp] += coe;
	}
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> exp >> coe;
		m[exp] += coe;
		if (m[exp] == 0)
			m.erase(exp);
	}
	cout << m.size();
	for (iter = m.rbegin(); iter != m.rend(); iter++)
		cout <<' '<<iter->first<<' '<< setprecision(1) << fixed<<iter->second;
	cout << endl;
	system("pause");
	return 0;
}
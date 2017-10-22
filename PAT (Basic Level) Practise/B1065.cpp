#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;


int main()
{
	int couple[100000] = { 0 };
	bool party[100000] = { 0 };
	int n;
	vector<int> v;
	vector<int> x;
	int temp1, temp2;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp1 >> temp2;
		couple[temp1] = temp2;
		couple[temp2] = temp1;
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> temp1;
		party[temp1] = 1;
		x.push_back(temp1);

	}
	for (int i = 0; i < x.size(); i++) {
		if (party[x[i]] != 0) {
			if (party[couple[x[i]]] != 0)
				continue;
			else
				v.push_back(x[i]);
		}
		else
			v.push_back(x[i]);
	}

	sort(v.begin(), v.end());
	cout << v.size() << endl;

	if (v.size() == 0) return 0;
	else {	
		for (int i = 0; i < v.size(); i++) {
			if (i == 0)cout<<setfill('0')<<setw(5) << v[i];
			else cout <<' '<< setfill('0') << setw(5) << v[i];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

struct people {
	string name;
	int height;
};

bool comp(people p1, people p2) {
	if (p1.height!= p2.height) return p1.height>p2.height;
	else 
		return p1.name<p2.name;
}

int main()
{
	vector<people> per;
	vector<string> lname;
	int n, k;
	cin >> n>>k;
	people str;
	for (int i = 0; i < n; i++) {
		cin >>str.name >> str.height;
		per.push_back(str);
	}
	sort(per.begin(), per.end(), comp);
	int m = n / k;
	int m_last = m + n%m;
	int count = 0, m_real;
	for (int i = 0; i < k; i++) {
		
		if (0 == i)
			m_real = m_last;
		else
			m_real = m;
		string row;
		for (int j = 0; j < m_real; j++) {
			if (0 == j) {
				row = per[count++].name;
				continue;
			}
			if (j % 2 == 0) {
				row = row + " " + per[count++].name;
			}
			else {
				row = per[count++].name + " " + row;
			}
		}
		lname.push_back(row); 
	}
	for (int i = 0; i < lname.size(); i++) {
		cout << lname[i] << endl;
	}
	system("pause");
	return 0;
}
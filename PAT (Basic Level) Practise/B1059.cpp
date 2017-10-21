#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;

bool isPrimer(int n) 
{
	int t = sqrt(n);
	for (int i = 2; i <= t; i++) {
		if (n%i == 0)return false;
	}
	return true;
}

int main()
{
	vector<int> v;
	int n,k;
	int num;
	cin >> n;
	v.push_back(-1);//先填充一个元素，让下标直接等于排名
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	cin >> k;
	bool flag[10001] = { false };
	for (int i = 0; i < k; i++) {
		cin >> num;
		int index=0;
		for (int d = 1; d < v.size(); d++) 
			if (num == v[d])index = d;
		
		if(flag[index])
			cout <<setfill('0')<<setw(4)<< v[index] << ": Checked" << endl;
		else {
			if (index == 0) {
				cout << setfill('0') << setw(4) << num << ": Are you kidding?" << endl;
			}
			else if (index == 1) {
				cout << setfill('0') << setw(4) << v[index] << ": Mystery Award" << endl;
				flag[index] = true;
			}
			else if (isPrimer(index)) {
				cout << setfill('0') << setw(4) << v[index] << ": Minion" << endl;
				flag[index] = true;
			}
			else {
				cout << setfill('0') << setw(4) << v[index] << ": Chocolate" << endl;
				flag[index] = true;
			}
		}
	}
	system("pause");
	return 0;
}
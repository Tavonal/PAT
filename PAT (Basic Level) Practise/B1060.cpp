#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b) {
	return b < a;
}
int main()
{
	int n;
	int day[100001];
	cin >> n;
	for (int i = 0; i < n; i++)cin >> day[i];
	sort(day, day + n, cmp);
	int E = 0;
	for (int i = 0; i < n; i++) {
		if (day[i] > i + 1)E++;
	}
	cout << E << endl;
	system("pause");
	return 0;
}
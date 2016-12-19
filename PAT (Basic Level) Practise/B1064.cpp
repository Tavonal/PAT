#include<iostream>
using namespace std;

int main()
{
	int num, sum = 0, n, cont = 0;
	int friends[1000] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		sum = 0;
		while (num != 0) {
			sum += num % 10;
			num /= 10;
		}
		if (friends[sum] == 0) {
			friends[sum]++;
			cont++;
		}
	}
	cout << cont << endl;
	bool flag = true;
	for (int i = 0; i < 1000; i++) {
		if (flag == true && friends[i] != 0) {
			cout << i; flag = false;
		}
		else if (flag == false && friends[i] != 0)
			cout << ' ' << i;
	}
}
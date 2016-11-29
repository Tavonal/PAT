#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int cmp(int a, int b)
{
	return a > b;
}

void to_array(int n, int num[])
{
	for (int i = 0; i < 4; i++) {
		num[i] = n % 10;
		n /= 10;
	}
}


int to_number(int num[])
{
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		sum = sum * 10 + num[i];
	}
	return sum;
}
int main()
{
	int n, num[5], MAX, MIN;
	cin >> n;
	if (n % 1111 == 0) {
		cout << setw(4) << setfill('0') << n << " - " << setw(4) << setfill('0') << n << " = 0000" << endl;
		return 0;
	}
	do {
		to_array(n, num);
		sort(num, num + 4);
		MIN = to_number(num);
		sort(num, num + 4, cmp);
		MAX = to_number(num);
		n = MAX - MIN;
		cout << setw(4) << setfill('0') << MAX << " - " << setw(4) << setfill('0') << MIN << " = " << setw(4) << setfill('0') << n << endl;
	} while (n != 6174);
	return 0;
}
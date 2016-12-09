#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int N, num;
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
	int count_A4 = 0;
	bool exist_A1 = false, exist_A2 = false;
	cin >> N;
	for (int i = 0, j = 0; i < N; i++) {
		cin >> num;
		if (num % 5 == 0) {
			if (num % 2 == 0) {
				exist_A1 = true;
				a1 += num;
			}
		}
		else if (num % 5 == 1) {
			exist_A2 = true;
			a2 += num*pow((double)(-1), j);
			j++;
		}
		else if (num % 5 == 2) {
			a3++;
		}
		else if (num % 5 == 3) {
			a4 += num;
			count_A4++;
		}
		else {
			a5 = (num > a5 ? num : a5);
		}
	}
	if (exist_A1) {
		printf("%d", a1);
	}
	else {
		printf("%c", 'N');
	}
	if (exist_A2) {
		printf(" %d", a2);
	}
	else {
		printf(" %c", 'N');
	}
	if (a3 != 0) {
		printf(" %d", a3);
	}
	else {
		printf(" %c", 'N');
	}
	if (count_A4 != 0) {
		printf(" %.1f", (double)a4 / count_A4);
	}
	else {
		printf(" %c", 'N');
	}
	if (a5 != 0) {
		printf(" %d\n", a5);
	}
	else {
		printf(" %c\n", 'N');
	}
	return 0;
}
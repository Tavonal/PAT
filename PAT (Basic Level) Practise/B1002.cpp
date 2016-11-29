#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;

const char *Data[] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };

int main()
{
	char n[100] = { '\0' };
	int sum = 0;
	int sum2 = 0;
	int d = 0;
	int t = 0;
	int x = 0;
	gets(n);
	for (int i = 0; i < strlen(n); i++) {
		sum += n[i] - '0';
	}
	sum2 = sum;
	while (sum != 0) {
		d++;
		sum /= 10;
	}
	d--;
	while (d > 0) {
		x = pow(10, d--);
		t = sum2 / x;
		sum2 = sum2%x;
		cout << Data[t] << ' ';
	}
	cout << Data[sum2] << endl;
	return 0;
}
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char N[1000];
	int num[10] = { 0 };
	cin >> N;
	int len = strlen(N);
	int dig = 0;
	for (int i = 0; i < len; i++) {
		dig = N[i] - '0';
		num[dig]++;
	}
	for (int i = 0; i < 10; i++)
		if (num[i] != 0)
			cout << i << ':' << num[i] << endl;
	return 0;
}
#include<iostream>
#include<cstring>
using namespace std;

const long long  MOD = 1000000007;

int main() {
	long long cont = 0;
	int num_T = 0;
	char str[100000];
	int left_P[100000] = { 0 };
	gets(str);
	int len = strlen(str);
	for (int i = 0; i < len; ++i) {
		if (i > 0)
			left_P[i] = left_P[i - 1];
		if (str[i] == 'P')
			++left_P[i];
	}
	for (int i = len - 1; i >= 0; --i) {
		if (str[i] == 'T')
			num_T++;
		else if (str[i] == 'A')
			cont = (cont + num_T*left_P[i]) % MOD;
	}
	cout << cont << endl;
	return 0;
}
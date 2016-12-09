#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char A[1000], Q[1000];
	int B;
	cin >> A >> B;
	int remain = 0;
	int i = 0;
	int len = strlen(A);
	for (i = 0; i != len; i++) {
		Q[i] = ((remain * 10 + A[i] - 48) / B) + 48;
		remain = (remain * 10 + (A[i] - 48)) % B;
	}
	if (Q[0] == '0'&&Q[1] != 0)
		printf("%s", Q + 1);
	else
		printf("%s", Q);
	printf(" %d", remain);
	return 0;
}

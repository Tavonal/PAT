#include<iostream>
using namespace std;

int cont = 1;

int is_prime(int n, int list[])
{
	for (int i = 0; list[i] * list[i] <= n; i++)
		if (n % list[i] == 0)
			return 0;
	return 1;
}

int main()
{
	int primer[10000] = { 2 };
	int M, N;
	int tnum = 0;
	cin >> M >> N;
	for (int i = 3; cont <= N; i += 2)
		if (is_prime(i, primer))
			primer[cont++] = i;

	for (int i = M; i <= N; i++) {
		cout << primer[i - 1];
		tnum++;
		if (tnum % 10 != 0 && i < N)cout << ' ';
		else
			cout << endl;
	}
	return 0;
}
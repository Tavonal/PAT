#include<iostream>
using namespace std;
int main()
{
	int N, M;
	int num[101];
	int t;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	t = N - M%N;
	for (int i = 0; i < N; i++) {
		cout << num[(t + i) % N];
		if (i != N - 1)
			cout << ' ';
	}
	return 0;
}
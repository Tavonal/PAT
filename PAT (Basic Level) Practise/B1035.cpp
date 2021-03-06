#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N;
	int A1[101], A2[101];
	int i, j;
	cin >> N;
	for (i = 0; i < N; i++)cin >> A1[i];
	for (j = 0; j < N; j++)cin >> A2[j];
	for (i = 0; A2[i] <= A2[i + 1] && i < N - 1; i++);
	for (j = ++i; A1[j] == A2[j] && j < N; j++);
	if (j == N) {
		cout << "Insertion Sort" << endl;
		sort(A1, A1 + i + 1);
	}
	else {
		cout << "Merge Sort" << endl;
		int k = 1;
		int flag = 1;
		while (flag) {
			flag = 0;
			for (i = 0; i < N; i++)
				if (A1[i] != A2[i])
					flag = 1;
			k *= 2;
			for (i = 0; i<N / k; i++)
				sort(A1 + i*k, A1 + (i + 1)*k);   
			sort(A1 + k*(N / k), A1 + N);
		}
	}
	for (i = 0; i < N-1; i++)
		cout << A1[i] << ' ';
	cout <<A1[N-1]<< endl;
	return 0;
}
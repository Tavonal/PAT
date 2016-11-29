#include<iostream>
using namespace std;

int main()
{
	int N, num[10], comb[100];
	cin >> N;
	int cont = 0, sum = 0;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			comb[cont++] = num[i] * 10 + num[j];
			comb[cont++] = num[j] * 10 + num[i];
		}
	}
	for (int i = 0; i < cont; i++)
		sum += comb[i];
	cout << sum << endl;
	return 0;
}
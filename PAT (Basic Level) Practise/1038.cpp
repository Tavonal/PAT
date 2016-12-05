#include<iostream>
using namespace std;

int main()
{
	int score[101] = { 0 };
	int N, K, temp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		score[temp]++;
	}
	cin >> K;
	while (K--) {
		cin >> temp;
		cout << score[temp];
		if (K != 0)
			cout << ' ';
	}
	cout << endl;
	return 0;
}
#include<iostream>
using namespace std;

int main() {
	int N, search, findSeat;
	char examNum[1001][15];
	int testSeat[1001], formSeat[1001];
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> examNum[i] >> testSeat[i] >> formSeat[i];
	cin >> search;
	for (int i = 0; i < search; i++) {
		cin >> findSeat;
		for (int j = 0; j<N; j++)
			if (testSeat[j] == findSeat) {
				cout << examNum[j] << ' ' << formSeat[j] << endl;
			}
	}
	return 0;
}
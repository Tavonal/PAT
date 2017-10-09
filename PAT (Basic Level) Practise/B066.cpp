#include<iostream>
#include<iomanip>

using namespace std;

int image[500][500];

int main()
{
	int M, N;
	int A, B, K;
	cin >> M >> N >> A >> B >> K;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> image[i][j];
			if (image[i][j] >= A&&image[i][j] <= B)
				image[i][j] = K;
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if(j<N-1)cout << setfill('0') << setw(3) <<image[i][j]<< ' ';
			else cout << setfill('0') << setw(3) <<image[i][j]<< endl;
		}
	}
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int A[3] = { 0 }, B[3] = { 0 };
	int A_win[3] = { 0 }, B_win[3] = { 0 };
	int N;
	char A_show, B_show;
	char cjb[3] = { 'B','C','J' };
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A_show >> B_show;
		if (A_show == B_show) {
			A[1]++; B[1]++;
		}
		else if (A_show == 'C'&&B_show == 'J') {
			A[0]++; A_win[1]++; B[2]++;
		}
		else if (A_show == 'C'&&B_show == 'B') {
			A[2]++; B_win[0]++; B[0]++;
		}
		else if (A_show == 'J'&&B_show == 'B') {
			A[0]++; A_win[2]++; B[2]++;
		}
		else if (A_show == 'J'&&B_show == 'C') {
			A[2]++; B_win[1]++; B[0]++;
		}
		else if (A_show == 'B'&&B_show == 'C') {
			A[0]++; A_win[0]++; B[2]++;
		}
		else if (A_show == 'B'&&B_show == 'J') {
			A[2]++; B_win[2]++; B[0]++;
		}
	}
	cout << A[0] << ' ' << A[1] << ' ' << A[2] << endl;
	cout << B[0] << ' ' << B[1] << ' ' << B[2] << endl;
	cout << (A_win[0] >= A_win[1] ? (A_win[0] >= A_win[2] ? 'B' : 'J') : (A_win[1] >= A_win[2] ? 'C' : 'J'));
	cout << ' ' << (B_win[0] >= B_win[1] ? (B_win[0] >= B_win[2] ? 'B' : 'J') : (B_win[1] >= B_win[2] ? 'C' : 'J'));
}
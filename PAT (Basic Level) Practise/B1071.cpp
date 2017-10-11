#include<iostream>

using namespace std;
int main()
{
	int n1, t, n2;
	bool b;
	int T, K;
	cin >> T >> K;
	while (K--) {
		cin >> n1 >> b >> t >> n2;
		if (T <= 0) {
			cout << "Game Over." << endl;
			break;
		}
		if (T < t) {
			cout << "Not enough tokens.  Total = " << T << "." << endl;
			continue;
		}
		if ((b == 0 && n1 > n2) || (b == 1 && n1 < n2)) {
			T += t;
			cout << "Win " << t << "!  Total = " << T << "." << endl;
		}
		else {
			T -= t;
			cout << "Lose " << t << "." << "  Total = " << T << "." << endl;
		}
		
	}
	return 0;
}
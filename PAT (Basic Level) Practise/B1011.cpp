#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int T;
	long long int A, B, C;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> A >> B >> C;
		if (A + B > C)
			cout << "Case #" << i << ": true" << endl;
		else
			cout << "Case #" << i << ": false" << endl;
	}
	return 0;
}
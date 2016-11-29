#include<iostream>
using namespace std;

int main()
{
	int N;
	char a;
	cin >> N >> a;
	for (int i = 1; i <= (N + 1) / 2; i++) {
		for (int j = 1; j <= N; j++)
			if (i != 1 && i != (N + 1) / 2 && j != 1 && j != N)
				cout << ' ';
			else
				cout << a;
		cout << endl;
	}
	return 0;
}
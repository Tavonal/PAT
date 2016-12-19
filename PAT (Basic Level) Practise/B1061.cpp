#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, m, check;
	int M[101] = { 0 }, right[101] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> M[i];
	for (int i = 0; i < m; i++)
		cin >> right[i];
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			cin >> check;
			if (check == right[j])
				sum += M[j];
		}
		cout << sum << endl;
	}
	return 0;
}
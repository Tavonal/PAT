#include<iostream>
#include<string>
using namespace std;

const int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
const char M[11] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };

int main()
{
	string num;
	string pass[100];
	int N, cont = 0, Z;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		int sum = 0;
		for (int j = 0; j < 17; j++)
			sum += (num[j] - 48) * weight[j];

		Z = sum % 11;

		if (M[Z] != num[17]) {
			pass[cont++] = num;
		}
	}
	if (cont == 0)
		cout << "All passed" << endl;
	else
		for (int i = 0; i < cont; i++)
			cout << pass[i] << endl;
	return 0;
}
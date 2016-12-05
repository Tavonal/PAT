#include<iostream>
using namespace std;

int main()
{
	int num[10] = { 0 };
	int temp;
	for (int i = 0; i < 10; i++)
		cin >> num[i];

	for (int i = 1; i < 10; i++)
		if (num[i] != 0) {
			cout << i;
			num[i]--;
			break;
		}

	for (int i = 0; i < 10; i++)
		while (num[i] > 0) {
			cout << i;
			num[i]--;
		}
	cout << endl;
	return 0;
}
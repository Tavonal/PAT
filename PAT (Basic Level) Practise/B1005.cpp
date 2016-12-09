#include<iostream>
using namespace std;

int comp(const void*a, const void*b)
{
	return *(int*)b - *(int*)a;
}
int main()
{
	int K, temp, mark = 0;
	int num[100], output[100] = { 0 }, n[10000] = { 0 };
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> num[i];
		temp = num[i];
		while (temp != 1)
			if (temp % 2 == 0) {
				n[temp / 2]++;
				temp /= 2;
			}
			else {
				n[(3 * temp + 1) / 2]++;
				temp = (3 * temp + 1) / 2;
			}
	}

	for (int i = 0; i < K; i++)
		if (n[num[i]] == 0)
			output[mark++] = num[i];
	qsort(output, mark, sizeof(int), comp);

	for (int i = 0; i < mark; i++)
		if (i == 0)
			cout << output[i];
		else
			cout << ' ' << output[i];
	return 0;
}
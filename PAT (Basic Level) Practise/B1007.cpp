#include<iostream>
#include<math.h>
using namespace std;
int primer[100000];
int cont = 0;
int main()
{
	int N, con = 0;
	cin >> N;
	int j;
	for (int i = 2; i <= N; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
				break;
		}
		if (j>sqrt(i))
		{
			primer[cont++] = i;
		}
	}
	for (int i = 0; i < cont; i++)
		if (primer[i + 1] - primer[i] == 2)
			con++;
	cout << con << endl;
}
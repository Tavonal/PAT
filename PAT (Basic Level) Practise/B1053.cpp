#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	float e;
	int d;
	cin >> n>>e>>d;
	if (n == 0)return 0;
	float t;
	float sum=0;
	int K;
	int count=0;
	float maybe = 0, must = 0;
	for (int i = 0; i < n; i++) {
		cin >> K;
		count = 0;
		for (int i = 0; i < K; i++) {
			cin >> t;
			if (t < e)
				count++;
		}
		if (count > K / 2) {
			if (K> d)must++;
			else maybe++;
		}
	}
	float t1 = maybe / n;
	float t2 = must / n;
	cout <<fixed<< setprecision(1) <<(float) (100.0 * t1 )<< '%' << ' '
		<< fixed<<setprecision(1) << (float)(100.0 * t2)<<'%' << endl;
	system("pause");
	return 0;
}
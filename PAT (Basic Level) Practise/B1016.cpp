#include<iostream>
using namespace std;

int Find_P(long long int A, int DA)
{
	int cont = 0, sum = 0;;
	while (A != 0) {
		if (A % 10 == DA) {
			cont++;
		}
		A /= 10;
	}
	while (cont > 0) {
		sum = DA + sum * 10;
		cont--;
	}
	return sum;
}

int main()
{
	long long A, B;
	int  Da, Db, Pa, Pb;
	cin >> A >> Da >> B >> Db;
	Pa = Find_P(A, Da);
	Pb = Find_P(B, Db);
	cout << Pa + Pb << endl;
	return 0;
}
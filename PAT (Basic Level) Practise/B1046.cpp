#include<iostream>
using namespace std;

int main()
{
	int n;
	int Acall, Ashow, Bcall, Bshow;
	int Adrink = 0, Bdrink = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> Acall >> Ashow >> Bcall >> Bshow;
		if (Ashow == Bshow)
			continue;
		else if (Acall + Bcall == Ashow)
			Bdrink++;
		else if (Acall + Bcall == Bshow)
			Adrink++;
		else
			continue;
	}
	cout << Adrink << ' ' << Bdrink << endl;
	return 0;
}
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char sale[1000] = { '\0' }, buy[1000] = { '\0' };
	cin >> sale >> buy;
	int len_sale = strlen(sale), len_buy = strlen(buy);
	int cont = 0, mark[1000] = { 0 };

	for (int i = 0; i < len_buy; i++) {
		for (int j = 0; j < len_sale; j++)
			if (buy[i] == sale[j] && mark[j] == 0) {
				cont++;
				mark[j] = 1;
				break;
			}
	}
	if (cont == len_buy)
		cout << "Yes " << len_sale - len_buy << endl;
	else
		cout << "No " << len_buy - cont << endl;
}
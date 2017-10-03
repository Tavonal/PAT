#include<iostream>
#include<iomanip>
using namespace std;

#define max 1001

struct cake {
	double reserve;//库存
	double total_price;//总价
	double unit_price;//单价
};

double all_reserve = 0;//输入变量总库存
double profit = 0;//收益
cake C[max];
int N;
double need;
double calc_profit(double need) {
	double max_price = 0;
	int index;
	for (int i = 0; i < N; i++) {//寻找单价最大的月饼种类并标记
		if (C[i].unit_price > max_price) {
			max_price = C[i].unit_price;
			index = i;
		}
	}
	if (need <= C[index].reserve) {
		profit += C[index].unit_price*need;
		need = 0;
	}
	else {
		profit += C[index].total_price;
		C[index].unit_price = 0;
		need = need - C[index].reserve;
	}
	return need;
}

int main()
{
	
	cin >> N >> need;
	for (int i = 0; i < N; i++) {
		cin >> C[i].reserve;
		all_reserve += C[i].reserve;
	}
	for (int i = 0; i < N; i++) {
		cin >> C[i].total_price;
		C[i].unit_price = C[i].total_price / C[i].reserve;
	}
	if (all_reserve <= need) {//若总需求大于月饼总库存
		for (int i = 0; i < N; i++) {
			profit += C[i].total_price;
		}
		cout << setiosflags(ios::fixed) << setprecision(2) << profit << endl;
		return 0;
	}

	while (need > 0) {
		need=calc_profit(need);
	}

	cout << setiosflags(ios::fixed) << setprecision(2) << profit << endl;
	return 0;
}
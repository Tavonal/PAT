#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double sum = 0;
	int N;
	double a;
	cin >> N;
	//计算数列中每个数被加了多少次就可以了！
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		sum += a*(N - i)*(i + 1);
	}	
	cout <<setiosflags(ios::fixed)<<setprecision(2) << sum << endl;
	return 0;
}
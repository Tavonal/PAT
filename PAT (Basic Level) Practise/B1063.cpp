#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N;
	double real, imag, max = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> real >> imag;
		if (sqrt(real*real + imag*imag) > max)
			max = sqrt(real*real + imag*imag);
	}
	printf("%.2f\n", max);
	return 0;
}
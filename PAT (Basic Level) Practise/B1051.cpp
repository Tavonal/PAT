#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double R1, P1, R2, P2;
	cin >> R1 >> P1 >> R2 >> P2;
	double  A, B;
	int check_a = 1, check_b = 2;
	A = R1*R2*cos(P1 + P2);
	B = R1*R2*sin(P1 + P2);

	if (fabs(A) < 0.01) check_a = 0;
	if (fabs(B) < 0.01)check_b = 0;

	if (check_a == 0 && check_b == 0)
		printf("0");
	else if (check_a == 0 && check_b != 0)
		printf("0.00%+.2fi", B);
	else if (check_a != 0 && check_b == 0)
		printf("%.2f+0.00i", A);
	else
		printf("%.2f%+.2fi", A, B);
	return 0;
}
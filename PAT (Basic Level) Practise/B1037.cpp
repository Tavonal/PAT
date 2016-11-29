#include<iostream>
using namespace std;

int main()
{
	char str;
	long int  PGall, AGall, OutGall = 0;
	int PSick, PKnut, ASick, AKnut, OutSick = 0, OutKnut = 0;
	cin >> PGall >> str >> PSick >> str >> PKnut >> AGall >> str >> ASick >> str >> AKnut;
	if (PSick > 17 || PKnut > 29 || ASick > 17 || AKnut > 29)
		return 0;
	long int sumP = 0, sumA = 0, sumOut;
	sumP = (PGall * 17 + PSick) * 29 + PKnut;
	sumA = (AGall * 17 + ASick) * 29 + AKnut;
	if (sumA >= sumP)
	{
		sumOut = sumA - sumP;
		OutKnut = sumOut % 29;
		OutSick = sumOut / 29 % 17;
		OutGall = sumOut / 29 / 17;
		cout << OutGall << '.' << OutSick << '.' << OutKnut << endl;
	}
	else {
		sumOut = sumP - sumA;
		OutKnut = sumOut % 29;
		OutSick = sumOut / 29 % 17;
		OutGall = sumOut / 29 / 17;
		cout << '-' << OutGall << '.' << OutSick << '.' << OutKnut << endl;
	}
	return 0;
}
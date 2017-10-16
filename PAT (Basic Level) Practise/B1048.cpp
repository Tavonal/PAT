#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<int>A;
	vector<int>B;
	vector<int>C;
	string s1;
	string s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++)
		A.push_back(s1[i]-48);
	for (int i = 0; i < s2.length(); i++)
		B.push_back(s2[i]-48);

	int la = A.size()-1;
	int lb = B.size()-1;
	int i = 1;
	int t = 0;

	while (la >= 0 && lb >= 0) {
		if (i % 2 == 0) {
			t = B[lb] - A[la];
			if (t < 0)t = t + 10;
		}
		else {
			t = (B[lb] + A[la]) % 13;
			if (t == 10)
				t = (char)'J';
			else if (t == 11)
				t = (char)'Q';
			else if (t == 12)
				t = (char)'K';
		}
		C.push_back(t);
		la--; lb--; i++;
	}

	if (la < 0) {
		while (lb >= 0) {
			t = B[lb];
			C.push_back(t);
			lb--; i++;
		}
	}
	if (lb < 0) {
		while (la >= 0) {
			if (i % 2 == 0) {
				t = -A[la];
				if (t < 0)t = t + 10;
			}
			else {
				t = A[la];
			}
			C.push_back(t);
			la--; i++;
		}
	}

	for (int i = C.size() - 1; i >= 0; i--) {
		if (C[i] <= 9)
			cout << C[i];
		else if ((char)C[i] == 'J')
			cout << 'J';
		else if ((char)C[i] == 'Q')
			cout << 'Q';
		else if ((char)C[i] == 'K')
			cout << 'K';
	}
	cout << endl;
	return 0;
}
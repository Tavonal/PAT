#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int n;
	vector<string>ERROR;
	vector<double>Curr;
	string s1;
	bool flag = true;
	int dot = 0;
	int dot_index = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s1;
		dot_index = 0;
		dot = 0;
		if ((s1[0] >= '0'&&s1[0] <= '9') || (s1[0] == '-')) {
			for (int k = 0; k < s1.length(); k++) {
				if (s1[k] == '.') {
					dot++;
					if (dot == 1)dot_index = k;
				}
			}
			if (0 == dot) {
				double temp = stod(s1);
				if (temp >= -1000 && temp <= 1000)
					Curr.push_back(temp);
				else
					ERROR.push_back(s1);
				continue;
			}
			else if (dot > 1) {
				ERROR.push_back(s1);
				continue;
			}
			else if (dot == 1) {
				if (dot_index + 2 < s1.length() - 1) {
					ERROR.push_back(s1);
					continue;
				}
				else {
					float temp = stof(s1);
					if (temp >= -1000 && temp <= 1000)
						Curr.push_back(temp);
					else
						ERROR.push_back(s1);
					continue;
				}
			}
		}
		else {
			ERROR.push_back(s1);
			continue;
		}
	}
	for (int i = 0; i < ERROR.size(); i++) {
		cout << "ERROR: " << ERROR[i] << " is not a legal number" << endl;
	}
	double sum = 0;
	for (int i = 0; i < Curr.size(); i++) {
		sum += Curr[i];
	}
	double av = sum / (double)Curr.size();
	if (Curr.size() == 1)
		printf("The average of %d number is %.2f", Curr.size(), av);
	else if (Curr.size() > 1)
		printf("The average of %d numbers is %.2f", Curr.size(), av);
	else
		printf("The average of %d numbers is Undefined", Curr.size());
	return 0;
}
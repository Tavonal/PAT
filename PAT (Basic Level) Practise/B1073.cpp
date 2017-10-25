#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	string question[100], t;
	getline(cin, t);
	for (int i = 0; i < m; i++) {
		getline(cin, question[i]);
	}
	string student[1000];
	for (int i = 0; i < n; i++) {
		getline(cin, student[i]);
	}
	float score[1000] = { 0 };
	int sum[100][5] = { 0 };

	for (int i = 0; i < n; i++)
	{
		string temp = student[i];
		int tag = 0;
		for (int j = 0; j < temp.length(); j++)
		{
			if (temp[j] >= '1'&&temp[j] <= '5')
			{
				int solve[5] = { 0 };
				for (int k = 0; k < question[tag].length(); k += 2)
				{
					solve[question[tag][k] - 'a'] += 2;
				}
				for (int k = j + 2; k <= (temp[j] - '0') * 2 + j; k = k + 2) {
					solve[temp[k] - 'a']++;
				}
				int error = 0, warning = 0;
				for (int k = 0; k < 5; k++) {
					if (solve[k] == 1) {
						sum[tag][k]++;
						error = 1;
					}
					else if (solve[k] == 2) {
						sum[tag][k]++;
						warning = 1;
					}
				}
				if (error == 0 && warning == 1)
				{
					score[i] += (float)(question[tag][0] - '0') / 2.0;
				}
				else if (error == 0 && warning == 0)
				{
					score[i] += question[tag][0] - '0';
				}
				tag++;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << setprecision(1) << fixed << score[i] << endl;
	int max = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (sum[i][j] > max)
				max = sum[i][j];
		}
	}
	if (0 == max)
		cout << "Too simple" << endl;
	else
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (max == sum[i][j])
					cout << max << ' ' << i + 1 << '-' << (char)(j + 'a') << endl;
			}
		}
	}

	system("pause");
	return 0;
}
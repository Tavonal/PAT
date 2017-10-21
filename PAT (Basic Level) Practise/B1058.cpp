#include<iostream>
#include<vector>
using namespace std;

//将输入存为结构体
struct ques {
	int score;
	int cnt_op;//选项总数
	int cur_op;//正确选项个数
	int option[5] = { 0 };
};
int main()
{
	vector<ques> v;
	int scor[1001] = { 0 };//记录每个人的分数
	int max = 0;//最大错误个数
	int false_q[101] = { 0 };//记录每道题的错误次数
	int n, m;
	char ch;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		ques t;
		cin >> t.score >> t.cnt_op >> t.cur_op;
		for (int x = 0; x < t.cur_op; x++) {
			cin >> ch;
			t.option[ch - 'a']++;
		}
		v.push_back(t);
	}


	for (int i = 0; i < n; i++) {
		int opt;//输入答案时每道题的选项个数
		ques t;
		for (int j = 0; j < m; j++) {
			char option[5];
			bool flag = true;
			cin >> ch >> opt;
			for (int k = 0; k < opt; k++) {
				cin >> option[k];
			}cin >> ch;
			if (opt != v[j].cur_op) {
				flag = false;
				false_q[j]++;
				continue;
			}
			else {
				for (int k = 0; k < opt; k++) {
					int temp = option[k] - 'a';
					if (v[j].option[temp] != 1) {
						flag = false;
						false_q[j]++;
						break;
					}
				}
			}
			if (flag)scor[i] += v[j].score;
		}
	}

	for (int i = 0; i < n; i++) 
		cout << scor[i] << endl;
	for (int i = 0; i < m; i++) 
		if (false_q[i] > max)max = false_q[i];

	if (max != 0) {
		cout << max;
		for (int i = 0; i < m; i++) {
			if (false_q[i] == max)
				cout << ' ' << i + 1;
		}
	}
	else 
		cout << "Too simple";

	cout << endl;
	system("pause");
	return 0;
} 
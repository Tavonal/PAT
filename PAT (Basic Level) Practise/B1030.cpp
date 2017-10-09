#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

	int N;
	long long p;
	cin >> N >> p;
	long long num[100005];

	for (int i = 0; i < N; i++)
		cin >> num[i];
	int max_count = 0;
	sort(num, num+N);
	
	long long flag;
	for (int i = 0; i < N; i++) {
		flag = num[i] * p;
		if (max_count >= N - i)
			break;
		for (int j = (i+max_count-1); j < N; j++) {
			if (num[j] <= flag) {
					max_count = j - i + 1; 
			}
			else break;
		}
	}
	cout << max_count << endl;
	return 0;
}
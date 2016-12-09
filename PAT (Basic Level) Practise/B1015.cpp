#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct student {
	int name;
	int moral;
	int abil;
};
vector<student> v1, v2, v3, v4;

bool cmp(student a, student b) {
	int suma = a.moral + a.abil;
	int sumb = b.moral + b.abil;
	if (suma != sumb) {
		return suma>sumb;
	}
	else {
		if (a.moral != b.moral) {
			return a.moral>b.moral;
		}
		else {
			return a.name<b.name;
		}
	}
}

int main()
{
	int N, L, H;
	cin >> N >> L >> H;
	student temp;
	int cont = 0;
	for (int i = 0; i < N; i++) {
		cin >> temp.name >> temp.moral >> temp.abil;
		if (temp.moral >= L&&temp.abil >= L) {
			cont++;
			if (temp.moral >= H&&temp.abil >= H) {
				v1.push_back(temp);
			}
			else if (temp.moral >= H&&temp.abil < H) {
				v2.push_back(temp);
			}
			else if (temp.moral < H&&temp.abil < H&&temp.moral >= temp.abil) {
				v3.push_back(temp);
			}
			else {
				v4.push_back(temp);
			}
		}
	}
	cout << cont << endl;
	sort(v1.begin(), v1.end(), cmp);
	sort(v2.begin(), v2.end(), cmp);
	sort(v3.begin(), v3.end(), cmp);
	sort(v4.begin(), v4.end(), cmp);
	for (int i = 0; i < v1.size(); i++)
		printf("%d %d %d\n", v1[i].name, v1[i].moral, v1[i].abil);
	for (int i = 0; i < v2.size(); i++)
		printf("%d %d %d\n", v2[i].name, v2[i].moral, v2[i].abil);
	for (int i = 0; i < v3.size(); i++)
		printf("%d %d %d\n", v3[i].name, v3[i].moral, v3[i].abil);
	for (int i = 0; i < v4.size(); i++)
		printf("%d %d %d\n", v4[i].name, v4[i].moral, v4[i].abil);
	return 0;
}
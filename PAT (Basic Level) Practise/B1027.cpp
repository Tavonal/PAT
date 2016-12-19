#include<iostream>
using namespace std;

int main()
{
	int N, line = 0, m = 0;
	char c[2] = { 0,' ' };
	scanf("%d %c", &N, c);
	for (int i = 1; line == 0; i++)
		if (2 * i*i - 1 > N)
			line = i - 1;
	m = N - (2 * line*line - 1);
	for (int i = 0, ver = 0; ver < 2 * line - 1; ver++) {
		i = ver >= line ? 2 * line - 2 - ver : ver;
		for (int j = 0; j < 2 * line - 1 - i; j++)
			cout << c[j < i];
		cout << endl;
	}
	cout << m << endl;
	return 0;
}
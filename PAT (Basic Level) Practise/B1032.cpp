#include<iostream>
#include<algorithm>
using namespace std;

int cont[100000] = { 0 };
int main()
{
  int N;
  cin >> N;
  int school, grade;
  int m_index = 0, m_grade = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> school >> grade;
    cont[school] += grade;
  }
  for (int i = 0; i < 100000; i++) {
    if (m_grade < cont[i]) {
      m_index = i; m_grade = cont[i];
    }
  }
  cout << m_index << ' ' << m_grade << endl;
  return 0;
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<vector<string> >v;
  for (int i = 0; i < 3; i++) {
    string s;
    getline(cin, s);
    vector<string> row;
    int j = 0, k = 0;
    while (j < s.length()) {
      if (s[j] == '[') {
        while (k++ < s.length()) {
          if (s[k] == ']') {
            row.push_back(s.substr(j + 1, k - j - 1));
            break;
          }
        }
      }
      j++;
    }
    v.push_back(row);
  }
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int L_hand, L_eye, mouth, R_eye, R_hand;
    cin >> L_hand >> L_eye >> mouth >> R_eye >> R_hand;
    if (L_hand > v[0].size() || L_eye > v[1].size() || mouth > v[2].size() || R_eye > v[1].size() || R_hand > v[0].size() || L_hand < 1 || L_eye < 1 || mouth < 1 || R_eye < 1 || R_hand < 1) {
      cout << "Are you kidding me? @\\/@" << endl;
      continue;
    }
    cout << v[0][L_hand - 1] << "(" << v[1][L_eye - 1] << v[2][mouth - 1] << v[1][R_eye - 1] << ")" << v[0][R_hand - 1] << endl;
  }
  system("pause");
  return 0;
}
//https://vinhdinhcoder.net/Problem/Details/4936
#include <bits/stdc++.h>
using namespace std;

char countMax(string s) {
  if (s.length() == 0) {
    return 0;
  } else {
    char maxDigit = s[0];
    for (int i = 1; i < s.length(); i++) {
      if (s[i] > maxDigit) {
        maxDigit = s[i];
      }
    }
    return countMax(s.substr(1)) > maxDigit ? countMax(s.substr(1)) : maxDigit;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  string s;
  cin >> s;
  cout << countMax(s);
}

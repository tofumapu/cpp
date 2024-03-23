// https://vinhdinhcoder.net/Problem/Details/4928
#include <iostream>
using namespace std;

long long power(int x, int n) {
  if (n == 0) {
    return 1;
  } else {
    return x * power(x, n - 1);
  }
}

int main() {
  int x,n;
  cin >> x >> n;
  cout << power(x, n);
  return 0;
  
}


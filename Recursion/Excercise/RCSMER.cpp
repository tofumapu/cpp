// // https://vinhdinhcoder.net/Problem/Details/4935
// #include <bits/stdc++.h>
// using namespace std;

// string smallest(string x, string y) {
//   if (x.length() == 0) {
//     return y;
//   } else if (y.length() == 0) {
//     return x;
//   } else {
//     return smallest(x.substr(1), y.substr(1)) + min(x[0], y[0]);
//   }
// }

// string largest(string x, string y) {
//   if (x.length() == 0) {
//     return y;
//   } else if (y.length() == 0) {
//     return x;
//   } else {
//     return largest(x.substr(1), y.substr(1)) + max(x[0], y[0]);
//   }
// }

// int main() {
//   int x, y;
//   cin >> x >> y;

//   string s = smallest(to_string(x), to_string(y));
//   cout << s << endl;

//   s = largest(to_string(x), to_string(y));
//   cout << s << endl;

//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

string smallest(string x, string y) {
  if (x.length() == 0) {
    return y;
  } else if (y.length() == 0) {
    return x;
  } else if (x[0] < y[0]) {
    return x.substr(1) + x[0] + y.substr(1);
  } else {
    return y.substr(1) + y[0] + x.substr(1);
  }
}

string largest(string x, string y) {
  if (x.length() == 0) {
    return y;
  } else if (y.length() == 0) {
    return x;
  } else if (x[0] > y[0]) {
    return x.substr(1) + x[0] + y.substr(1);
  } else {
    return y.substr(1) + y[0] + x.substr(1);
  }
}

int main() {
  int x, y;
  cin >> x >> y;

  string s = smallest(to_string(x), to_string(y));
  cout << s << endl;

  s = largest(to_string(x), to_string(y));
  cout << s << endl;

  return 0;
}
// https://vinhdinhcoder.net/Problem/Details/4929
#include <bits/stdc++.h>
using namespace std;

long long factorial(int n){
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}
int main(){
    int n;
    cin >> n; 
    cout << factorial(n);
}
// https://vinhdinhcoder.net/Problem/Details/4934
#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    if (s == "") return s;
    else return reverse(s.substr(1)) + s[0]; 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;
    getline(cin,s);
    cout << reverse(s);
}
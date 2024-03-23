//https://vinhdinhcoder.net/Problem/Details/4935
#include <bits/stdc++.h>
using namespace std;

int countOdd(string s)
{
    if (s == "") return 0;
    if (s[0] == '1' || s[0] == '3' || s[0] == '5' || s[0] == '7' || s[0] == '9' )
        return 1 + countOdd(s.substr(1));
    else return countOdd(s.substr(1));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    cout << countOdd(s);
}
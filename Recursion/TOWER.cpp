#include <iostream>
using namespace std;

void Tower(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        cout << "Move disc from " << from << " to " << to << endl;
        return;
    }
    Tower(n - 1, from, aux, to);
    Tower(1, from, to, aux);
    Tower(n - 1, aux, to, from);
}
int main()
{
    int n = 3;
    char a = 'A'; char b = 'B'; char c = 'C';
    Tower(4, a, c, b);
}
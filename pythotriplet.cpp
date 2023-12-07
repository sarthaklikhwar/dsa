#include <iostream>
#include <iomanip>
using namespace std;
bool maxthree(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else if (a == z)
    {
        b = x;
        c = y;
    }

    if (a * a == (b * b) + (c * c))
    {
        return true;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (maxthree(a, b, c))
    {
        cout << "pythogrean triplet" << endl;
    }

    return 0;
}
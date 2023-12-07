#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int reverse, k;
    reverse = 0;
    while (n > 0)
    {
        k = n % 10;
        reverse = reverse * 10 + k;
        n = n / 10;
    }
    cout << reverse << endl;

    return 0;
}
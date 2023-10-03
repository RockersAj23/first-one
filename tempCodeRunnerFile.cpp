#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 1;
    while (n--)
    {
        cout << (2 * a) + 2 << " ";
        a = a + 1;
    }
    return 0;
}
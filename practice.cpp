#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    int ones = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == 1)
        {
            ones++;
        }
    }
    int a = 0;
    int b = arr[1];
    int c = 0;
    if (arr[0] <= arr[2])
    {
        a = arr[0];
        c = arr[2];
    }
    else
    {
        a = arr[2];
        c = arr[0];
    }
    if (ones == 3 )
    {
        cout << a + b + c;
    }
    else if (ones == 0)
    {
        cout << a * b * c;
    }else if (ones == 2 && b != 1)
    {
        cout << a + b + c;
    }else{
        cout<<(a+b)*c;
    }
    
    
    
    return 0;
}
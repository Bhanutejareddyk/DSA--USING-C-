#include<iostream>
using namespace std;

int y = 0;   // Global variable

int fun(int n)
{
    static int x = 0;   // Static variable

    if(n > 0)
    {
        x++;
        y++;

        cout << x << " ";
        cout << y << " ";

        return fun(n - 1) + x;
    }

    return 0;
}

int main()
{
    int r;

    r = fun(5);

    cout << r << " ";

    return 0;
}
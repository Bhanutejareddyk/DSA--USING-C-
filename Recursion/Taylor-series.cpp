#include<iostream>
#include<cmath>   // for pow()
using namespace std;

// Function to calculate factorial
int fact(int n)
{
    if(n == 0)
        return 1;

    return n * fact(n - 1);
}

// Method 1: Using recursion with static variables
double taylor(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if(n == 0)
        return 1;

    r = taylor(x, n - 1);

    p = p * x;
    f = f * n;

    return r + p / f;
}

// Method 2: Using recursion with pow() and factorial
double taylor1(int x, int n)
{
    if(n == 0)
        return 1;

    return taylor1(x, n - 1) + pow(x, n) / fact(n);
}

int main()
{
    int x, y;

    cout << "Enter the value of x and n: ";
    cin >> x >> y;

    cout << "The value of e^x is: " << taylor(x, y) << endl;

    cout << "Using another method: " << taylor1(x, y) << endl;

    return 0;
}
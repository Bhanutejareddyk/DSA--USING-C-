//Recursive call happens before processing.
#include<iostream>
using namespace std;

void fun(int n)
{
    if(n > 0)
    {
        fun(n - 1);   // First statement
        cout << n << " ";
    }
}

int main()
{
    fun(5);

    return 0;
}
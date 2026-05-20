#include<iostream>
using namespace std;

void fun(int n)
{
    if(n > 0)
    {   
        cout << n << " ";
        fun(n - 1);
        
    }
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    fun(x);
    cout << endl;
    return 0;
}
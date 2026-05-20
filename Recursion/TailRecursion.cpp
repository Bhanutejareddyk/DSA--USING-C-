//Type	              Meaning
//Tail Recursion	Recursive call at end
#include<iostream>
using namespace std;

void fun(int n)
{
    if(n > 0)
    {
        cout << n << " ";
        fun(n - 1);   // Last statement
    }
}

int main()
{
    fun(5);

    return 0;
}
#include<iostream>
using namespace std;

void function(int a[], int n) { 
    // we can also write like function(int *a,int n)
    // arrays are always passed by address
    for(int i = 0; i < n; i++) { 
        cout << a[i] << " ";
    }
    cout << endl;

    // a[] behaves like a pointer, so traditional loops are preferred here
}

// pointer returning function
int* fun(int size) {
    int *p;
    p = new int[size];   // FIXED: must specify type

    for(int i = 0; i < size; i++)
        p[i] = i + 1;

    return p;
}

int main() {
    int a[100], x;
    int *ptr, sz = 5;

    ptr = fun(sz);

    for(int i = 0; i < sz; i++) {
        cout << ptr[i] << endl;
    }

    cout << "Enter no of elements: ";
    cin >> x;

    cout << "\nEnter the elements:";
    for(int i = 0; i < x; i++) {
        cin >> a[i];
    }

    function(a, x);  // function call

    delete[] ptr; // good practice to free dynamically allocated memory

    return 0;
}
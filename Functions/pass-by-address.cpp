#include<iostream>
using namespace std;
void swap(int *a, int *b) {   // pass by reference
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    swap(&x, &y);  // function call
    cout << "After swapping: " << x << " " << y << endl;
    return 0;
}
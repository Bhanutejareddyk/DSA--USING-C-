#include<iostream>
using namespace std;

int main(){
    int n,pos,val;
    cout << "Enter no of elements: ";
    cin >> n;

    int a[100];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "\nThe elements are: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\nEnter the position: ";
    cin >> pos;
    cout << "Enter the value: ";
    cin >> val;

    if(pos >= 1 && pos <= n+1){
        for(int i = n-1; i >= pos-1; i--){
            a[i+1] = a[i];
        }
        a[pos-1] = val;
        n++;
    }

    cout << "\nAfter insertion: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\nEnter the position to be deleted: ";
    cin >> pos;

    if(pos >= 1 && pos <= n){
        for(int i = pos-1; i < n-1; i++){
            a[i] = a[i+1];
        }
        n--;
    }

    cout << "\nAfter deletion: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    // UPDATE
    cout << "\nEnter the position to be updated: ";
    cin >> pos;
    cout << "Enter the new value: ";
    cin >> val;

    if(pos >= 1 && pos <= n){
        a[pos-1] = val;
    }

    cout << "\nAfter update: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
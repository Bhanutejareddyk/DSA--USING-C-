#include <iostream>
using namespace std;

#define MAX_SIZE 100

void display(int a[], int n) {
    if(n == 0) {
        cout << "Array is empty\n";
        return;
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertElement(int a[], int &n, int pos, int val) {
    if(pos < 1 || pos > n+1 || n >= MAX_SIZE) {
        cout << "Invalid position\n";
        return;
    }

    for(int i = n; i >= pos; i--) {
        a[i] = a[i-1];
    }

    a[pos-1] = val;
    n++;
}

void deleteElement(int a[], int &n, int pos) {
    if(pos < 1 || pos > n) {
        cout << "Invalid position\n";
        return;
    }

    for(int i = pos-1; i < n-1; i++) {
        a[i] = a[i+1];
    }

    n--;
}

void searchElement(int a[], int n, int val) {
    for(int i = 0; i < n; i++) {
        if(a[i] == val) {
            cout << "Found at position " << i+1 << endl;
            return;
        }
    }
    cout << "Not found\n";
}

void updateElement(int a[], int n, int pos, int val) {
    if(pos < 1 || pos > n) {
        cout << "Invalid position\n";
        return;
    }
    a[pos-1] = val;
}

void reverseArray(int a[], int n) {
    for(int i = 0; i < n/2; i++) {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

void findMax(int a[], int n) {
    int maxVal = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > maxVal)
            maxVal = a[i];
    }
    cout << "Max = " << maxVal << endl;
}

void findMin(int a[], int n) {
    int minVal = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < minVal)
            minVal = a[i];
    }
    cout << "Min = " << minVal << endl;
}

int main() {
    int a[MAX_SIZE], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int choice;

    do {
        cout << "\n1.Display\n2.Insert\n3.Delete\n4.Search\n5.Update\n6.Reverse\n7.Max\n8.Min\n9.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        int pos, val;

        switch(choice) {
            case 1:
                display(a, n);
                break;

            case 2:
                cout << "Enter position and value: ";
                cin >> pos >> val;
                insertElement(a, n, pos, val);
                break;

            case 3:
                cout << "Enter position: ";
                cin >> pos;
                deleteElement(a, n, pos);
                break;

            case 4:
                cout << "Enter value: ";
                cin >> val;
                searchElement(a, n, val);
                break;

            case 5:
                cout << "Enter position and new value: ";
                cin >> pos >> val;
                updateElement(a, n, pos, val);
                break;

            case 6:
                reverseArray(a, n);
                break;

            case 7:
                findMax(a, n);
                break;

            case 8:
                findMin(a, n);
                break;

            case 9:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 9);

    return 0;
}
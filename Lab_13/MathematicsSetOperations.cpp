/*
Write a C++ program that:
- Reads two sets from the user.
- Finds the union of the two sets.
- Finds the intersection of the two sets.
*/
#include <iostream>
using namespace std;

int main() {
    int A[100], B[100];
    int n1, n2;

    cout << "Enter number of elements in Set A: ";
    cin >> n1;

    cout << "Enter elements of Set A:\n";
    for(int i = 0; i < n1; i++) {
        cin >> A[i];
    }

    cout << "Enter number of elements in Set B: ";
    cin >> n2;

    cout << "Enter elements of Set B:\n";
    for(int i = 0; i < n2; i++) {
        cin >> B[i];
    }

    // UNION
    cout << "\nUnion = { ";

    // print all elements of A
    for(int i = 0; i < n1; i++) {
        cout << A[i] << " ";
    }

    // print elements of B not found in A
    for(int i = 0; i < n2; i++) {
        bool found = false;

        for(int j = 0; j < n1; j++) {
            if(B[i] == A[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            cout << B[i] << " ";
        }
    }

    cout << "}";

    // INTERSECTION
    cout << "\nIntersection = { ";

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(A[i] == B[j]) {
                cout << A[i] << " ";
            }
        }
    }

    cout << "}";

    return 0;
}

/*
Example Input
Set A = {1 2 3 4}
Set B = {3 4 5 6}

Output
Union = { 1 2 3 4 5 6 }
Intersection = { 3 4 }
*/

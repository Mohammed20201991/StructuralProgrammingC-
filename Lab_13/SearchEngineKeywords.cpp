/*
A search engine stores keywords entered by two users.
Write a C++ program to:

- Read keywords from User 1 and User 2.
Display:
- All unique keywords (Union)
- Common keywords searched by both users (Intersection)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string user1[100], user2[100];
    int n1, n2;

    cout << "How many keywords for User 1? ";
    cin >> n1;

    cout << "Enter keywords for User 1:\n";
    for(int i = 0; i < n1; i++) {
        cin >> user1[i];
    }

    cout << "How many keywords for User 2? ";
    cin >> n2;

    cout << "Enter keywords for User 2:\n";
    for(int i = 0; i < n2; i++) {
        cin >> user2[i];
    }

    // UNION
    cout << "\nAll Keywords (Union): ";

    for(int i = 0; i < n1; i++) {
        cout << user1[i] << " ";
    }

    for(int i = 0; i < n2; i++) {
        bool found = false;

        for(int j = 0; j < n1; j++) {
            if(user2[i] == user1[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            cout << user2[i] << " ";
        }
    }

    // INTERSECTION
    cout << "\nCommon Keywords (Intersection): ";

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(user1[i] == user2[j]) {
                cout << user1[i] << " ";
            }
        }
    }

    return 0;
}


/*
Example Input
User 1:
google ai programming

User 2:
programming cplusplus ai


Output
All Keywords (Union): google ai programming cplusplus
Common Keywords (Intersection): ai programming
*/

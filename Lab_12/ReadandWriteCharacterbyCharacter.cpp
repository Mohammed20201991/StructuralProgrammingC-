// This example stores text in a file and reads it one character at a time.
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream outFile("chars.txt");

    char ch;

    cout << "Enter 5 characters:" << endl;

    for(int i = 0; i < 5; i++) {
        cin >> ch;
        outFile << ch;
    }

    outFile.close();

    ifstream inFile("chars.txt");

    cout << "\nReading character by character:" << endl;

    while(inFile.get(ch)) {
        cout << ch << endl;
    }

    inFile.close();

    return 0;
}

/*
Example Input
A B C D E
Output
Reading character by character:
A
B
C
D
E

-------------------------------------------
| Method         | Reads                  |
| ---------------| ---------------------- |
| inFile >> word | Word by word           |
| getline()      | Line by line           |
| inFile.get(ch) | Character by character |
*/

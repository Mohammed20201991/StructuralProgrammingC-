#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream outFile("words.txt");

    string word;

    cout << "Enter 3 words:" << endl;

    for(int i = 0; i < 3; i++) {
        cin >> word;
        outFile << word << " ";
    }

    outFile.close();

    ifstream inFile("words.txt");

    cout << "\nReading word by word:" << endl;

    while(inFile >> word) {
        cout << word << endl;
    }

    inFile.close();

    return 0;
}

/*
Example Input
Ali
Sara
Omar

Output
Reading word by word:
Ali
Sara
Omar
*/

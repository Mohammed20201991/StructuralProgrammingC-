#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Writing to file
    ofstream outFile("students.txt");

    outFile << "Ali" << endl;
    outFile << "Sara" << endl;
    outFile << "Omar" << endl;

    outFile.close();

    // Reading from file
    ifstream inFile("students.txt");

    string name;

    cout << "Student Names:" << endl;

    while(getline(inFile, name)) {
        cout << name << endl;
    }

    inFile.close();

    return 0;
}

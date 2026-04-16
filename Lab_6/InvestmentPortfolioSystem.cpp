#include <iostream>
using namespace std;

struct Investor {
    string name;
    int id;
    float investments[5];   // Array of stock values
    float totalValue;
};

int main() {
    int n;
    cout << "Enter number of investors: ";
    cin >> n;

    Investor inv[100];

    for(int i = 0; i < n; i++) {
        cout << "\nInvestor " << i+1 << endl;

        cout << "Name: ";
        cin >> inv[i].name;

        cout << "ID: ";
        cin >> inv[i].id;

        inv[i].totalValue = 0;

        cout << "Enter 5 investment values:\n";
        for(int j = 0; j < 5; j++) {
            cin >> inv[i].investments[j];
            inv[i].totalValue += inv[i].investments[j];
        }
    }

    // Find highest portfolio
    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(inv[i].totalValue > inv[maxIndex].totalValue)
            maxIndex = i;
    }

    // Output
    cout << "\n--- Portfolio Summary ---\n";
    for(int i = 0; i < n; i++) {
        cout << inv[i].name << " | Total Value: " << inv[i].totalValue << endl;
    }

    cout << "\nTop Investor: " << inv[maxIndex].name 
         << " (" << inv[maxIndex].totalValue << ")" << endl;

    return 0;
}

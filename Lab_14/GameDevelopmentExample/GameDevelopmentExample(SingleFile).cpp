#include <iostream>
using namespace std;

// Global variable
// External linkage by default
int score = 0;

// Function to add points
void addPoints(int p) {
    score += p;
}

// Function to display score
void showScore() {
    cout << "Score = " << score << endl;
}

int main() {

    addPoints(50);
    showScore();

    addPoints(25);
    showScore();

    return 0;
}

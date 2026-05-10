#include <iostream>
using namespace std;

int score = 0; // external linkage

void addPoints(int p) {
    score += p;
}

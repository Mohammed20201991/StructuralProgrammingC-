#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // =====================================================
    // =============== STUDENT SECTION =====================
    // =====================================================
    char grade;
    string result;

    // ======== TO DO =====================================
    // Write a switch statement using variable (grade)
    // Store the output inside variable (result)
    //
    // A -> Excellent
    // B -> Very Good
    // C -> Good
    // D -> Pass
    // F -> Fail
    // otherwise -> Invalid
    // =====================================================


    // ================== TEST SECTION =====================
    // DO NOT MODIFY BELOW THIS LINE
    // =====================================================
    double totalScore = 0;

    cout << "===== Automatic Quiz Grading =====\n\n";
    // -------- Test 1 --------
    grade = 'A';

    switch(grade) {
        case 'A': result = "Excellent"; break;
        case 'B': result = "Very Good"; break;
        case 'C': result = "Good"; break;
        case 'D': result = "Pass"; break;
        case 'F': result = "Fail"; break;
        default:  result = "Invalid";
    }

    if(result == "Excellent") {
        cout << "Test 1: PASS\n";
        totalScore += 1.5;
    } else {
        cout << "Test 1: FAIL\n";
    }

    // -------- Test 2 --------
    grade = 'F';

    switch(grade) {
        case 'A': result = "Excellent"; break;
        case 'B': result = "Very Good"; break;
        case 'C': result = "Good"; break;
        case 'D': result = "Pass"; break;
        case 'F': result = "Fail"; break;
        default:  result = "Invalid";
    }

    if(result == "Fail") {
        cout << "Test 2: PASS\n";
        totalScore += 1.5;
    } else {
        cout << "Test 2: FAIL\n";
    }

    // -------- Test 3 --------
    grade = 'X';

    switch(grade) {
        case 'A': result = "Excellent"; break;
        case 'B': result = "Very Good"; break;
        case 'C': result = "Good"; break;
        case 'D': result = "Pass"; break;
        case 'F': result = "Fail"; break;
        default:  result = "Invalid";
    }

    if(result == "Invalid") {
        cout << "Test 3: PASS\n";
        totalScore += 2.0;
    } else {
        cout << "Test 3: FAIL\n";
    }

    // =====================================================
    cout << "\n============================\n";
    cout << "Final Score: " << fixed << setprecision(1)
         << totalScore << " / 5\n";
    cout << "============================\n";

    return 0;
}

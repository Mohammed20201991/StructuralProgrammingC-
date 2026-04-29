// A lambda function in C++ is an anonymous (unnamed) function you can define directly inside your code,
// very useful for short operations without writing a full function.
/*
[capture](parameters) -> return_type {
    // body
};
*/

/*
capture     → variables from outside the lambda
parameters  → inputs
return_type → optional (compiler can deduce it)
*/

#include <iostream>
using namespace std;

int main() {
    auto add = [](int a, int b) {
        return a + b;
    };

    cout << add(3, 4);  // Output: 7
    return 0;
}

// Group multiple values into one object.
#include <iostream>
using namespace std;

struct Result {
    int sum;
    int product;
};

Result calculate(int a, int b) {
    return {a + b, a * b};
}

int main() {
    Result r = calculate(3, 4);
    cout << "Sum: " << r.sum << endl;
    cout << "Product: " << r.product << endl;
}

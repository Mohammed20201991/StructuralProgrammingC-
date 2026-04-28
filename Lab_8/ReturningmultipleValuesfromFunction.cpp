// Advance
// Returning multiple values from a function
// Modern C++ prefers the {} form for safety
#include <string>
#include <iostream>

using namespace std;

struct S
{
    string name;
    int num;
};

S g()
{
    // → creates a string "hello"
    string t{ "hello" };
    // → creates an integer 42
    int u{ 42 };
    // → list-initializes an object of type S using t and u
    return { t, u };
}

int main()
{
    S s = g();
    // So { t, u } initializes S{s=t, i=u}
    cout << s.name << " " << s.num << endl;
    return 0;
}

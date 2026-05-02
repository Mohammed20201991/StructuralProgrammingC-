// The `&` operator is used to create references, but it can also return a variable’s `memory address`, the location where it is stored in memory. 
// When a variable is created in `C++`, it is assigned a memory address, and using & lets you access that address.

#include <iostream>
#include <string>
using namespace std;

int main() {
  string name = "Ahmed";

  cout << &name;
  return 0;
}

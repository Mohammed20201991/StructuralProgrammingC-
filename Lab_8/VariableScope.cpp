// Local vs Gloabl Scope Varaible 
// A local variable cannot be used outside the function it belongs to.
// A variable created outside of a function, is called a global variable and belongs to the global scope.


#include <iostream>
using namespace std;

void myF() {
  // Local variable that belongs to myFunction
  int x = 5;
  
  // Print the variable x
  cout << x;
}

int main() {
  myF();
  return 0;
}

// ------------------------------------------

/*
#include <iostream>
using namespace std;

// Global variable x
int x = 5;

void myFun() {
  // We can use x here
  cout << x << "\n";
}

int main() {
  myFun();
  
  // We can also use x here
  cout << x;
  return 0;
}

*/

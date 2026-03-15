// 3- Find the Sum of Numbers from 1 to N
#include <iostream>
using namespace std;

int main() {
   int n, sum = 0;
   cout << "Enter a number: ";
   cin >> n;

   for(int i = 1; i <= n; i++) {
       sum += i;
   }
   cout << "Sum from 1 to " << n << " = " << sum << endl;
   return 0;
}
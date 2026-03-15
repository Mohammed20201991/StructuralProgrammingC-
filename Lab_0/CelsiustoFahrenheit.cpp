// Level 2:
// Convert Temperature from Celsius to Fahrenheit
// °F=(°C×9/5)+32
#include <iostream>
using namespace std;

int main() {
   double celsius, fahrenheit;

   cout << "Enter temperature in Celsius: ";
   cin >> celsius;

   fahrenheit = (celsius * 9.0 / 5.0) + 32;

   cout << "Temperature in Fahrenheit = " << fahrenheit << endl;

   return 0;
}

// Task to do Convert Temperature from Fahrenheit to Celsius
// Sol °C = (°F - 32) ÷ (9/5)
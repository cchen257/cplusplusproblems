//Write a complete C++ program that asks the user to enter a positive integer x.
//If the user enters a non-positive number the program should ask the user to try again as often as necessary.
//After the user has entered a positive value, the program should find(but not print) the remainders when x is divided by 7 and 8.
//It should then print the larger of these two remainders. (In case the two remainders are equal either can be printed.)

#include <iostream>
using namespace std;
int main() {
int x;
cout << "Enter a positive number: ";
cin >> x;
while(x <= 0) {
cout << "Not positive. Try again: ";
cin >> x;
}
cout << "Bigger remainder is: ";
if (x % 7 > x % 8) cout << x % 7;
else cout << x % 8;
cout << endl;
return 0;
}
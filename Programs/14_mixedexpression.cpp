#include <iostream>
using namespace std;
int main () {

int total {};
int num1 {}, num2 {}, num3 {} ;
const int count {3};

cout << "Entre 3 integers seprated by spaces ";
cin >> num1 >> num2 >> num3 ;

total = num1 + num2 + num3 ;

double average {0.0};

average = static_cast<double>(total)/count;
// average = (double)total/count; .........old style
 
cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
cout << "the sum of the number is : " << total << endl;
cout << "The average of the numbers is: " << average << endl;

cout << endl;
return 0;
}

#include <iostream>
using namespace std;
int main () {

int num1 {10};
int num2 {20};
 
// num1 = 1000;
// num1 = num2 = 30;

/******* ERRORS *******
        num1 = atul;
        1000 = num1; 
                    *****/
num1 = num2;

cout << "num1 is " << num1 << endl;
cout << "num2 is " << num2 << endl;
return 0;


}
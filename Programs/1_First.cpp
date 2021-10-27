/* 
this is a multiple line comment everthing written here should se 
ignored by compiler

*/
// and this is single line comment

#include <iostream>
int main() {
    int favorite_number; // at here our no. supposed to store
    std::cout <<"Enter your favorite number between 0 to 100:"; 
    std::cin >> favorite_number;
    std::cout << "Amazing that`s my favorite number too "<< std::endl;
    std::cout <<"No really!!, "  << favorite_number << " is my favorite number" << std::endl;
    return 0;
}
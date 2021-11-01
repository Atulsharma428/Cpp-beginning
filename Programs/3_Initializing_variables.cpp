#include <iostream> 
using namespace std;
int main () {

int room_width {0};     
int room_length {0};
cout << "Type your room width : ";
cin >> room_width;
cout << "Type your room length : ";
cin >> room_length;
cout << "The area of your room is " << room_width*room_length << " square feet" << endl;

    return 0; 
}


 /* some modification to make read code more easier....
cout << "Type your room width : ";
int room_width {0};
cin >> room_width;
cout << "Type your room length : ";
int room_length {0};
cin >> room_length;
cout << "The area of your room is " << room_width*room_length << " square feet" << endl; */


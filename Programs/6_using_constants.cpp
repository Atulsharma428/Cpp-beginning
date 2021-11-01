#include <iostream>
using namespace std;
int main () {

cout << "Hello! welcome to Atul`s carpet cleaning store." << endl;
cout <<"\nHow many room would you like cleaned?" << endl;

int number_of_rooms {0};
cin >> number_of_rooms;

const double price_per_room {35.0};
const double sales_tax {0.06};
const int estimate_expiry {69} ; //days

cout<<"\nEstimate for carpet cleaning services" << endl;
cout << "Number of rooms: " << number_of_rooms << endl;
cout << "Price per room: $"<< price_per_room << endl;
cout << "Cost: $" << price_per_room * number_of_rooms << endl;
cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
cout << "================================" << endl;
cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms*sales_tax) << endl;
cout << "This estimate is valid for " << estimate_expiry << " days" << endl;



return 0;
}

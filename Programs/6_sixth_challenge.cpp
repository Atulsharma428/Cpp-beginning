#include <iostream>
using namespace std;
int main () {

cout << "Hello! welcome to Atul`s carpet cleaning store." << endl;
cout <<"\nHow many small rooms would you like cleaned? " << endl;

int small_rooms {0};
cin >> small_rooms;

cout <<"How many big rooms would you like cleaned? " << endl;
int big_rooms {0};
cin >> big_rooms;

const double price_per_small_room {25.0};
const double price_per_big_room {35.0};
const double sales_tax {0.06};
const int estimate_expiry {69} ; //days

cout <<"\nEstimate for carpet cleaning services" << endl;
cout << "Number of rooms: " << small_rooms + big_rooms << endl;
cout << "Price per small room: $"<< price_per_small_room * small_rooms << endl;
cout << "Price per big room: $"<< price_per_big_room * big_rooms << endl;
cout << "Cost: $" << (price_per_small_room * small_rooms) + (price_per_big_room * big_rooms)<< endl;
cout << "Tax: $" << (price_per_small_room * small_rooms * sales_tax) + (price_per_big_room * big_rooms * sales_tax) << endl;
cout << "================================" << endl;
cout << "Total estimate: $" << (price_per_small_room * small_rooms) + (price_per_big_room * big_rooms) +  (price_per_small_room * small_rooms * sales_tax) + (price_per_big_room * big_rooms * sales_tax)<< endl;
cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

return 0;
}

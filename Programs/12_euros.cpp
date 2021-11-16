#include <iostream>
using namespace std;
int main () {

    const double usd_per_eur {1.19};

    cout << "Welcome to the EUR to USD converter "<< endl;
    cout << "Write the amount in ERU you want to convert into USD : ";

    double euros {0.0};
    double dollars {0.0};

cin >> euros ;
dollars = euros * usd_per_eur;
cout << euros << "euros equivalent to " << dollars << " dollars" << endl;
return 0;
 


}
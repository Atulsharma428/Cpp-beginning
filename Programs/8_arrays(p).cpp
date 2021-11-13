#include <iostream>
using namespace std;
int main ()
{

int test_score[] {};
cout << "\nThe test score is " << test_score[1] << endl;

cout << "Input any 3 score for test scores" << endl;

cin >> test_score[0];
cin >> test_score[1];
cin >> test_score[2];
cin >> test_score[3];


cout << "\nThe new test scores are: " << endl;

cout << "score-1: " << test_score[0] << endl;
cout << "score-2: " << test_score[1] << endl;
cout << "score-3: " << test_score[2] << endl;
cout << "score-4: " << test_score[3] << endl;

}
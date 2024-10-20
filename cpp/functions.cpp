#include <iostream>
using namespace std;

// Print grade for the score
void printGrade(double score) {

 if (score < 0 || score > 100)
 {
 cout << "Invalid score" << endl;
 exit(1);
 }
 else if (score == 90) {
    cout << "you got th highest the grade";

 }

}
int main() {

    printGrade(110);


}
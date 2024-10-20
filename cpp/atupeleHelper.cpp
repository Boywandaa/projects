#include <iostream>
using namespace std;

void multiplication();
double division(double num1, double num2);
double addition(double num1, double num2);
double subtraction(double num1, double num2);
int main() {

    cout << "******************* WELCOME TO MATHS ASSISTANT ************************  " << endl;
    cout << "                                                                         " << endl;
    cout << "ENTER YOUR CHOICE :" << endl;
    cout << "                                                                         " << endl;
    cout << "          1. multiplication \n" ;
    cout << "          2. division\n";
    cout << "          3. addition\n";
    cout << "          4. subtraction\n";
    cout << "          5. exit\n";

    int choice;
    cin >> choice;

    //random generator
     srand(time(0));
    switch(choice) {
        case 1:
            multiplication();
        // case 2:
        //     division();
        // case 3: 
        //     addition();
        // case 4:
        //     subtraction();
        break;
    }

    
    return 0;
    
}
void multiplication() {
           srand(time(0));
           int r1 = rand()%1001;
           int r2 = rand()%1001;
           cout << " What is  " << r1 << "  multiply  " << r2 << "  ?";
           int answer;
           cin >> answer;
           int result = r1 * r2;
           while (answer == result) {
        
                cout << "incorrect try again";
                cin >> answer;
           }
           cout << "correct answer is " << result;
   
   

}
double division(double num1, double num2) {

    double result = num1/num2;
    return result;
}
// double addition(double num1, double num2) {

//     double addition = num1 + num2;
//     return result;
// }
// double subtraction(double num1, double num2) {

//     double subtraction = num1 - num2;
//     return result;
// }
// int randomGenerator() {
//     srand(time(0));
    
//     int n1 = rand()%1000 + 1;
//     int n2 = rand()%1000 + 1;

//     return  
// }
#include <iostream>
#include <limits>
using namespace std;

void home();
void multiplication();
void division();
void addition();
void subtraction();
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
            home();
        case 2:
            division();
            home();
        case 3: 
            addition();
            home();
        case 4:
            subtraction();
            home();
        case 5:
            exit(1);
        break;
    }

    
    return 0;
    
}
void multiplication() {
        //    do {
           srand(time(0));
           int r1 = rand()%1001;
           int r2 = rand()%1001;
           cout << " What is  " << r1 << "  multiply  " << r2 << "  ?";
           int answer;
           cin >> answer;
           int result = r1 * r2;
           while (answer != result) {

                if(answer) { 
                cout << "incorrect try again" << endl;
                } else {
                cout << "invalid input try again" << endl;
                cin.clear(); 
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                }
                cin >> answer;
           }
           cout << "correct answer is " << result << endl;
        //    } while (ch =='y') {
        //     if(ch == 'y') {

        //     }
        //    }
   
   

}
void division() {

    srand(time(0));
           int r1 = rand()%1001;
           int r2 = rand()%1001;
           cout << " What is  " << r1 << "  divide  " << r2 << "  ?";
           int answer;
           cin >> answer;
           int result = r1 / r2;
           while (answer != result) {

                if(answer) { 
                cout << "incorrect try again" << endl;
                } else {
                cout << "invalid input try again" << endl;
                cin.clear(); 
                // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                }
                cin >> answer;
           }
           cout << "correct answer is " << result << endl;
}
void addition() {

   srand(time(0));
           int r1 = rand()%1001;
           int r2 = rand()%1001;
           cout << " What is  " << r1 << "  add  " << r2 << "  ?";
           int answer;
           cin >> answer;
           int result = r1 + r2;
           while (answer != result) {

                if(answer) { 
                cout << "incorrect try again" << endl;
                } else {
                cout << "invalid input try again" << endl;
                cin.clear(); 
                // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                }
                cin >> answer;
           }
           cout << "correct answer is " << result << endl;
}
void subtraction() {

   srand(time(0));
           int r1 = rand()%1001;
           int r2 = rand()%1001;
           cout << " What is  " << r1 << "  take away  " << r2 << "  ?";
           int answer;
           cin >> answer;
           int result = r1 - r2;
           while (answer != result) {

                if(answer) { 
                cout << "incorrect try again" << endl;
                } else {
                cout << "invalid input try again" << endl;
                cin.clear(); 
                // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                }
                cin >> answer;
           }
           cout << "correct answer is " << result << endl;
}

void home() {
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
            home();
            break;
        case 2:
            division();
            home();
            break;
        case 3: 
            addition();
            home();
            break;
        case 4:
            subtraction();
            home();
            break;
        case 5:
            exit(1);    

        break;
    }
}
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // creating a file output object 
    ofstream MyFile("example.txt");

    if (MyFile.is_open()) {

        MyFile << "creating an output file \n" ;
        MyFile << "line number 2 \n";
        MyFile.close();
    } else {
        cout << " error opening file";
    }

}
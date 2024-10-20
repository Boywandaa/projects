#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {


    string line;
    ifstream MyFile("example.txt") ;

    if (MyFile.is_open()) {
        while (getline(MyFile, line))
        {
            cout << line << "\n";
        }
        MyFile.close();
        
    }else {
        cout << "error opening file";
    }
    return 0;
    
}
#include <iostream>
#include <string>
using namespace std;


class Contact {
    private:
        string firstname;
        string lastname;
        string phonenumber;
    
    public:
         Contact () {
            firstname = "";
            lastname = "";
            phonenumber = "";
         }

         Contact(string fname, string lname, string pnumber) {
            firstname = fname;
            lastname = lname;
            phonenumber = pnumber;
         }

         string getFirstname() {
            return firstname;
         }

         string getLastname() {
            return lastname;
         }
         
         string getPhonenumber() {
            return phonenumber;
         }
         bool operator== (const Contact& obj) {
           
            if(phonenumber == obj.phonenumber) {
                return true;
            }
            else 
             return false;

         }

};
class Phonebook {
    private:
        Contact *contactArray = new Contact;
        int increment ;
        

}
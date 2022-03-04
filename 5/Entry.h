#define ENTRY_H
#include <iostream>
#include <string>

using namespace std;
struct Entry {
string name, last, mail;

    void setName(string first_name){
        name = first_name; 
    }

    void setLastname(string last_name){
        last = last_name;
    }

    void setEmail(string email){
        mail = email; 
    }

    void print(){
    
        cout<<"First Name:"<< name << endl;
        cout<<"Last Name:"<< last << endl;
        cout<<"Email:"<< mail << endl; 

    }

};
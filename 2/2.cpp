#include <iostream>
#include <fstream> 
#include <string>
#include "Stack.h"

using namespace std;

int main () {
    ifstream input;
    struct Stack *container = new Stack();
    container -> initialize();
    double num;
    double counter;
    string line;
    string s ="input.txt";
    input.open(s.c_str());
    while (!input.eof()){
        input >> num;
        double *newNum = new double [1];
        newNum[0] = num;
        container -> push(newNum);    
    }
    //input.close();
    while (container-> head != NULL ) { 
        if (container->head->next != NULL){
        container->head = container->head->next;
        double * data = (double *)container->head->data;
        cout << (*data) << " "<< endl;
        }

       else if(container->head ->next == NULL){
            break;
        }
   }
    while(container -> head != NULL){
        container ->pop();
    }
    container -> cleanup();
    }
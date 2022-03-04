#include <iostream>
#include <fstream> 
#include <string>
#include "LinkedList.h"

using namespace std;

int main () {
    ifstream input;
    struct LinkedList *container = new LinkedList();
    container -> start();
    float num;
    double counter;
    string line;
    string s ="input.txt";
    input.open(s.c_str()); 
    while (!input.eof()){
        input >> num;
        float *newNum = (float *)malloc(sizeof(float ));
        *newNum = num;
        container -> add((void *) newNum) ;  
    }
    input.close();
    for(int i = 0; i < container -> size -1; i++) {
       cout << *(float *)container -> grab(i) << " " <<endl;
   }
    return 0;
    }
#include <iostream>
#include <fstream> 
#include "Stash.h"

using namespace std;

int main () {
    ifstream input;
    struct Stash container;
    double num;
    input.open( "input.txt"); //open files with inout numbers
    container.initialize(10);

    while (!input.eof()){
        input >> num;
        container.add(&num, 1);
    }
    input.close();
    for(int i= 0 ; i <container.count() -1; i++){
        cout << *(double*) container.fetch(i) << endl;
    }
    container.cleanup();

    }
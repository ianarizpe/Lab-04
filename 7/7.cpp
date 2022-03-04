#include <iostream>
using namespace std;

struct oneCharOneDub{
    char x;
    double y;
};
struct twoCharOneDub{
    char x;
    char y;
    double z;
};
struct threeCharOneDub{
    char x;
    char y;
    char z;
    double a;
};
struct fourCharOneDub{
    char w;
    char x;
    char y;
    char z;
    double a;
};
struct emptyStruct{
    //
};
struct oneCharOneIntOneChar{
    char x;
    int y;
    char z;
};
struct twoCharOneInt{
    char x;
    char y;
    int z;
};

int main(){
    cout << "containing 1 char and 1 double: " << sizeof(oneCharOneDub) << endl;
    cout << "2 chars and 1 double: " << sizeof(twoCharOneDub) << endl;
    cout << "3 chars and 1 double: " << sizeof(threeCharOneDub) << endl;
    cout << "4 chars and 1 double: " << sizeof(fourCharOneDub) << endl;
    cout << "an empty struct: " << sizeof(emptyStruct) << endl;
    cout << "1 char, followed by 1 int and then 1 char: " << sizeof(oneCharOneIntOneChar) << endl;
    cout << "2 chars followed by 1 int: " << sizeof(twoCharOneInt) << endl;
}

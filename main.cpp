#include <iostream>
// #include "a.h"
using namespace std;


class A {
    public:
        int a;
    A(int b){
        a =b;
    }
};


int main() {
    A a =  A(23);
    cout << a.a;
    return 0;
}

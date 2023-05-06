/**
 * 函数隐藏：
 *  函数隐藏是指派生类的函数屏蔽了与其同名的基类函数，只要是与基类同名的成员函数，不管参数列表是否相同，基类函数都会被隐藏。 
*/
#include <iostream>

using namespace std;

class Base {
public:
    void func(int tmp, float tmp1) {
        cout << "Bse: func(int tmp, float tmp1)" << endl;
    }
};

class Derive: public Base {
public:
    void func(int tmp) {
        cout << "Derive: func(int tmp)" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Derive derive;
    derive.func(1);
    // derive.func(1, 0.01); // candidate expects 1 argument, 2 provided
    return 0;
}

/**
 * 验证：
 *   父类的public 属性会不会被子类继承？
*/
#include <iostream>

class Base {
public:
    int a = 1;
};

class Test: public Base {
};

int main(int argc, char const *argv[])
{
    Test test;
    std::cout << "test.a=" << test.a << std::endl;
    return 0;
}


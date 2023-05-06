/**
 * 函数重写：
 *  函数覆盖是指派生类中存在重新定义的函数。函数名、参数列表、返回值类型都必须同基类中被重写的函数一致，只有函数体不同。派生类调用时会调用派生类的重写函数，不会调用被重写函数。重写的基类中被重写的函数必须有 virtual 修饰。
*/
#include <iostream>

using namespace std;

class Base {
public:
    virtual void func(int tmp) {
        cout << "Base: func(int tmp):" << tmp << endl;
    }
};

class Derived: public Base {
public:
    virtual void func(int tmp) {
        cout << "Derived: func(int tmp):" << tmp << endl;
    }
};

int main(int argc, char const *argv[])
{
    Base *p = new Derived();
    p->func(10);
    delete p;
    return 0;
}

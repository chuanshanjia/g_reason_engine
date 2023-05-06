/*================================================
主题：
 1、申明并初始化字符串对象
 2、字符串对象拼接
 3、混合拼接字符串对象和字符串字面量
 4、逐字符的把字符串中字符改成小写
 5、截取子字符串
 6、字符串比较
 7、字符串比较-飞船运算符
 8、字符串比较-使用Compre函数比较字符串
================================================*/
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::cout << "1、申明并初始化字符串对象==========================" << std::endl;
    std::string hw {"Hello, world"};
    std::string hello {"Hello, world", 5};
    std::string comma {hw, 5, 1};
    std::string world {hw, 6, 5};

    std::string zzz(3, 'z');

    std::cout
        << "hw:" << hw << std::endl
        << "hello:" << hello << std::endl
        << "comma:" << comma << std::endl
        << "world:" << world << std::endl
        << zzz << std::endl << std::endl;;

    std::cout << "2、字符串对象拼接==========================" << std::endl;
    std::string s1 {"你好，"};
    std::string s2 = "早安中国";

    std::string s1s2 {s1 + s2};

    std::cout << "s1+s2:" << s1s2 << std::endl << std::endl;;


    std::cout << "3、混合拼接字符串对象和字符串字面量==========================" << std::endl;
    std::string s {};

    s += "How ";
    s += "are ";
    s += "you" " " + std::string("doing? "); 
    s.append(2, '-').append(" from C++20!");
    std::cout << s << std::endl << std::endl;

    std::cout << "4、逐字符的把字符串中字符改成小写==========================" << std::endl;
    auto p {std::string("HELLO")};
    std::cout << p << std::endl;
    // 依次访问，修改
    for (auto& c : p) {
        c += 32;
    }
    std:: cout << p << std::endl;

    p[0] = 'H';
    std::cout << p << std::endl;


    std::cout << "5、截取子字符串==========================" << std::endl;

    auto title { std::string{
        "今天 is May 3th"
    }};
    auto sub = title.substr(0, 6);
    std::cout << sub << std::endl;

    std::cout << "6、字符串比较==========================" << std::endl;
    std::string boy {"body"};
    auto girl { std::string{"girl"}};

    if (boy < girl) {
        std::cout << "boy < girl" << std::endl;
    } else if (boy == girl) {
        std::cout << "boy == girl" << std::endl;
    } else {
        std::cout << "boy > girl" << std::endl;
    }

    // 飞船运算符
    std::cout << "7、字符串比较(飞船运算符)==========================" << std::endl;
    const auto cmp = boy <=> girl;

    if (std::is_lt(cmp)) {
        std::cout << "boy < girl" << std::endl;
    } else if (std::is_gt(cmp)) {
        std::cout << "boy > girl" << std::endl;
    } else { // std::is_eq()
        std::cout << "boy == girl" << std::endl;
    }

    // compare
    std::cout << "8、字符串比较-compare==========================" << std::endl;
    const std::string title1 {"A jackhammer"};
    const std::string title2 {"jack"};
    const int result = title1.compare(2, title2.length(), title2);
    if (result == 0) {
        std::cout << "title1 include title2" << std::endl;
    }

    return 0;
}

/*==========================================
 * 常量定义
 * constexpr double PI = 3.14;
 * constexpr double Degree = PI * 2.0;
 * 
 * constexpr int g() {return 5;}
 * int f[g() + 10]; // 合法
 *
 *==========================================
*/

#include <iostream>

using namespace std;

constexpr double PI = 3.14;
constexpr int g() {return 5;}

int main(int argc, char const *argv[])
{
    /* code */
    cout << "PI=" << PI << ",  g()=" << g() << endl;
    return 0;
}


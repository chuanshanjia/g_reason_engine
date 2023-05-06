/*==========================================
 * strlen 是头文件 <cstring> 中的函数,
 * strlen 测量的是字符串的实际长度（其源代码如下），以 \0 结束，而 sizeof 测量的是对象或者表达式类型占用的字节大小 
 *
 *==========================================
*/

#include <iostream>
#include <cstring>

using namespace std;

size_t mystrlen(const char* str) {
    size_t length = 0;
    while (*str++) {
        length++;
    }

    return length;
}

struct flexarray {
    int val;
    int array[];
};

int main(int argc, char const *argv[])
{
    char arr[10] = "hello";
    cout << "mystrlen(arr):" << mystrlen(arr) << endl;
    cout << "strlen(arr):" << strlen(arr) << endl;
    cout << "sizeof(arr):" << sizeof(arr) << endl;
    cout << "sizeof(struct flexarray):" << sizeof(struct flexarray) << endl;
    return 0;
}

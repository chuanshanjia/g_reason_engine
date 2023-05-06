/*==========================================
 * 范围 for 语句
 * for (declaration : expression){
 *   statement
 *}
 *==========================================
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char arr[] = "Hello, world!";
    
    for (char c : arr) {
        cout << c << endl;

    }
    return 0;
}

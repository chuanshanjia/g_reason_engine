#include <iostream>

using namespace std;

extern int g_var;
// extern char* gs_var; // undefined reference to `gs_var'
// extern int test(); // undefined reference to `test()'


int main(int argc, char const *argv[])
{
    /* code */
    cout << "g_var:" << g_var << endl;
    // cout << "static gs_var:" << gs_var << endl;
    // cout << "text():" << test() << endl;
    return 0;
}

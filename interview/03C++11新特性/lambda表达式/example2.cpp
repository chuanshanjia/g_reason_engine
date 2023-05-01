#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[4] = {4, 2, 3, 1};
    //对 a 数组中的元素进行升序排序
    sort(arr, arr + 4, [=](int x, int y) -> bool{ return x < y; } );

    auto f = [&](int x)-> int {
        return arr[0] + x;
    };

    for(int n : arr){
        cout << n << " ";
    }
    return 0;
}

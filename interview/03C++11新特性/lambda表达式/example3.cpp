#include <iostream> 
using namespace std;
int main()
{
	size_t t = 9;
	auto f = [t]() mutable{
		t++;
		return t; 
	};
	cout << f() << endl; // 10
	t = 100;
	cout << f() << endl; // 11
	cout << "t:" << t << endl; // t: 100
	return 0;
}

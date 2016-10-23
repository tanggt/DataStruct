#include <iostream>
#include <exception>
#include "chapter1_exercise1.hpp"

using std::cout;
using std::endl;

int main()
{
	cout << gcd(20,30)<< endl;
	cout << gcd(112, 42) << endl;
	cout << gcd(45789, 34570) << endl;
	cout << gcd(0, 0) << endl;
	return 0;

}
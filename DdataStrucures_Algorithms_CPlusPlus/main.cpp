#include <iostream>
#include <exception>
#include "chapter1_exercise1.hpp"

using std::cout;
using std::endl;

int main()
{
	int a[] = { 1, 2, 3 };
	int b[] = { 1, 2, 3 };
	cout << inner_product<int>(a, b, 3) << endl;
	cout << factor_Non_recursive(10) << endl;
	cout << ackerman_fun(2, 2) << endl;
	return 0;

}
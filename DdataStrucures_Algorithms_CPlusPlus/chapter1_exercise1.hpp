#ifndef _CHAPTER1_EXERCISE1_HPP_
#define _CHAPTER1_EXERCISE1_HPP_
#include <limits.h>
#include <iostream>
#include <cmath>
/* 19. Non recursive factorial
 * v1.0.0 by Thomson
 * 2016.10.21 20:30 in UESTC
 */
long long factor_Non_recursive(unsigned int n)
{
	/*if (n >= UINT_MAX)
	{
	std::cout << "paramter n must be a integer" << std::endl;
	}*/

	// define 0!=1
	if (0 == n)
		return 1;
	long long result = 1;
	for (unsigned int i = 2; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

/*  20. Fibonacci using recursion
 *  v1.0.0 by Thomson
 *  2016.10.21 20:30 in UESTC
 */
long long fibonacci(unsigned int n)
{
	/*if (n >= UINT_MAX)
	{
	std::cout << "paramter n must be a integer" << std::endl;
	}*/
	if (0 == n)
		return 0;
	if (1 == n)
		return 1;
	// fibonacci(n) =  fibonacci(n - 1) + fibonacci(n - 2)
	return fibonacci(n - 1) + fibonacci(n - 2);
}

/* To determine whether a number is an even number.
 *  v1.0.0 by Thomson
 *  2016.10.21 23:00 in UESTC
 */
bool isEven(unsigned int n)
{
	return (n & 0x01) == 0;
}

/* To determine whether a number is an odd number.
 *  v1.0.0 by Thomson
 *  2016.10.21 23:00 in UESTC
 */
bool isOdd(unsigned int n)
{
	return (n & 0x01) == 1;
}

/* 21. If f(n) = n/2 when n is a even number
 *     else
 *	      f(n) = f(3*n + 1)
 *     End if
 *  v1.0.0 by Thomson
 *  2016.10.21 23:00 in UESTC
 */
long fun_n_odd_even(unsigned int n)
{
	if (isEven(n))
		return n / 2;
	else
		return fun_n_odd_even(3 * n + 1);
}

/* 22. Ackermann's Function
*     A(i,j) = 2^j when i = 1 and j >=1
*	  A(i,j) = A(i-1,2£© i>=2 and j=1
*	  A(i,j) = A(i-1,A(i,j-1£© when i>=2 and j>=2
*  v1.0.0 by Thomson
*  2016.10.23 18:14 in UESTC
*/
long ackerman_fun(unsigned int i, unsigned int j)
{
	if (1 == i && j >= 1)
		return static_cast<long>(std::pow(2, j));
	else if (i >= 2 && 1 == j)
		return ackerman_fun(i - 1, 2);
	else if (i >= 2 && j >= 2)
		return ackerman_fun(i - 1, ackerman_fun(i, j - 1));

	return 0;
}


/* 23. Greast Common Divisor,GCD
*         gcd(x,y) = x ,when y = 0
*	      gcd(x,y) = gcd(y,x mod y) when y > 0         
*  v1.0.0 by Thomson
*  2016.10.23 18:14 in UESTC
*/

long gcd(unsigned int x, unsigned int y)
{
	if (0 == y)
		return x;
	return gcd(y, x%y);
}

#endif

/*  The hpp file is to complete exercises of data structures,
 *	algorithms,and application in C++.
 *  Copyright (c) 2014-2017 by Thomson.  ALL RIGHTS RESERVED.
 *  Consult your license regarding permissions and restrictions.
 *  v1.0.0
 */
#ifndef _CHAPTER1_EXERCISE1_HPP_
#define _CHAPTER1_EXERCISE1_HPP_
#include <limits.h>
#include <iostream>

/* 19. Non recursive factorial
 * v1.0.0 by Thomson
 * 2016.10.21 20:30 in UESTC
 */
long long factor_Non_recursive(unsigned int n)
{
	if (n >= UINT_MAX)
	{
		std::cout << "paramter n must be a integer" << std::endl;
	}
	
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
	if (n >= UINT_MAX)
	{
		std::cout << "paramter n must be a integer" << std::endl;
	}
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

#endif

/*  The hpp file is to complete exercises of data structures,
 *	algorithms,and application in C++.
 *  Copyright (c) 2014-2017 by Thomson.  ALL RIGHTS RESERVED.
 *  Consult your license regarding permissions and restrictions.
 *  v1.0.0
 */
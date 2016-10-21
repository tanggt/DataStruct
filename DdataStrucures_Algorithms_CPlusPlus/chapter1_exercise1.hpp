#ifndef _CHAPTER1_EXERCISE1_HPP_
#define _CHAPTER1_EXERCISE1_HPP_
#include <limits.h>

/* 19. Non recursive factorial
 * v1.0.0 by Thoson 
 * 2016.10.2 20:30 in UESTC 
*/
long long factor_Non_recursive(unsigned int n)
{
	if (n >= UINT_MAX)
		throw "paramter n must be a integer";
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

/* 20. Fibonacci using recursion
 *  v1.0.0 by Thoson
 *  2016.10.2 20:30 in UESTC
 */
long long fibonacci(unsigned int n)
{
	if (n >= UINT_MAX)
		throw "paramter n must be a integer";
	if (0 == n)
		return 0;
	if (1 == n)
		return 1;
	// fibonacci(n) =  fibonacci(n - 1) + fibonacci(n - 2)
	return fibonacci(n - 1) + fibonacci(n - 2);
}

#endif

/*  The hpp file is to complete exercises of data structures,
 *	algorithms,and application in C++.
 *  Copyright (c) 2014-2017 by Thomson.  ALL RIGHTS RESERVED.
 *  Consult your license regarding permissions and restrictions.
 *  v1.0.0
*/
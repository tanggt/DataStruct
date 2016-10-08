#include <iostream>
#include <vector>
int main()
{
	std::vector<int> v;
	for (unsigned int i = 0; i < 100; i++)
	{
		v.push_back(i);
	}
	return 0;
}
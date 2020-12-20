#include <iostream>
#define print(x) std::cout << a << "\n"

int main()
{
	int a = 5;
	const int* ptr;
	ptr = &a;

	print(a);

	ptr++;

	(*ptr)++; // ERROR: constant value of pointer;
	
	return 0;
}

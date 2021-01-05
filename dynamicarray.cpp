#include <iostream>
using namespace std;

int main()
{
	int array_size = 3;

	int* ptr = new int[array_size];
	for (int i = 0; i < array_size; i++)
	{
		cout << *(ptr + i) << endl;
	} 
	
	delete[] ptr;
	ptr = nullptr;

	return 0;
}


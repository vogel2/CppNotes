#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int> numbers; // initialize vector

	// add values to vector
	numbers.push_back(13);
	numbers.push_back(3);
	numbers.push_back(9);
	
	// print vector using range based for loop
	for (int& n : numbers) // using & to avoid copying
	{
		cout << n << "\t";
	}

	cout << "\n";

	numbers.erase(numbers.begin() + 1); // remove index value from vector
	

	for (int& n : numbers)
	{
		cout << n << "\t";
	}

	cout << "\n";

	// delete vector
	numbers.clear();

	for (int& n : numbers)
	{
		cout << n << "\t";
	}
}

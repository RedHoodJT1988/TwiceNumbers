#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 10> intArray{};

	for (int i = 0; i < intArray.size(); i++)
	{
		intArray[i] = i * 2;
	}

	for (int num : intArray)
	{
		cout << num << endl;
	}

	cout << "Size of Array: " << intArray.size() << endl;
	return 0;
}
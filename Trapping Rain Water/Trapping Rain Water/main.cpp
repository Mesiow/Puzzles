#include <iostream>
#include <algorithm>

int findWater(int arr[], unsigned int n) //n represents height of blocks at index
{

	int value = 0;
	int units = 0;
	int i = 1;

	if (i < n)
	{
		while (arr[i] < arr[0])
		{
			//check values with first value until we reach one that is greater than 3
			i++;
		}
	}

		for (int i = n - 1; i > 0; --i)
		{
			if (arr[i] < arr[0])
			{
				value = arr[0] - arr[i];
				units += value;
			}
		}

	return units;
}

void print(int arr[], int size)
{
	std::cout << "Container layout: ";
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

int main()
{
	//int arr[size] = { 3, 0, 0, 2, 0 ,4 }; //2 blocks up , floor, 2 blocks up
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	2, 3

	int size = sizeof(arr) / sizeof(arr[0]); //get size
	//int units = findWater(arr, size); //pass array and number of blocks
	print(arr, size);

	int units = findWater(arr, size);
	std::cout << "\n";
	std::cout << "Max units of water container can hold: " << units
		<< std::endl;

	std::cin.get();
	return 0;
}
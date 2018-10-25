#include <iostream>


int *getElements(int arr[], int temp[], int size, int nmberElements)
{
	int *t = temp;

	return t;
}


void rotateLeft(int arr[], int size, int nmberElements)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		temp = arr[i];
		arr[i] = arr[i + 1];
		temp = arr[i + 1];
		//temp[i] = arr[i]; //store elements to shift left in temp array
	}

}

void rotate(int arr[], int temp[], int size, int nmberElements)
{
	auto t = getElements(arr, temp, size, nmberElements);
	for (int i = 0; i<nmberElements; i++)
		rotateLeft(arr, size, nmberElements);



	for (int i = size; i > nmberElements; i--)
		arr[i] = t[i];
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

int main()
{

	int arr[] = { 1, 2, 3 ,4, 5, 6 };
	int d = 2; //number of elements to shift left

	int size = sizeof(arr) / sizeof(arr[0]);
	print(arr, size);
	rotate(arr, size, d);
	std::cout << "Shifted left " << d << std::endl;
	print(arr, size);

	std::cin.get();
	return 0;
}
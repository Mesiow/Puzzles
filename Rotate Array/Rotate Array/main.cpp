#include <iostream>
//Rotates Array to the left based on d(how many units to rotate left)


void rotateLeft(int arr[], int size, int nmberElements)
{
	for (int i = 0; i < size; i++)
		arr[i] = arr[i + 1];
}

void rotate(int arr[], int temp[], int size, int nmberElements)
{

	for (int i = 0; i<nmberElements; i++)
		rotateLeft(arr, size, nmberElements);


	int k = 0;
	for (int i = (size - nmberElements); i < size; i++)
	{
		arr[i] = temp[k];
		k++;
	}
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

	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int d=2; //number of elements to shift left

	int *temp = new int[d];
	for (int i = 0; i < d; i++)
		temp[i] = arr[i];

	int size = sizeof(arr) / sizeof(arr[0]);
	print(arr, size);
	rotate(arr, temp, size, d);
	std::cout << "Shifted left " << d << std::endl;
	print(arr, size);

	system("pause");
	std::cin.get();

	delete temp;
	return 0;
}
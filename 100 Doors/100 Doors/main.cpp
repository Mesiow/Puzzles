#include <iostream>

/*There are 100 doors in a row, all doors are initially closed. 
A person walks through all doors multiple times and toggles
(if open then close, if close then open) them in following way:

In first walk, the person toggles every door

In second walk, the person toggles every second door, i.e., 2nd, 4th, 6th, 8th, …

In third walk, the person toggles every third door, i.e. 3rd, 6th, 9th, …

In 100th walk, the person toggles 100th door.*/

//Which doors are open in the end?


struct door
{
	bool open;
	bool closed;
};

void initDoors(door doors[], int size)
{
	for (int i = 0; i < size; i++) //initiallly closed
	{
		doors[i].closed = true;
		doors[i].open = false;
	}
}

void checkToggle(door doors[], unsigned int index)
{
	if (doors[index].closed == true) //closed toggle
		doors[index].closed = false;
	else if (doors[index].closed == false)
		doors[index].closed = true;

	if (doors[index].open == true) //open toggle
		doors[index].open = false;
	else if (doors[index].open == false)
		doors[index].open = true;
}


void toggle(door doors[], int size, int rule)
{
	if (rule == 100)
	{
		checkToggle(doors, rule - 1); //toggle door at 100
		return;
	}
	for (int i = 0; i < size; i+=rule) 
	{
		checkToggle(doors, i);
	}
}

void walk(door doors[], int size, int walkCount)
{
	if (walkCount > 100)
		return;

	for (int i = 1; i <= size; i++)
	{
		toggle(doors, size, i);
	}
}

void puzzle(door doors[], int size)
{
	walk(doors, size, 1);
}

void print(door doors[], int size)
{
	for (int i = 1; i <= size; i++)
	{
		if (doors[i].open == true)
			std::cout << i << " ";
	}
}

int main()
{
	door doors[100];

	initDoors(doors, 100);

	puzzle(doors, 100);
	std::cout << "Open doors: " << std::endl;
	print(doors, 100);

	std::cin.get();
	return 0;
}
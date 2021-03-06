#include <stdio.h>

/*this exersize highlights how strings are stored as arrays of bytes terminated by a null byte*/

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[5] = {'a'};

	//printing the raw numbers
	printf("the numbers are %d %d %d %d\n",
		numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("The name characters are %c %c %c %c %c\n",
		name[0], name [1], name [2], name [3], name [4]);

	printf("The name is %s\n", name);

	//establish numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	//store the name
	name[0] = 'G';
	name[1] = 'a';
	name[2] = 'r';
	name[3] = 'y';
	name[4] = '\0';

	//Printing out after storing values
	printf("the numbers are %d %d %d %d\n",
		numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("The name characters are %c %c %c %c %c\n",
		name[0], name [1], name [2], name [3], name [4]);

	printf("The name is %s\n", name);

	//using a pointer to make the array highlights how printf interprets character arrays as strings and vice versa in C
	char *pointer = "Gary";

	printf("using pointer name is %s\n", pointer);

	printf("pointer each: %c %c %c %c %c\n",
		pointer[0], pointer[1], pointer[2], pointer[3], pointer[4]);

	return 0;
}






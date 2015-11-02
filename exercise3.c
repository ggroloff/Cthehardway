#include <stdio.h>

int main()
{
	int age=25;
	int height=69;
	int dollars=100;

/* %d indicates the position the corresponding integer will be inserted in the printed string. Characters and strings have their own shortcuts. \n indicates a new line, \t is a tab. */

	printf("I am %d years old.\n", age);
	printf("I am %d inches tall.\n", height); 
	printf("I have %d dollars.\n", dollars);

	return 0;
}

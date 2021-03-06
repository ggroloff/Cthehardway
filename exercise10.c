#include <stdio.h>

/*This exercise demonstrates the structure of using a for loop.

for(INITIALIZER; TEST; INCREMENT) {CODE;}

*/

int main(int argc, char *argv[])
{
	int i = 0;

	//printing out what is in argv (prints out the additional arguments provided after typing ./exercise10 and then executing
	for(i = 1; i < argc; i++) {
		printf("arg number %d is %s\n", i, argv[i]);
	}

	//Printing out any old string array
	char *colors[] = {
		"red", "orange", "green", "blue", "yellow"
	};
	int num_colors = 5;

	for(i = 0; i < num_colors; i++) {
		printf("color %d is %s\n", i, colors[i]);
	}

	return 0;
}

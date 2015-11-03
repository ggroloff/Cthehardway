#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Gary";
	char full_name[] = {
	'G', 'a', 'r', 'y',
	' ', 'G', '.', ' ',
	'R', 'o', 'l', 'o', 'f', 'f', '\0'
	};

	printf("The size of an int is %ld\n", sizeof(int));
	printf("The size of the areas integer array is %ld\n", sizeof(areas));
	printf("The number of ints in areas is %ld\n", sizeof(areas)/sizeof(int));
	printf("the first area is %d, the second is %d.\n", areas[0], areas[1]);
	printf("The size of a char is %ld\n", sizeof(char));
	printf("The size of the full_name character array is %ld\n", sizeof(full_name));
	printf("The number of chars in full_name is %ld\n", sizeof(full_name)/sizeof(char));
	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

	return 0;
}

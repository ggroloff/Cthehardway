#include <stdio.h>

int main(int argc, char *argv[])
{
	// make two arrays
	int level[] = {40, 40, 2, 20, 34, 29};
	char *names[] = {
		"Gary", "Jessica", "Katie",
	        "Adam", "Jon", "Andrew"
	};

	// safely get the size of the level array
	int count = sizeof(level) / sizeof(int);
	int i = 0;

	// first way using indexing
	for(i = 0; i < count; i++) {
		printf("%s is level %d.\n",
			names[i], level[i]);
	}

	printf("---\n");
	
	//set up pointers to the beginning of arrays
	
	int *cur_level = level;
	char **cur_name	= names;

	// second method using pointers

	for(i=0; i < count; i++) {
		printf("%s is level %d.\n", *(cur_name+i), *(cur_level+i));
	}

	printf("---\n"); //separator between methods

	//third method, pointers are arrays

	for(i=0; i < count; i++) {
		printf("%s is level %d again.\n", cur_name[i], cur_level[i]);
	}

	printf("---\n");

	//fourth method which is needlessly complex

	for(cur_name = names, cur_level = level;
		(cur_level - level) < count; cur_name++, cur_level++)
	{
		printf("%s is definitely level %d.\n", *cur_name, *cur_level);
	}

	return 0;
}










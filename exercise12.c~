#include <stdio.h>

/*This exercise focuses on the use of if, else if, else statements to conditionally print arguments depending on how many there are*/

int main(int argc, char *argv[])
{
	int i = 0;

	if(argc ==1) {
		printf("There is only one argument, not enough.\n");
	} else if(argc > 1 && argc < 4) {
		printf("Perfect, here they are:\n");

		for(i=0; i < argc; i++) {
			printf("%s\n", argv[i]);
		}
	} else {
		printf("There are too many arguments.\n");
	}
	return 0;
}

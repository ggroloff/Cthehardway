#include <stdio.h>

/*This is the extra credit to exercise 13. This is now contains some original code by me. The assignment is to make this code handle all arguments passed to it by using an additional for loop.*/

int main(int argc, char *argv[])
{
	int arg_pos = 1;
	for (arg_pos=1; arg_pos < argc; arg_pos++) { //here is the additional for loop used

	int i = 0;
	for(i=0; argv[arg_pos][i] != '\0'; i++) {//this for loop is modified to have a new variable
		char letter = argv[arg_pos][i];

		switch(letter) {
			case 'a':
			case 'A':
				printf("%d: 'A'\n", i);
				break;

			case 'e':
			case 'E':
				printf("%d: 'E'\n", i);
				break;
			case 'i':
			case 'I':
				printf("%d: 'I'\n", i);
				break;
			case 'o':
			case 'O':
				printf("%d: 'O'\n", i);
				break;
			case 'u':
			case 'U':
				printf("%d: 'U'\n", i);
				break;
			case 'y':
			case 'Y':
				if(i < 2) {
					//sometimes y
					printf("%d: 'Y'\n", i);
				}
			
				break;
			
			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}
		}
	}
	return 0;
}

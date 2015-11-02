/*This file will lay out the basics structure of a C program. This is a multi line Comment.*/

#include <stdio.h> /*Imports the contents of header files containing the functions you wish to use.*/

int main(int argc, char *argv[]) /*The main function is the first thing run after loading the program. It must take two inputs, an integer for argument count and an array of characters, as well as return an integer*/

{
	int distance = 100; /*Variable declaration and assignment*/

	//This is a single line comment

	printf("you are %d miles away.\n", distance); /*The printf function outputs the desired text to be displayed to the console. It can also handle variables and formatting changes.*/

	return 0; /*Exits the main function and closes the program.*/
}

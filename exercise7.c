#include <stdio.h>

int main (int argc, char *argv[])
{
	int bugs = 100;
	double bug_rate = 1.2;
	printf("you have %d bugs at a rate of %f.\n", bugs, bug_rate);

	long project_defects = 1L * 1024L * 1024L * 1024L;
	printf("The entire project has %ld bugs.\n", project_defects);
	//long stores longer numbers, %ld formats print to output a long decimal

	double expected_bugs = bugs * bug_rate;
	printf("There are %f expected bugs.\n", expected_bugs);

	double portion_of_project = expected_bugs / project_defects;
	printf("The fraction of the project these bugs represent is %e.\n", portion_of_project);
	// %e denotes the use of scientific notation for extremely small numbers

	//this is just a weird demo of multiplying an int and a char
	char null_byte = '\0';
	int care_percentage = bugs * null_byte;
	printf("Which means you should care %d%%.\n", care_percentage);
	// %% prints a % sign

	return 0;
}

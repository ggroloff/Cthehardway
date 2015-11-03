#include <stdio.h>

int main (int argc, char *argv[])
{
	int distance = 100;
	float power = 1234.2342;
	double super_power = 1234.345;
	char initial = 'G';
	char first_name[] = "Gary";
	char last_name[] = "Roloff";

	printf("you are %d meters from home.\n", distance);
	printf("The house uses %f watts.\n", power);
	printf("I have %f super powers.\n", super_power);
	printf("My middle initial is %c.\n", initial);
	printf("My first name is %s.\n", first_name);
	printf("My last name is %s.\n", last_name);
	printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

	return 0;
}


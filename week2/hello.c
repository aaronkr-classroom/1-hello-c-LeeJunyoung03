#include <stdio.h>

int main(void) {
	int age = 23;
	char grade = 'A';
	char name[] = "Lee";

	printf("hello world\n");
	printf("My name is %s.\n", name);
	printf("I'm %dyears old\n\t", age);
	printf("I want a %c grade\n", grade);
	return 0;
}

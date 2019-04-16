#include <stdio.h>
#include <string.h>

/* Assignment:
1. fix bugs in the code
2. add comments
3. create a new branch on git
4. git push changed buggy.c
5. create pull request with your name and changes you made
*/

struct dog
{
	int age;
	char name[13]; //Changed bracket type and removed = sign
};

int main()
{
	struct dog thing1; //Semi colon
	struct dog thing2;

	thing1.age = 5;
	thing2.age = 13;

	puts("What is your dogs name?"); //Changed to regular brackets
	scanf("%s", thing1.name); //Removed S in names, changed to scanf_s because it was not working nice with gets

	strcpy_s(thing2.name, "Buster");

	printf("Name: %s\n", thing1.name); // Changed to %s
	printf("Age: %i\n", thing1.age); //Semi colon
	printf("Thing2 Name: %s\n", thing2.name); //End Quotation + Rearrange comma
	printf("Thing2 Age %i\n'", thing2.age); //End Quotation + Rearrange comma

}
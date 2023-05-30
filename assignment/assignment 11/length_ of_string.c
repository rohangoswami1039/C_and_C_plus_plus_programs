#include <stdio.h>
 
void main()
{
    char string[50];
    int i, length = 0;
 
    printf("Enter a string : ");
    gets(string);
    
	for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }

    printf("The length of %s = %d\n", string, length);
}

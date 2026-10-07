#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char str1[20], str2[20];
int ch, i, j;
do
{
printf("\tMENU");
printf("\n-------------\n");
printf("1: Find Length of String");
printf("\n2: Concatenate Strings");
printf("\n3: Copy String");
printf("\n4: Compare the Strings");
printf("\n5: Exit");
printf("\n---------------\n");
printf("\nEnter your Choice: ");
scanf("%d", &ch);
switch (ch)
{
case 1:
printf("Enter String: ");
scanf("%s", str1);
i = strlen(str1);
printf("Length of String: %d\n\n", i);
break;
case 2:
printf("\nEnter First String: ");
scanf("%s", str1);
printf("Enter Second String: ");
scanf("%s", str2);
strcat(str1, str2);
printf("String after Concatenation: %s\n\n", str1);
break;
case 3:
printf("Enter String1: ");
scanf("%s", str1);
printf("Enter String2: ");
scanf("%s", str2);
printf("\nString before copying:\n");
printf("String1 = \"%s\", String2 = \"%s\"\n", str1, str2);
strcpy(str2, str1);
printf("------------------------\n");
printf("We are Copying String1 to String2\n");
printf("------------------------\n");
printf("\nString after copying:\n");
printf("String1 = \"%s\", String2 = \"%s\"\n", str1, str2);
break;
case 4:
printf("Enter First String: ");
scanf("%s", str1);
printf("Enter Second String: ");
scanf("%s", str2);
i = strcmp(str1, str2);
if (i == 0)
printf("Both strings are equal.\n\n");
else if (i < 0)
printf("String1 is smaller than String2.\n\n");
else
printf("String1 is greater than String2.\n\n");
break;
case 5:
printf("Exiting the program...\n");
break;
default:
printf("Invalid Choice! Please try again.\n\n");
}
} while (ch != 5);
return 0;
}

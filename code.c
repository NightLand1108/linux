#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char str1[20],str2[20];
int ch,i;

do
{
printf("\tMENU");
printf("\n-------------------------");
printf("\n1: Find Length of String");
printf("\n2: Concatenate Strings");
printf("\n3: Copy String");
printf("\n4: Compare Strings");
printf("\n5: Exit");
printf("\n-------------------------");
printf("\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter String: ");
scanf("%s",str1);
i=strlen(str1);
printf("Length of String: %d\n",i);
break;
case 2:
printf("Enter First String: ");
scanf("%s",str1);
printf("Enter Second String: ");
scanf("%s",str2);
strcat(str1,str2);
printf("Concatenated String: %s\n",str1);
break;
case 3:
printf("Enter String: ");
scanf("%s",str1);
strcpy(str2,str1);
printf("Copied String: %s\n",str2);
break;
case 4:
printf("Enter First String: ");
scanf("%s",str1);
printf("Enter Second String: ");
scanf("%s",str2);
i=strcmp(str1,str2);
if(i==0)
printf("Both strings are equal.\n");
else if(i<0)
printf("First string is smaller.\n");
else
printf("First string is greater.\n");
break;
case 5:
printf("Exiting program...");
exit(0);
default:
printf("Invalid choice!");
}
}while(ch!=5);
return 0;
}


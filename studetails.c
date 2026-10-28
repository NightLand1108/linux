# include<stdio.h>
struct Student
{
int roll;
int m1,m2,m3;
char name[30];
int total;
float per;
};
int main()
{
int i,n;
printf("----------Student information----------");
printf("\n enter the no of records: ");
scanf("%d",&n);
struct Student starr[n];
for(i=0;i<n;i++)
{
printf("Enter the roll no of student: ");
scanf("%d",&starr[i].roll);
printf("Enter the marks of 3 subjects: ");
scanf("%d%d%d",&starr[i].m1,&starr[i].m2,&starr[i].m3);
printf("Enter the name of the student: ");
scanf("%s",starr[i].name);
starr[i].total=starr[i].m1+starr[i].m2+starr[i].m3;
starr[i].per=starr[i].total/3;
}
printf("\n roll no|\t name|\t marks|\t total|\t per|\tresult|");
for(i=0;i<n;i++)
{
printf("\n%d",starr[i].roll);
printf("\t\t\t");
puts(starr[i].name);
printf("\t\t");
printf("\t\t\t%d",starr[i].m1);
printf("\t%d",starr[i].m2);
printf("\t%d",starr[i].m3);
printf("\t\t%d",starr[i].total);
printf("\t%f",starr[i].per);
}
if(starr[i].per<40)
{
printf("Fail");
}
else if(starr[i].per<60)
{
printf("Pass");
}
else if(starr[i].per<75)
{
printf("First class");
}
else
{
printf("Distinction");
}

return 0;
}

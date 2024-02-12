#include<stdio.h>
#include<string.h>
void main()
{
char s1(20),s2(25);
printf("enter string:");
scanf(&s1);
strcpy(s2,s1);
strrev(s2);
if(strcmp(s1,s2)==0)
printf("palindrome");
else 
printf("not a palindrome");
getch();
}
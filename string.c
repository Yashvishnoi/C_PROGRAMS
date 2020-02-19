#include<stdio.h>
int main()
{
char s[10];
int i;
printf("enter the string");
//for(i=0;s[i]!='/0';i++)
gets(s);//scanf("%s",&s[0]);
//for(i=0;s[i]!='/0';i++)
//printf("%c",s[i]);
//printf("%s",s);
puts(&s[0]);
return 0;
}

#include<stdio.h>
main()
{
int i,hr,ehr,op;     // ehr=extra hour
for(i=1;i<=10;i++)   // op=over paid
{
printf("\nenter total working hour");
scanf("%d",&hr);
if(hr>40)
{
ehr=(hr-40);
op=ehr*12;
printf("over paid = %d",op);
}
else
printf("no over paid");
}
}

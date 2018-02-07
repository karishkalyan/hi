#include<stdio.h>
void main()
{
int hr1,hr2,min1,min2,h,m;
printf("\n enter the first timing:");
scanf("%d,%d",&hr1,&min1);
printf("\n enter the second timing:");
scanf("%d,%d",&hr2,&min2);
h=hr1-hr2;
m=min1-min2;
printf("\n the diff of timing is hr:min=%d:%d",h,m);
getch();
}




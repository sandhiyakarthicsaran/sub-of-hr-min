#include<stdio.h>
int main()
{
int hr,hr1,hr2,min,min1,min2;
printf("Enter the hour1 and hour2 values:\n",hr1,hr2);
scanf("%d%d",&hr1,hr2);
printf("Enter the minutes1 and minutes2 values:\n",min1,min2);
scanf("%d%d",&min1,&min2);
hr=hr1-hr2;
min=min1-min2;
printf("The resultant time and minutes are %d %d\n",hr,min);
return 0;
}

#include<stdio.h>
main()
{
int number,i;
printf("Enter the number: \n");
scanf(" %d",&number)
for(i=1;i<=10;i++)
  {
    printf("%2d X %2d = %2d\n",number,i,(number*i))
  }
}

#include<stdio.h>

void main()
{
int from ,to, sum=0, i;
printf("\n  enter a number range between from and to :" );
scanf("\n %d%d",&from,&to );
i =from;
while ( i<=to)
 {

sum = sum+i;
i++;
}

  printf("\n sum of range between %d and %d is %d",from, to, sum );
  /* code */

}

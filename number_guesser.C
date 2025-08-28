#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int number,guess,i=1;

srand(time(0));
number=rand()%100;
//printf("Random number=%d",number);

do{
printf("\nGuess the number:\n");
scanf("%d",&guess);
if(guess>number)
{
printf("Lower the number");
}
else if(guess<number)
{
printf("Higher the number");
}
else

{
printf("You guessed it in %d attempts",i);
}
i++;
}while(guess!=number);

return 0;
}
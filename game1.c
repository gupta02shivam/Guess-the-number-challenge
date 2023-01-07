#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int num, guess, n_guesses=1;
    srand(time(0));
    num=rand()%100 +1; /*divide by 100 because the number will stay between 1 to 100 as we will the remainder of the rand by 100*/

    //  printf("The number is %d\n", number)

   do
   {
    printf("Guess the number between 1 to 100:\n");
    scanf("%d", &guess);

if (guess>num)
{
    printf("Lower number please\n");
}

else if (guess<num)
{
    printf("Higher number please\n");
}
 else{
   printf("You guessed it correct in %d Attempt\n", n_guesses);
   }
  n_guesses++;

   } while(guess!=num);

   return 0;
}


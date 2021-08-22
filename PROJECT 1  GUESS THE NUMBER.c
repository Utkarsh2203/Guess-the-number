/*  Number Guessing Game
Problem: This is going to be fun!!  We will write a program that generates a random number and asks the player to guess it. If the player’s guess is higher than the actual number, the program displays “Lower number please”. Similarly, if the user’s guess is too low, the program prints “Higher number please”.

When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.
*/

#include<stdio.h>
#include<conio.h> 
#include<stdlib.h>
#include<time.h> // for declaring time(0)
int main()
{
	int number, guess;
	int nguesses = 1; // no. of guesses
	
	srand(time(0)); /* this will return time in seconds and will return 
	                  different values everytime */
	number = rand()%100 + 1; // This will generate any random no. between 1-100   
	
	/* printf("the number is %d\n", number); this line is a comment
	so that the player can not see the number */
	
	do{
		printf("Guess the number between 1 to 100\n");
		scanf("%d", &guess);
		
		if(guess>number)
		{
			printf("Lower Number Please!\n");
		}
		else if(guess<number)
		{
			printf("Higher Number Please!\n");
		}
		else
		{
			printf("You guessed the correct number in %d attempts", nguesses);
		}
		nguesses++;
	}
	while(guess!=number);
	return 0;
	getch();	               
}

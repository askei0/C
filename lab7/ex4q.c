// Guessing game: read a number until it matches the one you chose
// (first it can be a hard-coded constant or #define, then use the rand() function).
// In case of a wrong guess, help if the guess was too small or too big.
// (Try to give a solution with several types of cycles,
// or try how the if statements can be replaced with a ternary operator.)
// Complete the guessing program by counting the wrong attempts,
// then give a text evaluation based on this value!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define WINNER_NUM 123

int main()
{
	srand(time(0));

	int WINNER_NUM = rand() % 1001;

	printf("Correct Guess is %d: ", WINNER_NUM);

	int num, cnt = 0;

	do
	{
		scanf("%d", &num);

		if (num > WINNER_NUM)
			printf("Go less\n");

		if (num < WINNER_NUM)
			printf("Go big\n");

		cnt++;
	}while (num != WINNER_NUM);

	printf("Congrats\n Num of guesses: %d\n", cnt);


}

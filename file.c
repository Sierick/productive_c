#include <stdio.h>
#include <stdlib.h>

void first()
{
	char message[] = "?";
	int num = 5;
	printf("testing\n\n %s", message);
	printf("\n\ntest\n\n %d", num);
}

void second()
{
	char name[10];
	printf("Enter your name: ");
	fgets(name, 10, stdin);
	printf("Hello %s!", name);
}

void third()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("You are %d years old!", age);
}

void fourth()
{
	int index = 1;
	while(index != 11)
	{
		printf("%d\n", index);
		index++;
	}
}

void fifth()
{
	int secretNum = 7;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	int outOfGuesses = 0;
	printf("Welcome to the guessing game you have 3 guesses go!\n\n");
	while(guess != secretNum && outOfGuesses == 0){
		printf("Enter a guess: ");
		scanf("%d", &guess);
		guessCount++;	
		if(guessCount == guessLimit){
			outOfGuesses = 1;
		} else {
			outOfGuesses = 0;
		}
	}
	if(outOfGuesses != 0){
		if(guess != secretNum){
			printf("\nYou ran out of guesses better luck next time");
		} else {
			printf("\nYou won the game on your last guess! GG");
		}
	} if(guessCount == 1){
		printf("\nYou got it on your first guess you cheating or something?");
	} if(guessCount == 2){
		printf("\nYou won the game with a guess to spare!");
	}
}

void sixth()
{
	int i;
	for(i = 1; i <= 5; i++){
		printf("%d\n", i);
	}
}

void seventh()
{
	int num = 10;
	printf("%p\n", &num);
	int * pNum = &num;
	printf("\n%p\n", pNum);
	printf("\n%d", *pNum);
}

void write()
{
	FILE * fpointer = fopen("external.txt", "w");
	fprintf(fpointer, "Test, testing, this work?");
	fclose(fpointer);
}

void read()
{
	char line[255];
	FILE * fpointer = fopen("external.txt", "r");
	fgets(line, 255, fpointer);
	printf("%s", line);
	fclose(fpointer);
}

int main()
{
//	first();
//	second();
//	third();
//	fourth();
//	fifth();
//	sixth();
//	seventh();
//	write();
	read();
	printf("\n\n");
	return 0;
}

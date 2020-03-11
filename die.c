//Juan Delgado

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 0
int sides(void);
int rolls(void);
void rollDie(int arr[], int rolls, int side);
void print(int arr[], int side);


int main(void)
{
	srand(time(NULL));
	int side = sides();
	int roll = rolls();
	int arr[34] = {0};
	rollDie(arr, roll, side);
	print(arr, side);
}
int sides(void)
{
	int x;
	printf("Enter the number of sides for your die:");
	scanf("%d" , &x);
	if(x > 0 && x <= 20)
	{
		return x;
	}
	else
	{
		printf("Side must be between 0 and 20\n");
		sides();
	}
}

int rolls(void)
{
	int x;
	printf("Enter the number of rolls:");
	scanf("%d", &x);

	return x;
}
void rollDie(int arr[], int rolls, int side)
{
	int x;
	int num;
	for(x = 0; x < rolls; x++)
	{
		num = rand()%side;
		arr[num]++;
	}
}

void print(int arr[], int side)
{
	printf("The number of times you rolled a:\n");
	int x;
	for(x = 0; x < side; x++)
	{
		printf("%d = %d\n", x+1 , arr[x]);
	}
}

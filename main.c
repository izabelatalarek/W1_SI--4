#include <stdio.h>
#include <stdlib.h>

int choose = 0;
int number = 0;
int i, j; 
int k, m;
a = 1;
b = 0;


 int numbers(int n)
{
	printf("Give a number of X to use\n");
	scanf_s("%d", &number);
	return number;
}

int main()

{
	while (choose != 9)
	{
		printf("Menu\n");
		printf("\n");
		printf("1. X- Rectangle\n");
		printf("2. X - Triangle\n");
		printf("3. XO - pattern\n");
		printf("4. Xframe - pattern\n");
		printf("5. X placed on both diagonals\n");
		printf("6. Diamond pattern\n");
		printf("7. Chess pattern\n");
		printf("8. Frame-inside-frame\n");
		printf("9. Exit\n");


		printf("Give a number of pattern to choose\n");
		scanf_s("%d", &choose);

		if (choose == 1)
		{
			numbers(number);


			for (i = 1; i <= number; i++)
			{
				for (j = 1; j <= number; j++)
				{
					printf("X ");
				}

				printf("\n");
			}

		}

		if (choose == 2)
		{
			numbers(number);

			for (int i = 1; i < number; i++)


			{
				for (int j = 1; j <= i; j++)
				{
					printf("X");
				}

				printf("\n");
			}
		}

		if (choose == 3)
		{
			numbers(number);
			k = 1;

			for (i = 1; i <= number; i++)
			{
				for (j = 1; j <= 2 * number; j++)
				{
					if (k == 1)
					{
						printf("X");
					}
					else
					{
						printf("o");
					}

					k *= -1;
				}

				if ((2 * number) % 2 == 0)
				{
					k *= -1;
				}

				printf("\n");
			}
		}

		if (choose == 4)

		{
			numbers(number);

			for (i = 1; i <= number; i++)
			{
				for (j = 1; j <= number; j++)
				{
					if (i == 1 || i == number || j == 1 || j == number)
					{
						printf("X");
					}
					else
					{
						printf("o");
					}
				}
				printf("\n");
			}
		}

		if (choose == 5)
		{
			numbers(number);

			for (int i = 1; i <= number; i++)
			{
				for (int j = 1; j <= number; j++)
				{
					if ((j == 1) || (j == number) || (i == 1) || (i == number) || (i == j) || ((i + j) == (number + 1)))
					{
						printf("X ");
					}
					else
					{
						printf("o ");
					}

				}
				printf("\n");
			}

		}
		if (choose == 6)
		{
			numbers(number);

			for (i = 1; i <= number; i++) {
				for (j = i; j <= number; j++) {
					printf("o");
				}
				for (j = 1; j <= (2 * i - 2); j++) {
					printf("X");
				}
				for (j = i; j <= number; j++) {
					printf("o");
				}
				printf("\n");
			}

			for (i = 1; i <= number; i++) {
				for (j = 1; j <= i; j++) {
					printf("o");
				}
				for (j = (2 * i - 2); j < (2 * number - 2); j++) {
					printf("X");
				}
				for (j = 1; j <= i; j++) {
					printf("o");
				}
				printf("\n");
			}
			getch();
			return 0;
		}


		if (choose == 7)
		{

			k = 1;

			for (i = 1; i <= 13; i++)
			{
				for (j = 1; j <= 4; j++)
				{
					if (k == 1)
					{
						printf("ooo");
					}
					else
					{
						printf("XXX");
					}

					k *= -1;
				}

				if ((2 * number) % 2 == 0)
				{
					k *= -1;
				}

				printf("\n");
			}
		}

		if (choose == 9)
		{
			exit(0);
		}
	}
} 


	

	
﻿#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	char c;
	int check = 1;
	int count = 0, count1 = 0;
	int num1, num, vrem3,  vrem1 = 1000, vrem2 = 1, num2;
	int trig;
	printf("You have to choose a mode.\nIn both modes the diapason of numbers is between 1 and 1000.\n");
	printf("First mode is where you guess a random number, second is where a computer tries to guess your number.\nEnter 1 for first mode, 2 for second.\n");
	while (check == 1) {
		if (count == 0) {
			scanf_s("%d", &count);
			if (count == 1) {
				printf("Your task is to guess a random number.\n");
				srand(time(NULL));
				num = rand() % 1000 + 1;
			}
			else {
				printf("Imagine a number and answer honestly on computer questions.");
			}
		}
		else if (count == 1) {
			printf("Take a guess: ");
			scanf_s("%d", &num1);
			count1++;
			if (num1 < num) {
				printf("Your number is lower.\n");
			}
			else if (num1 > num) {
				printf("Your number is higher.\n");
			}
			else if (num1 == num) {
				printf("You guessed right! Congratulations! Number of attempts: %d\n", count1);
				break;
			}
		}
		else {
			count1++;
			num2 = (vrem1 + vrem2) / 2;
			printf("The computer tries %d.\n Is your number higher (1), lower (2) or equal (3) to it? ", num2);
			scanf_s("%d", &trig);
			if (trig == 1) {
				vrem2 = num2;
			}
			else if (trig == 2) {
				vrem1 = num2;
			}
			else if (vrem1 == vrem2) {
				printf("Computer is happy to guess right! It took %d attempts for it!", count1);
				break;
			}
			else {
				printf("Computer is happy to guess right! It took %d attempts for it!", count1);
				break;
			}
		}
	}
}
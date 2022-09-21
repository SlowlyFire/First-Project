/*****************
*Gal Giladi
*312491616
*01
*ex2
*****************/
#include <stdio.h>
/*************************************************************************************
* Function name: 
* Input: 
* Output: 
* Function Operation: 
*************************************************************************************/
	void rhoumbus()
	{
		int n, i, j, k, t; //ex1
		printf("Enter the side length:\n");
		scanf("%d", &n);
		int tempo = n; //to save n
		int tempo2 = n;


		for (i = 0; i < n; i++) { //for ea line
			for (j = 0; j < tempo2; j++)
				printf(" ");
			printf("/");
			for (k = 0; k < i; k++)
				printf(" ");
			printf("*");
			for (t = 0; t < i; t++)
				printf(" ");
			printf("\\\n");
			tempo2--;
		}


		printf(" |");
		for (i = 0; i < tempo - 1; i++)
			printf(" ");
		printf("+");
		for (j = 0; j < tempo - 1; j++)
			printf(" ");
		printf("|\n");


		for (i = 0; i < n; i++) { //for ea line
			for (j = 0; j <= i; j++)
				printf(" ");
			printf("\\");
			for (k = 0; k < tempo - 1; k++)
				printf(" ");
			printf("*");
			for (t = 0; t < tempo - 1; t++)
				printf(" ");
			printf("/\n");
			tempo--;
		}
	}

/*************************************************************************************
* Function name:
* Input:
* Output:
* Function Operation:
*************************************************************************************/
	int base20ToDecimal()
	{
		int exponent = 1; //ex2
		char reversedNum;
		int newNum = 0;
		printf("Enter a reversed number in base 20:\n");
		scanf(" %c", &reversedNum); //1aj
		while (reversedNum != '\n') {

			if (reversedNum >= '0' && reversedNum <= '9') {
				newNum = newNum + (reversedNum - '0') * exponent;
				exponent = exponent * 20;
				scanf("%c", &reversedNum); //aj
				continue;
			}

			else if (reversedNum >= 'a' && reversedNum <= 'j') {
				newNum = newNum + (reversedNum - 'W') * exponent;
				exponent = exponent * 20;
				scanf("%c", &reversedNum); //aj
				continue;
			}

			else if (reversedNum >= 'A' && reversedNum <= 'J') {
				newNum = newNum + (reversedNum - '7') * exponent;
				exponent = exponent * 20;
				scanf("%c", &reversedNum); //aj
				continue;
			}
			printf("Error! %c is not a valid digit in base 20\n", reversedNum);
			scanf("%c", &reversedNum);
			if(reversedNum=='\n')
				return 0;
			
		}
			printf(" %d\n", newNum);
			return 0;
	}

/*************************************************************************************
* Function name:
* Input:
* Output:
* Function Operation:
*************************************************************************************/
	void baseToDecimal()
	{
		int base; //ex3
		int newNum1 = 0;
		int exponent1 = 1;
		char chooseNum;
		int isValidDigit = 1;
		printf("Enter a base (2-10):\n");
		scanf("%d", &base);
		printf("Enter a reversed number in base %d:\n", base);
		scanf(" %c", &chooseNum);
		while (chooseNum != '\n') {
			if (base > (chooseNum - '0')) {
				newNum1 = newNum1 + (chooseNum - '0') * exponent1;
				exponent1 = base * exponent1;
			}
			else {
				printf("Error! %c is not a valid digit in base %d\n", chooseNum, base);
				isValidDigit = 0;
			}
			scanf("%c", &chooseNum);
		}
		if (isValidDigit)
			printf("%d\n", newNum1);

	}
	
/*************************************************************************************
* Function name:
* Input:
* Output:
* Function Operation:
*************************************************************************************/
	void pow2()
	{
		int powerOf2; 
		printf("Enter a number:\n");
		scanf("%d", &powerOf2);
		if (powerOf2 == 0)
			printf("%d is not a power of 2\n", powerOf2);
		else if ((powerOf2 & (powerOf2 - 2)) == 0)
			printf("%d is a power of 2\n", powerOf2);
		else
			printf("%d is not a power of 2\n", powerOf2);
	}
	
/*************************************************************************************
* Function name: 
* Input: 
* Output:
* Function Operation:
*************************************************************************************/
	void differentBits()
	{
		int num1;//ex5
		int num2;
		int counter = 0;
		printf("Enter two numbers:\n");
		scanf("%d%d", &num1, &num2);
		while (num1 != 0 || num2 != 0) {
			if (num1 % 2 == 0 && num2%2 == 1)
				counter++;
			if (num1 % 2 == 1 && num2%2 == 0)
				counter++;
			num1 = num1 >> 1;
			num2 = num2 >> 1;
			if (num1 == 0 && num2 == 0)
				break;
		}
		printf("There are %d different bits\n", counter);
	}

/*************************************************************************************
* Function name:
* Input:
* Output:
* Function Operation:
*************************************************************************************/
	void add()
	{
		int num1; //ex6
		int num2;
		int counter = 0;
		int i;
		printf("Enter two numbers:\n");
		scanf(" %d%d", &num1, &num2);
		if (num1 >= 0 && num2 >= 0) {
			for (i = 0; i < num1; i++)
				counter++;
			for (i = 0; i < num2; i++)
				counter++;
		}
		if (num1 >= 0 && num2 < 0) {
			for (i = 0; i < num1; i++)
				counter++;
			for (i = num2; i < 0; i++)
				counter--;
		}
		if (num1 < 0 && num2 >= 0) {
			for (i = num1; i < 0; i++)
				counter--;
			for (i = 0; i < num2; i++)
				counter++;
		}
		if (num1 < 0 && num2 < 0) {
			for (i = num1; i < 0; i++)
				counter--;
			for (i = num2; i < 0; i++)
				counter--;
		}

		printf("%d\n", counter);
	}
	
/*************************************************************************************
* Function name:
* Input:
* Output:
* Function Operation:
*************************************************************************************/
	void multiply()
	{
		int num1; //ex7
		int num2;
		int counter = 0;
		int i, j;
		printf("Enter two numbers:\n");
		scanf(" %d%d", &num1, &num2);
		if (num1 >= 0 && num2 >= 0) {
			for (j = 0; j < num1; j++) {
				for (i = 0; i < num2; i++)
					counter++;
			}
		}
		if (num1 >= 0 && num2 < 0) {
			for (j = 0; j < num1; j++) {
				for (i = num2; i < 0; i++)
					counter--;
			}
		}
		if (num1 < 0 && num2 >= 0) {
			for (j = num1; j < 0; j++) {
				for (i = 0; i < num2; i++)
					counter--;
			}
		}
		if (num1 < 0 && num2 < 0) {
			for (j = num1; j < 0; j++) {
				for (i = num2; i < 0; i++)
					counter++;
			}
		}

		printf("%d\n", counter);

	}

	int main()
	{
		int choice;
		do {
			printf("Choose an option:\n1.Rhombus\n2.Base 20 to Decimal\n3.Base to Decimal\n4.Pow2"
				"\n5.Different bits\n6.Add\n7.Multiply\n0.Exit\n");
			scanf("%d", &choice);
			switch (choice) {
			case 1: rhoumbus();
				break;
			case 2: base20ToDecimal();
				break;
			case 3: baseToDecimal();
				break;
			case 4: pow2();
				break;
			case 5: differentBits();
				break;
			case 6: add();
				break;
			case 7: multiply();
				break;
			case 0: break;
			default: printf("Wrong option!\n");
			}

		} while (choice != 0);

		return 0;

	}
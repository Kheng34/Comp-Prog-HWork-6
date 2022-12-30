#include <stdio.h>

int a, b, startAgain = 1, operation;
float result;
char againAns;

int main() {
	while(startAgain == 1) {
		printf("1 > Addition\n2 > Subtraction\n3 > Division\n4 > Multiplication\n5 > Modulo\n");
		printf("Please enter the number of operation: "); scanf("%d", &operation);
		printf("First number: "); scanf("%d", &a);
		printf("Second number: "); scanf("%d", &b);
		switch(operation) {
			case 1:
				result = a + b;
				break;
			case 2:
				result = a - b;
				break;
			case 3:
				result = (float)a / (float)b;
				break;
			case 4:
				result = a * b;
				break;
			case 5:
				result = a % b;
				break;
		}
		printf("Result: %f\n", result);
		printf("Again?(Y/N)"); scanf("%s", &againAns);
		if(!(againAns == 'Y'))
			startAgain = 0;
	}
	
	printf("\n");system("PAUSE");return 0;
}

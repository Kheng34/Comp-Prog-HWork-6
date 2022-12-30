#include <stdio.h>

int lastFct, tot, num, numLeft, lastDigit, i;

int main() {
	printf("Please enter an integer: "); scanf("%d", &num);
	numLeft = num;
	while(numLeft) {
		lastDigit = numLeft % 10;
		numLeft = (numLeft - lastDigit) / 10;
		for(i = 1, lastFct = 1; i <= lastDigit; i++)
			lastFct *= i;
		tot += lastFct;
	}
	if(tot == num)
		printf("%d is powerful number!", num);
	else
		printf("%d is not powerful number!", num);
	printf("\n");system("PAUSE");return 0;
}

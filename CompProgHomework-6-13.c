#include <stdio.h>

int num, lastDigit;

int main() {
	printf("Please enter the number: "); scanf("%d", &num);
	printf("Reverse of the entered number: ");
	while(num) {
		lastDigit = num % 10;
		printf("%d", lastDigit);
		num = (num - lastDigit) / 10;
	}
	printf("\n");system("PAUSE");return 0;
}

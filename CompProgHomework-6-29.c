#include <stdio.h>

int a, b, k, i, numLeft, lastFct, tot, lastDigit;

int main() {
	printf("Please enter starting number: "); scanf("%d", &a);
	printf("Please enter ending number: "); scanf("%d", &b);
	printf("Powerful numbers between %d and %d:", a, b);
	for(k = a; k <= b; k++) {
		numLeft = k; tot = 0;
		while(numLeft) {
			lastDigit = numLeft % 10;
			numLeft = (numLeft - lastDigit) / 10;
			for(i = 1, lastFct = 1; i <= lastDigit; i++)
				lastFct *= i;
			tot += lastFct;
		}
		if(tot == k)
			printf(" %d", k);
	}
	printf("\n");system("PAUSE");return 0;
}

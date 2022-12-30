#include <stdio.h>

int a, tot, i;

int main() {
	printf("Please enter the number: "); scanf("%d", &a);
	printf("Positive integer divisors (except itself):");
	for(i = 1; i < a; i++) {
		if(!(a % i)) {
			printf(" %d", i);
			tot += i;
		}
	}
	printf ("\nTotal: %d\n", tot);
	if(tot == a)
		printf("%d is perfect number!", a);
	else
		printf("%d is not perfect number!", a);
	printf("\n");system("PAUSE");return 0;
}

#include <stdio.h>

int num, letter, complete, remain, m, i, k;

int main() {
	printf("Please enter the number of rows: "); scanf("%d", &num);
	complete = num / 6; remain = num % 6;
	for(m = 0; m < complete; m++) {
		for(i = 1; i <= 6; i++) {
			for(k = 0; k < i; k++) {
				letter = 65 + k;
				printf("%c ", (char)letter);
			}
			printf("\n");
		}
	}
	for(i = 1; i <= remain; i++) {
		for(k = 0; k < i; k++) {
			letter = 65 + k;
			printf("%c ", (char)letter);
		}
		printf("\n");
	}
	printf("\n");system("PAUSE");return 0;
}

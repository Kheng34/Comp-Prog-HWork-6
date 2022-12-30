#include <stdio.h>

int current, num, complete, remain, i, k, m;

int main() {
	printf("Please enter the number of rows: "); scanf("%d", &num);
	complete = num / 5; remain = num % 5;
	for(m = 0; m < complete; m++) {
		for(k = 1; k <= 5; k++) {
			for(i = 0; i < 5; i++) {
				current = k + i;
				printf("%d", current);
			}
			printf("\n");
		}
	}
	for(k = 1; k <= remain; k++) {
		for(i = 0; i < 5; i++) {
			current = k + i;
			printf("%d", current);
		}
		printf("\n");
	}
	printf("\n");system("PAUSE");return 0;
}

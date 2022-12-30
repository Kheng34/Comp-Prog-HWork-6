#include <stdio.h>

int num, complete, remain, i, k, m, h;

int main() {
	printf("Please enter the number of rows: "); scanf("%d", &num);
	complete = num / 5; remain = num % 5;
	for(h = 0; h < complete; h++) {
		for(i = 5, m = 0; m < 5; m++, i--) {
			for(k = 0; k < i; k++)
				printf("%d", i);
			printf("\n");
		}
	}
	for(i = 5, m = 0; m < remain; m++, i--) {
		for(k = 0; k < i; k++)
			printf("%d", i);
		printf("\n");
	}
	printf("\n");system("PAUSE");return 0;
}

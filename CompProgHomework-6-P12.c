#include <stdio.h>

int num, complete, remain, i, k, m;

int main() {
	printf("Please enter the number of rows: "); scanf("%d", &num);
    complete = num / 9; remain = num % 9;
    for(m = 0; m < complete; m++) {
	    for(i = 0; i < 4; i++) {
	    	for(k = 0; k < 4 - i; k++)
	    		printf(" ");
	    	for(k = 0; k < 2 * i + 1; k++)
	    		printf("*");
	    	printf("\n");
		}
	    for(i = 0; i < 5; i++) {
	        for(k = 0; k < i; k++)
	        	printf(" ");
	        for(k = 0; k < 9 - 2 * i; k++)
	            printf("*");
	    	printf("\n");
	    }
	}
	if(4 < remain) {
		for(i = 0; i < 4; i++) {
	    	for(k = 0; k < 4 - i; k++)
	    		printf(" ");
	    	for(k = 0; k < 2 * i + 1; k++)
	    		printf("*");
	    	printf("\n");
		}
		remain -= 4;
		for(i = 0; i < remain; i++) {
	        for(k = 0; k < i; k++)
	        	printf(" ");
	        for(k = 0; k < 9 - 2 * i; k++)
	            printf("*");
	    	printf("\n");
	    }
	}
	else {
		for(i = 0; i < remain; i++) {
	    	for(k = 0; k < 4 - i; k++)
	    		printf(" ");
	    	for(k = 0; k < 2 * i + 1; k++)
	    		printf("*");
	    	printf("\n");
		}
	}
	printf("\n");system("PAUSE");return 0;
}

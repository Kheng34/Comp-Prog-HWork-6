#include <stdio.h>

int num, complete, remain, i, k, m;

int main() {
    printf("Please enter the number of rows: "); scanf("%d", &num);
    complete = num / 5; remain = num % 5;
    for(m = 0; m < complete; m++) {
        for(i = 0; i < 5; i++) {
            for(k = 0; k < i; k++)
                printf(" ");
            for(k = 0; k < 9 - 2 * i; k++)
                printf("*");
            printf("\n");
        }
    }
    for(i = 0; i < remain; i++) {
        for(k = 0; k < i; k++)
            printf(" ");
        for(k = 0; k < 9 - 2 * i; k++)
            printf("*");
        printf("\n");
    }
    printf("\n");system("PAUSE");return 0;
}

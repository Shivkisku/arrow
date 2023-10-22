#include<stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 11; i++) {
        for (j = 1; j <= 11; j++) {
            printf("  ");
            if (j == 11 || i == 11 || i == j) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

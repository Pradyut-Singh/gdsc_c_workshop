#include <stdio.h>

int main() {
    int num, sum = 0;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);
    printf("Sum of entered numbers: %d\n", sum);
    return 0;
}

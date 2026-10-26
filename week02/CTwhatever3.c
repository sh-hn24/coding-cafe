#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    while (n > 0) {
        int digit = n % 10;
        printf("%d", digit);
        n = n / 10;
    }
    printf("\n");
    return 0;
}
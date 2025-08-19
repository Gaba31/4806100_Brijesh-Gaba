#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long sumDigits(char *n) {
    long long sum = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        sum += n[i] - '0';
    }
    return sum;
}

int superDigit(char *n, int k) {
    long long total = sumDigits(n) * k;

    while (total >= 10) {
        long long temp = 0;
        while (total > 0) {
            temp += total % 10;
            total /= 10;
        }
        total = temp;
    }

    return (int)total;
}

int main() {
    char n[100000];
    int k;
    scanf("%s %d", n, &k);

    int result = superDigit(n, k);
    printf("%d\n", result);

    return 0;
}

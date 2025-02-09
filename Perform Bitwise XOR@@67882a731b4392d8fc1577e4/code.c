#include <stdio.h>

int main() {
    int num1, num2, result;
    printf("");
    scanf("%d %d", &num1, &num2);

    result = num1 ^ num2; // Perform bitwise XOR operation

    printf("%d\n", result);

    return 0;
}

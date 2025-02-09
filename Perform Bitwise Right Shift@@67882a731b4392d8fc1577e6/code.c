#include <stdio.h>

int main() {
    int num, positions, result;
    printf("");
    scanf("%d %d", &num, &positions);

    result = num >> positions; // Perform bitwise left shift operation

    printf("%d\n", result);

    return 0;
}

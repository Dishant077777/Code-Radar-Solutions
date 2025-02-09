#include <stdio.h>

int main() {
    int num, positions, result;
    printf("");
    scanf("%d %d", &num, &positions);

    result = num >> positions; 

    printf("%d\n", result);

    return 0;
}

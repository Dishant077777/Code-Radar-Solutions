#include <stdio.h>

int main() {
    int num1, num2;
    printf("");
    scanf("%d %d", &num1, &num2);

    if (num1 > 0 && num2 > 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}

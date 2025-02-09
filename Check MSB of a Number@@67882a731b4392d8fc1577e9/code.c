#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t num;
    printf("");
    scanf("%d", &num);

    if (num & (1 << 31)) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}

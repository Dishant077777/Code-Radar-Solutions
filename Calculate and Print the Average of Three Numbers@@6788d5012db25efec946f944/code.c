#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int b;
    scanf("%d", &b);

    int c;
    scanf("%d", &c);

    print("Average: %.2f", (a+b+c)/3.0);
    return 0;

}
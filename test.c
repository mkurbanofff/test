#include <stdio.h>

int main() {
    int x;
get_input:
    x = getchar();
    putchar(x);
    putchar('\n');
    if (x == '9') {
        printf("yes!!!");
        return 0;
    } else {
        goto get_input;
    }
}

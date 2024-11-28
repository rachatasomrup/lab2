#include <stdio.h>

int main() {
    int h, m, s;
    printf(" time clock (h:m:s): ");
    scanf("%d:%d:%d", &h, &m, &s);
    printf("hour:%d\nminute:%d\nsecond:%d\n", h, m, s);
    
    return 0;
}


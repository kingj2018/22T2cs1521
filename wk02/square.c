#include <stdio.h>

int main(void) {
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 46340) goto toobig;
        
    y = x * x;
    printf("%d\n", y);
    goto end;

toobig:
    printf("square too big for 32 bits\n");
    
end:

    return 0;
}

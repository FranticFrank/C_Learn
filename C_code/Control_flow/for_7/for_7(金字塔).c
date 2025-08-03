#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c, c1, c2, top;
    int i;
    printf("input a character:\n");
    top = isupper(c = getchar()) ? 'A' : (islower(c) ? 'a' : '\0');
    /* isupper(c)和islower(c)是标准库函数，相应的头文件是<ctype.h>,参数c可以是char类型或int类型 */
    getchar(); // Clear input buffer
    if (top) {
        for (c1 = top; c1 <= c; ++c1) {
            
            /* for (i = 1; i <= 100 - 2 * (c1 - top); ++i)
                printf("%c",32); */
            printf("%*c",100 - 2 * (c1 - top),' ');

            for (c2 = top; c2 <= c1; ++c2)
                printf("%2c", c2);
            for (c2 = c1 - 1; c2 >= top; --c2)
                printf("%2c", c2);
        printf("\n");
        }
    }
    return 0;
}

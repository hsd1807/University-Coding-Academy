#include <stdio.h>

int conditionalOperator(int x, int y, int z)
{
        return ((((!(!x)) << 31) >> 31) & y) + ((((!x) << 31) >> 31) & z);
}

int main() {
        printf("%d\n", conditionalOperator(7, 13, 18));
        printf("%d\n", conditionalOperator(0, 13, 18));
        printf("%d\n", conditionalOperator(-1, 13, 18));
        return 0;
}

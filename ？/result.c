#include <stdio.h>

int main()
{
    int result = 2;
    result = (result = result * 2) * 6 * (result = 3 + result);
    printf("%d\n",result);
    return 0;
}

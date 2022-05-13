#include <stdio.h>

int main()
{
    typedef long int64_t;
    typedef struct ADate {
        int month;
        int day;
        int year;
    } date;

    int64_t i =10000000;
    date d = {9, 1, 2005};
    printf("%d %d %d",d.month,d.day,d.year);

    return 0;
}

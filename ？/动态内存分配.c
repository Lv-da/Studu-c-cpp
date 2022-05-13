#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void *p;
    int cnt = 0;
    while ( (p=malloc(100*1024*1024)) ){
        cnt++;
    }
    int *p1=malloc(64*sizeof(int));
    printf("%d000MB\n",cnt);

    return 0;
}

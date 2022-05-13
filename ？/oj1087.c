#include <stdio.h>
//n=1-25
//1>1 2>2 3>3 4>4 5>5 6>6 7>7 8>8 9>9 10>19 11>29 12>39 13>49 14>59 15>69 16>79 17>89 18>99 19>199 20>299 21>399 22>499 23>599 24>699 25>799
int main()
{
    int n,sn;
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        sn = 1;
        break;
    case 2:
        sn = 2;
        break;
    case 3:
        sn = 3;
        break;
    case 4:
        sn = 4;
        break;
    case 5:
        sn = 5;
        break;
    case 6:
        sn = 6;
        break;
    case 7:
        sn = 7;
        break;
    case 8:
        sn = 8;
        break;
    case 9:
        sn = 9;
        break;
    case 10:
        sn = 19;
        break;
    case 11:
        sn = 29;
        break;
    case 12:
        sn = 39;
        break;
    case 13:
        sn = 49;
        break;
    case 14:
        sn = 59;
        break;
    case 15:
        sn = 69;
        break;
    case 16:
        sn = 79;
        break;
    case 17:
        sn = 89;
        break;
    case 18:
        sn = 99;
        break;
    case 19:
        sn = 199;
        break;
    case 20:
        sn = 299;
        break;
    case 21:
        sn = 399;
        break;
    case 22:
        sn = 499;
        break;
    case 23:
        sn = 599;
        break;
    case 24:
        sn = 699;
        break;
    case 25:
        sn = 799;
        break;
    default :
        break;
    }
    printf("%d",sn);

    return 0;
}
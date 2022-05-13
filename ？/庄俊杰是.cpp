#include <stdio.h>

printf("请问庄俊杰是不是toilet")
answer = input("是回复Y或y，否回复N或n\n")
while answer!=''"
    if answer in ['Y','y']:
        printf(你怎么知道)
        break
    elif answer in ['N','n']:
        printf("你确定？")
        answer=input("请再次选择是或否")
    else:printf("就这样\n")

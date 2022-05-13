#include <stdio.h>
#include <stdbool.h>
#include <math.h>
/*给你一个二维整数数组 items ，其中 items[i] = [pricei, beautyi] 分别表示每一个物品的 价格 和 美丽值 。

同时给你一个下标从 0 开始的整数数组 queries 。对于每个查询 queries[j] ，你想求出价格小于等于 queries[j] 的物品中，最大的美丽值 是多少。如果不存在符合条件的物品，那么查询的结果为 0 。

请你返回一个长度与 queries 相同的数组 answer，其中 answer[j]是第 j 个查询的答案。*/

//冒泡排序数组items
void bubbleSort(int** items, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (items[j][0] > items[j + 1][0])
            {
                temp = items[j][0];
                items[j][0] = items[j + 1][0];
                items[j + 1][0] = temp;
                temp = items[j][1];
                items[j][1] = items[j + 1][1];
                items[j + 1][1] = temp;
            }
        }
    }
}




int* maximumBeauty(int** items, int itemsSize, int* itemsColSize, int* queries, int queriesSize, int* returnSize){
    int *ans = (int *)malloc(sizeof(int) * queriesSize);
    int i, j, k, max, max_beauty, max_price;
    for (i = 0; i < queriesSize; i++) {
        max = 0;
        max_beauty = 0;
        max_price = 0;
        for(j = 0; items[j][0] <= queries[i]; j++){
            if(items[j][1] > max_beauty){
                max_beauty = items[j][1];
                max_price = items[j][0];
            }
        }
        ans[i] = max_beauty;
    }
    *returnSize = queriesSize;
    return ans;
}

int main(){
    int itemsSize = 3;
    int *itemsColSize = (int *)malloc(sizeof(int) * itemsSize);
    itemsColSize[0] = 2;
    itemsColSize[1] = 2;
    itemsColSize[2] = 2;
    int **items = (int **)malloc(sizeof(int *) * itemsSize);
    items[0] = (int *)malloc(sizeof(int) * itemsColSize[0]);
    items[1] = (int *)malloc(sizeof(int) * itemsColSize[1]);
    items[2] = (int *)malloc(sizeof(int) * itemsColSize[2]);
    items[0][0] = 1;
    items[0][1] = 2;
    items[1][0] = 3;
    items[1][1] = 4;
    items[2][0] = 5;
    items[2][1] = 6;
    int queriesSize = 3;
    int *queries = (int *)malloc(sizeof(int) * queriesSize);
    queries[0] = 1;
    queries[1] = 3;
    queries[2] = 5;
    int returnSize;
    int *ans = maximumBeauty(items, itemsSize, itemsColSize, queries, queriesSize, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
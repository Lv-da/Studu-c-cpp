#include <bits/stdc++.h>
using namespace std;


int GetFactorSum(int n){
    int i, sum = 0;
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == 1 || i * i == n)
                sum += i;
            else
                sum += i + n / i;
        }
    }
    return sum;
}

int main(){
    int i, num;
    for (i = 2; i <= 400; i++)
    {
        num = GetFactorSum(i);
        if (GetFactorSum(num) == i && i < num)
            printf("%d<->%d\n", i, num);
    }
    return 0;
}


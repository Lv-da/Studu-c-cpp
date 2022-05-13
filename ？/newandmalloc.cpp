#include <bits/stdc++.h>
using namespace std;

int main(){
    //动态分配定义一个64位的整型数组
    int *p = new int[64];
    //初始化数组
    for(int i = 0; i < 64; i++){
        p[i] = i;
    }
    //输出数组
    for(int i = 0; i < 64; i++){
        cout << p[i] << " ";
    }
    cout << endl;
    //释放内存
    delete [] p;
    //return 0;

    //使用malloc分配内存
    int *p1 = (int *)malloc(64 * sizeof(int));
    //初始化数组
    for(int i = 0; i < 64; i++){
        p1[i] = i;
    }
    //输出数组
    for(int i = 0; i < 64; i++){
        cout << p1[i] << " ";
    }
    cout << endl;
    //释放内存
    free(p1);
    return 0;
}
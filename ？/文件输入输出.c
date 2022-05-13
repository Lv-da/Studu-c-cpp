#include <stdio.h>

int main(int argc,char const *argv[])
{
    FILE *fp = fopen("12.in","r");//r只读 r+读写，从文件头开始 w打开只写 w+打开读写 a打开追加 ..x只新建
    if (fp){
        int num;
        fscanf(fp,"%d",&num);
        printf("%d\n",num);
        fclose(fp);
    }else{
        printf("cant open\n");
    }
    return 0;
}
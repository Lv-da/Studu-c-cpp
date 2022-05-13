    #include <stdio.h>

    int main()
    {
        int a[150]={0},cnt=0,i;
        for(i=0;i<105;i=i+5){
            a[i] = 1;
        }
        for(i=0;i<126;i=i+6){
            a[i] = 1;
        }
        for(i=0;i<147;i=i+7){
            a[i] = 1;
        }
        for(i=0;i<147;i++){
            if(a[i]==1){
                cnt++;
            }
        }
        printf("%d",cnt);
        
        return 0;
    }
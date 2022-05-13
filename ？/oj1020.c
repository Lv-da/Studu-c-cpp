#include <stdio.h>

    int main()
    {
        int count=0;
        int man=0,woman=0,child=0;
        for(man=0;man<17;man++){
            for(woman=0;woman<25;woman++){
                for(child=0;child<50;child++){
                    if((child+woman+man)==30 && (child + 2*woman + 3*man) == 50){
                        printf("%d %d %d\n",man,woman,child);
                    }
                }
            }
        }

        return 0;
    }
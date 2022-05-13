#include <stdio.h>

int main()
{
    char character;
    scanf("%c",&character);
    if(character>='0' && character<='9'){
        printf("digit");
    }else if(character>='A' && character<='Z'){
        printf("upper");
    }else if(character>='a' && character<='z'){
        printf("lower");
    }else if(character==' '){
        printf("space");
    }else{
        printf("other");
    }

    return 0;
}
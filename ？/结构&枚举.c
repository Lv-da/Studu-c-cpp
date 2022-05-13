#include <stdio.h>
#include<stdbool.h>

struct date{
    int month;
    int day;
    int year;
};

bool isLeap(struct date d)
{
    bool leap = false;
    if((d.year % 4 == 0 && d.year % 100 != 0 )|| d.year % 400 == 0){
        leap = true;
    }

    return leap;
}

int numberofdays(struct date d)
{
   if(d.month == 1 || d.month == 3 || d.month == 5 || d.month == 7 || d.month == 8 || d.month == 10 || d.month == 12){
       return 31;
   }else{
       return 30;
   }
}

int numberofdays (struct date d)
{
    int days;
    const int daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(d.month == 2 && isLeap(d) ){
        days = 29;
    }else{
        days = daysPerMonth[d.month - 1];
    }
    return days;
}

int main(int argc,char const *argv[])
{
    struct date today,tomorrow;
    //enum COLOR {RED,YELLOW,GREEN};//ö��
//    scanf("%i %i %i",&today.month,&today.day,&today.year);
//    printf("%i %i %i\n",today.year,today.month,today.day);
    printf("today is yyyy mm dd\n");
    scanf("%i %i %i",&today.year,&today.month,&today.day);
    if (today.day != numberofdays(today)){
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }else if(today.month == 12){
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }else{
        tomorrow.day = 1;
        tomorrow.month = today.month +1;
        tomorrow.year = today.year;
    }
    printf("tomorrow is %i %i %i\n",tomorrow.year,tomorrow.month,tomorrow.day);

    return 0;
}

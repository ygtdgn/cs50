#include<cs50.h>
#include<stdio.h>
#include <string.h>
 
int main(void){
    long credit;
    credit = get_long("Type credit card number: ");
    long cc = credit;
    int counter;
    do{
        credit = credit / 10;
        counter++;
    }while(credit>0);
    if(counter != 16 && counter != 15 && counter != 16){
        printf("Card invalid!");
    }
    else{
    credit = cc;
    int fst,sec,sumfst=0,sumsec=0,sum,sec1,sec2;
    do{
        fst = cc%10;
        cc = cc/10;
        sec = cc%10;
        sec = sec*2;
            if(sec>10){
                sec1 = sec%10;
                sec2 = sec/10;
                sec = sec1 + sec2;
            }else{sec = sec;}
        cc = cc/10;
        sumfst = sumfst + fst;
        sumsec= sumsec + sec;
        sum = sumsec + sumfst;
    }while(cc>0);
    if(sum%10 == 0){
        printf("Card valid");
    }
    else{
        printf("Card invalid");
    }
    do{
        credit = credit/10;
    }while(credit>100);
    if(credit == 34 || credit == 37){
        printf("\n AMEX");
    }
    else if(credit == 51 || credit == 52 || credit == 53 || credit == 54 || credit == 55){
        printf("\n MasterCard");
    }
    else if(credit / 10 == 4){
        printf("\n Visa");
    }
    }
}
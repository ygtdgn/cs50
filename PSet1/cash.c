#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void){
    float change; 
    int counter = 0;
    do 
    {
        change = get_float("How much change is owned: "); 
    }
    while (change < 0);
   

    change = change * 100;
    while(change>= 25){
        change = change - 25;
        counter++;
    }
    while(change>= 10){
        change = change - 10;
        counter++;
    }
    while(change>= 5){
        change = change - 5;
        counter++;
    }
    while(change>= 1){
        change = change - 1;
        counter++;
    }
    printf("%i",  counter);
    printf("\n");
}

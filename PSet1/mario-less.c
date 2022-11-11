#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do{
        height = get_int("Type a number between 1 and 8 (both of them are included): ");
    }while(height < 1 || height > 8);
    for(int row = 0; row<height; row++){
        for(int column = 0; column<height; column++){
            if(column + row >= height - 1){
                printf("#");
            }else{printf(" ");}
        }
        printf("\n");
    }
}

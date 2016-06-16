#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    int rows;
    int stars = 1;
    printf("How many rows? ");
    scanf("%d", &rows);
    for (int i = 0; i <= rows; i++){
        for(int j = 0; j < (i+i-1); j++){
            printf("*");
            if(j == (i+i-2)){
                printf("\n");
            }
        }
    }
}

#include<stdio.h>

void main(){
    int test = 0, line = 0;

    for(int i = 2; i <= 200; i++){
        int test = 0;

        for(int j = 2; j < i; j++){
            if(i%j == 0){
                test = 1;
            }
        }

        if(test == 0){
            printf("%d\t", i);
            line++;

            if(line % 10 == 0){
                printf("\n");
            }
 }
}
}

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av){
    int x= 0, y= 0;
    if(ac == 2){
            y=0;
        }
        else if(ac==3){
        
    x = atoi(av[1]);
    y = atoi(av[2]);
        }
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            if(i==0||i==y-1){
                if(j==0||j==x-1){
                    printf("o");
                }else{
                    printf("-");
                }
                //printf("");
            }else{
                if(j==0||j==x-1){
                     printf("|");
                    }else{
                        printf(" ");
                }
            }
        }
            printf("\n");
    }
}

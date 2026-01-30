#include<stdio.h>

int main(){
    int n=20;
    printf("Enter a number");
    scanf("%d",&n);
    if(n==0){
        printf("Zero\n");
    }
    else if(n<0){
        printf("Negative\n");
    }
    else{
        printf("Positive");
    }

    return 0;
}
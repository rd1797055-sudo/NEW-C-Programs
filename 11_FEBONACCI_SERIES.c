#include<stdio.h>
int febonacci(int);
int febonacci(int n){
    if(n<=1){
        return n;
    }
    return febonacci(n-1)+febonacci(n-2);
}

int main(){
    int x;
    printf("Enter Number Of Term You Want To Print::");
    scanf("%d",&x);
    printf("Febonaccci series");
    for(int i=1;i<=10;i++){
        printf("%d\n",febonacci(i));
    }


    return 0;
}
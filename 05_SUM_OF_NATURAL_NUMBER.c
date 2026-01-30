#include<stdio.h>

int main(){
    int n,sum=0,num;
    printf("Enter how many number you want to sum:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("Enter numbers%d\n",i);
        scanf("%d",&num);
        sum+=num;
    }
    printf("Your sum is %d",sum);
   
    return 0;
}
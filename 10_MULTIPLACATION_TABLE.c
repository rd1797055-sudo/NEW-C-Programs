#include<stdio.h>

int main(){
int n,product;
printf("which multiplacation tabl you want to print:");
scanf("%d",&n);
for(int i=1;i<=10;i++){
    product=n*i;
    printf("%dx%d=%d\n",n,i,product);
}

    return 0;
}
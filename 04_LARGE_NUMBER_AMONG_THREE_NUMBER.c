#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("%d is greter\n",a);
    }
    else if(b>a&&b>c){
        printf("%d is grater\n",b);
    }
    else if(c>a&&c>b){
        printf("%d is grater\n",c);
    }
    else{
        printf("All are equal");
    }

    return 0;
}
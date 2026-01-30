#include<stdio.h>
#include<float.h>

int main(){
    char op;
    int a=6,b=6,res;
    printf("Enter a operator(+,-,*,/)");
    scanf("%c",&op);

    switch (op)
    {
    case '+':
        res=a+b;
        break;
        case '-':
        res=a-b;
        break;
        case '*':
        res=a*b;
        break;
        case '/':
        res=a/b;
        break;
    
    default:
    printf("ERROR! You Choose Wrong Operator");
   
        break;
    }
  
    printf("%d",res);


    return 0;
}
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("%d",a);
    printf("%d",b);
    printf("%d",c);
    if(a*a+b*b==c*c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
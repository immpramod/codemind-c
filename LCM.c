#include<stdio.h>
int gcd(int a,int b){
    if(b==0)return a;
    gcd(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int t=gcd(a,b);
    int p=(a*b)/t;
    printf("%d",p);
    return 0;
}
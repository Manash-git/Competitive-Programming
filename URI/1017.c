#include<stdio.h>

int main(){

     int a,b,c;
     scanf("%d%d",&a,&b);
     /*(float)c=((a*b)/12);*/
     float x;
     x=((float)a*(float)b)/12;
     printf("%.3f\n",x);
     return 0;
}

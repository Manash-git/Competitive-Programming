#include <stdio.h>
 int main() {

     char *name;
     float b,c;
     
     scanf("%s",&name);
     scanf("%f %f",&b,&c);
     printf("TOTAL = R$ %.2f\n",b+((15*c)/100));
     return 0;

 }

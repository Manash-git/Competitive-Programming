
#include<stdio.h>

int main() {

     float a,b,c;
     scanf("%f%f%f",&a,&b,&c);
     printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",(.5*a*c),(3.14159*c*c),(.5*(a+b)*c),(b*b),(a*b));
     return 0;
}

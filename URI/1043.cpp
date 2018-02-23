//#include<stdio.h>
#include<bits/stdc++.h>

int main(){

	float a,b,c;
//	a=6.0; b=4.0; c=2.1;
	scanf("%f %f %f",&a,&b,&c);

	if ((a+b)>c && (b+c)>a && (a+c)>b )
	{
	    printf("Perimetro = %.1f\n",(a+b+c));
	}else
	{
	    printf("Area = %.1f\n",((a+b)*c)/2.0);
	}
	return 0;
}

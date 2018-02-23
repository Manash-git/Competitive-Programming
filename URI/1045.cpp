//#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm>    // std::swap

int main(){

	double a,b,c;

//	a=6.0; b=8.0; c=10.0;

	scanf("%lf %lf %lf",&a,&b,&c);

	if (a<c) {std::swap(a,c);}
	if (a<b) {std::swap(a,b);}
	if (b<c) {std::swap(b,c);}


//	printf("a= %lf b= %lf c= %lf\n",a,b,c);

	if (a>=(b+c))
	{
		printf("NAO FORMA TRIANGULO\n");
	}
	else if ((a*a)==((b*b)+(c*c)))
	{
		printf("TRIANGULO RETANGULO\n");
	}
	else if ((a*a)>((b*b)+(c*c)))
	{
		printf("TRIANGULO OBTUSANGULO\n");
	}
	else if ((a*a)<((b*b)+(c*c)))
	{
		printf("TRIANGULO ACUTANGULO\n");
	}

	if (a==b && b==c) {
		printf("TRIANGULO EQUILATERO\n");
	}else if (a==b || b==c ) {printf("TRIANGULO ISOSCELES\n");}

	return 0;
}

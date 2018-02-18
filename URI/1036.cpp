//#include<stdio.h>
//#include<iostream>
#include<bits/stdc++.h>
//#include<cstdio>
//#include<cmath>
//#include<math.h>

int main(){

	double a,b,c,d,r1,r2;
	a=b=c=0;
//	a=10.0; b=20.1; c=5.1;
	scanf("%lf %lf %lf",&a,&b,&c);
//	printf("\na= %lf b=%lf c=%lf\n\n",a,b,c);

	d=(b*b)-(4*a*c);

	if (a!=0 && d>0){
	    //double r1,r2;
		//r1=r2=0;
	    r1=((-b+sqrt(d))/(2*a));
	    r2=((-b-sqrt(d))/(2*a));
	    printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);

	}else{
		printf("Impossivel calcular\n");
	}
	return 0;
}


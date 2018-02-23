//#include<stdio.h>
#include<bits/stdc++.h>

int main(){

	float salary=0;

//	salary=400.01;
	scanf("%f",&salary);

	if (salary>=0 && salary<=400.00) {
	    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",((salary*15)/100)+salary,(salary*15)/100);
	}else if (salary>=400.01 && salary<=800.00) {
	    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",((salary*12)/100)+salary,(salary*12)/100);
	}else if (salary>=800.01 && salary<=1200.00) {
	   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",((salary*10)/100)+salary,(salary*10)/100);
	}
	else if (salary>=1200.01 && salary<=2000.00) {
	   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",((salary*7)/100)+salary,(salary*7)/100);
	}else if (salary>2000.00){
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",((salary*4)/100)+salary,(salary*4)/100);
	}
	return 0;
}

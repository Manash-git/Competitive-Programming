//#include<stdio.h>
#include<bits/stdc++.h>

int main(){

	float salary=0,tax=0;
	scanf("%f",&salary);

	if (salary<=2000.00) {
	    printf("Isento\n");
	} else {
	    if (salary>2000.00 && salary<=3000.00) {
	        salary=salary-2000.00;
	        tax=salary*.08;
	    } else if (salary>3000.00 && salary<=4500.00) {
	        salary=salary-3000;
	        tax=(salary*.18)+80;
	    } else {
	        salary=salary-4500;
	        tax=(salary*.28)+(80+270);
	    }

	    printf("R$ %.2f\n",tax);
	}

	return 0;
}

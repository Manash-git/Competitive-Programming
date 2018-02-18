//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	float price[]={4,4.5,5,2,1.5};
	int amount,code;
	float total;

//	code=4;
//	amount=3;

	scanf("%d %d",&code,&amount);

	total= price[code-1]*amount;

	printf("Total: R$ %.2f\n",total);
	return 0;
}

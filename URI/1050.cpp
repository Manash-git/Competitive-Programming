//#include<stdio.h>
#include<bits/stdc++.h>

struct data{
	int code;
	char destination[20];
};
int main(){

	struct data DDD[]={
		{61,"Brasilia"},
		{71,"Salvador"},
		{11,"Sao Paulo"},
		{21,"Rio de Janeiro"},
		{32,"Juiz de Fora"},
		{19,"Campinas"},
		{27,"Vitoria"},
		{31,"Belo Horizonte"}
		};

	int n=0,flag=0;
	scanf("%d",&n);

	for (int i=0;i<8;i++) {
		if (n==DDD[i].code) {
		    printf("%s\n",DDD[i].destination);
		    flag=1;
		}
	}
	if (flag==0) {
	    printf("DDD nao cadastrado\n");
	}
	return 0;
}

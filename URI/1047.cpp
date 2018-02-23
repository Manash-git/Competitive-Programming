//#include<stdio.h>
#include<bits/stdc++.h>

int main(){

	int start_h,start_m,end_h,end_m,hour,mints;
	scanf("%d %d %d %d",&start_h,&start_m,&end_h,&end_m);
//	start_h=7;	start_m=10;	end_h=8;	end_m=9;

	hour=end_h-start_h;

	if (hour<0) {
	    hour=(24-start_h)+end_h;
	}

	mints=end_m-start_m;

	if (mints<0) {
	    mints=(60-start_m)+end_m;
	    hour--;
	}

	if (start_h==end_h && start_m==end_m) {
	    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	} else {
	    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,mints);
	}


	return 0;
}

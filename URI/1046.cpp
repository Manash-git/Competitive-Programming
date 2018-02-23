//#include<stdio.h>
#include<bits/stdc++.h>

int main(){


	int start,end,x=0;
//	start=0;	end=0;
	scanf("%d %d",&start,&end);

	if (start==end) {
	    x=24;
	}else if (start>end) {
	    x=(24-start)+end;
	} else {
	    x=end-start;
	}

	printf("O JOGO DUROU %d HORA(S)\n",x);

	return 0;
}

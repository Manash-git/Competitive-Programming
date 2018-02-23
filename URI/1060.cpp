//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	int count=0;
	float n=0;
	for (int i=0;i<6;i++) {
	    scanf("%f",&n);
	    if (n>0) {
	        count++;
	    }
	}
	printf("%d valores positivos\n",count);
	return 0;
}

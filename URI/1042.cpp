//#include<stdio.h>
#include<bits/stdc++.h>

int main(){

	/*
		7|21|-14
	*/

	int num[3],sort_num[3];
	for (int i=0;i<3;i++){
	    num[i]=0;
	    sort_num[i]=0;
	}

/*	int sort_num[]={7,21,-14};

	for (int i=0;i<3;i++)
	{
	    printf("%d\n",sort_num[i]);
	}

*/

	for (int i=0;i<3;i++)
	{
	    scanf("%d",&num[i]);
	    sort_num[i]=num[i];
	}

	for (int j=1;j<3;j++){
	   int key=sort_num[j];
	   int i=j-1;
	   while (i>=0 && sort_num[i]>key)
	   {
	       sort_num[i+1]=sort_num[i];
	       i=i-1;
	   }
	   sort_num[i+1]=key;
	}

	for (int i=0;i<3;i++)
	{
	    printf("%d\n",sort_num[i]);
	}

	printf("\n");

	for (int i=0;i<3;i++)
	{
	    printf("%d\n",num[i]);
	}

	return 0;
}

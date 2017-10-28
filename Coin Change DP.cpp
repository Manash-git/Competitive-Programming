/*
	// Coin Change Dynamic Problem
	// Lab Assignment ( Algorithm Lab , summer 2017)
	// ID:: 161-15-7245

*/

//#include<stdio.h>
#include<bits/stdc++.h>

// Global variable declaration
int money=13;
int no_coin= 4;


// Main Function
int main(){

	// variable declaration

	int coin[no_coin]={2,3,6,7};
	int infi = 999999;
	int left,right;
	left=right=0;


	// 2D Array taken for working table and sign

	int table[no_coin+1][money+1];

	int sign[no_coin+1][money+1];


	/*
	 *  Working Table
	 */

	table[0][0]=0;
	sign[0][0]=0;

	for(int i=1 ; i<(no_coin+1); i++){
	    table[i][0]=0;
	    sign[i][0]=0;
	}


	for(int i=0 ; i<(money+1); i++){
	    table[0][i]=infi;
	    sign[0][i]=infi;
	}
	/*
	 *  1 = Up   Arrow
	 *  2 = Left Arrow
	 */

	for(int i=1 ; i<(no_coin+1); i++){
		for(int j=1 ; j<(money+1); j++){

            left = table[i-1][j];
            right= 1+ table[i][j-coin[i-1]];

            if ((coin[i-1]>j) || (left>=infi && right>= infi)){

				table[i][j]=left;
				sign[i][j]=1;

            }else if (left>right){

                table[i][j]=right;
				sign[i][j]=2;  		//left
            }else{
				table[i][j]=left;
				sign[i][j]=1;  	// up

            }

		}

	}

	/*
	 *  Print Coins no needed and value of coins
	 */
	printf(" No of coins need :: %d\n\n",table[no_coin][money] );
	printf(" Coins Needed :: ");

	while (money!=0) {
		if(sign[no_coin][money]==1){
            no_coin--;

		}
		if (sign[no_coin][money]==2){

			 printf(" %d",coin[no_coin-1]);
             money=money-coin[no_coin-1];
		}
	}

	printf(" \n\n");
	return 0;
}




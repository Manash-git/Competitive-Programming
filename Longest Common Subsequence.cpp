/*
	// Longest Common Subsequence (LCS)
	// Lab Assignment ( Algorithm Lab , summer 2017)
	// ID:: 161-15-7245

	// Test Input
	// X= {A B C B D A B}   ;   Y= {B D C A B A}

	// ANS:: LCS length = 4
	// LCS = {B C B A}
*/

//#include<stdio.h>
#include<bits/stdc++.h>


// Function Prototype Declaration

void Find_LCS(char *x,char *y,int 5xLen,int yLen);
int Max(int a, int b);

/*
 * Main Function
 */

int main(){

	/*
	 * Variable declaration
	 */
	int xLen,yLen;		xLen=yLen=0;

	/*
	 * Take length of two subsequence array
	 */

	printf(" Enter length of subsequence X:: ");
	scanf("%d",&xLen);      fflush(stdin);	// Length of x = xLen

	printf("\n Enter length of subsequence Y:: ");
	scanf("%d",&yLen);      fflush(stdin);	// Length of y = yLen


	/*
	 * Subsequence Array Declaration
	 */
    char x[xLen+1];
    char y[yLen+1];

    x[xLen]='\0';
    y[yLen]='\0';


    /*
     * Character Array value taken
     */

	// X array
	printf("\n** Note :: All value should be in Uppercase.\n\n");
	printf(" Enter the value for X subsequence :: \n\n");
    for(int i=0 ; i<xLen; i++){
		printf(" \t\t %d:: ",i+1);
		scanf("%c",&x[i]);          fflush(stdin);
		if (x[i]>='a' && x[i]<='z'){
            x[i]='A'+(x[i]-'a');
		}
		printf(" \n");
    }

    // Y Array
    printf("\n Enter the value for Y subsequence :: \n\n");
    for(int i=0 ; i<yLen; i++){
		printf(" \t\t %d:: ",i+1);
		scanf("%c",&y[i]);          fflush(stdin);
		if (y[i]>='a' && y[i]<='z'){
            y[i]='A'+(y[i]-'a');
		}
		printf(" \n");
    }

    /*
     * Print the subsequence
     */

    printf(" The subsequence are:: \n\n");

	 printf(" X= { ");            // X array
     for(int i=0 ; i<xLen; i++){
		printf(" %c",x[i]);
     }
     printf(" }\n\n");

     printf(" Y= { ");            // Y array
     for(int i=0 ; i<yLen; i++){
		printf(" %c",y[i]);
     }
     printf(" }\n\n");

    /*
     * Function Call
     */
    Find_LCS(x,y,xLen,yLen);

	return 0;
}

    /*
     * LCS function
     */

 void Find_LCS(char *x, char *y,int xLen,int yLen){

    int L[xLen+1][yLen+1];        // Working Array

    /*
     * Simulation Process
     */
    for(int r=0 ; r<=xLen; r++){
        for(int c=0 ; c<=yLen; c++){

            if (r==0 || c==0){
                L[r][c]=0;
            }else if (x[r-1]==y[c-1]){
                L[r][c]=L[r-1][c-1]+1;
            }else {
               if (L[r-1][c]==L[r][c-1]){
                    L[r][c]=L[r-1][c];
               }else {
                    L[r][c]= Max(L[r-1][c],L[r][c-1]);
               }

            }

        }
    }


    /*
     * Backtracking LCS value
     */

    // Variable Declaration

    int row,col,i;

    row=xLen;
    col=yLen;
    i=L[row][col];
 //   printf(" i::  %d\n",i);

    char LCS[i+1];
    LCS[i]='\0';



     while (row>0 && col>0) {
        if (x[row-1]==y[col-1]){
            LCS[i-1]=x[row-1];
        //    printf("LCS[i-1]= LCS[%d]::  %c\n",(i-1),LCS[i-1]);
            row=row-1;
            col=col-1;
            i=i-1;

        }else if (L[row-1][col]>=L[row][col-1]){
            row=row-1;

        }else{
            col=col-1;

        }
     }

     /*
      * Printing LCS Value
      */

      printf(" Length of LCS :: %d \n\n",L[xLen][yLen]);

      printf(" LCS is :: { ");
      for(int i=0 ; i<L[xLen][yLen]; i++){
        printf(" %c",LCS[i]);
      }
      printf(" }\n\n");
}

/*
 * Max Function
 */

int Max(int a, int b){
    return (a>b)? a:b;
}

/*
	// Longest Increasing Subsequence (LIS)
	// Lab Assignment ( Algorithm Lab , summer 2017)
	// ID:: 161-15-7245

*/

//#include<stdio.h>
#include<bits/stdc++.h>

// Function Declaration
void LIS (int arr[],int n);
void Print(int i, int n, int arr[], int parent[]);

// Main Function
int main(){

	// variable declaration
    int n=0;

    printf(" Enter array size:: ");
    scanf("%d",&n);      fflush(stdin);

    // Array declaration and value taken
    int arr[n];
    printf("\n Enter value for array:: \n\n");
    for(int i=0 ; i<n; i++){
		printf(" \tarr[%d]:: ",i+1);
		scanf("%d",&arr[i]);        fflush(stdin);
		printf(" \n");
    }


	//Print the array
	printf(" The array is :: { ");
	for(int i=0 ; i<n; i++){
		printf(" %d",arr[i]);

	}
	printf(" }\n");

	// Function call
    LIS(arr,n);



	return 0;
}

/*
 * Function Definition
 */

// Longest Increasing Subsequence function

void LIS(int arr[], int n){


    /*
     * Array declaration
     */
    int temp[n];
    int parent[n];

    for(int i=0 ; i<n; i++){
        temp[i]= 1;
        parent[i]= -1;
    }

    /*
     * Variable Declaration
     */

     int max_temp, max_index;
     max_temp=max_index=0;


     /*
     * Simulation Process
     */

    for(int i=1 ; i<n; i++){
        for(int j=0 ; j<=(i-1); j++){
            if (arr[j]<arr[i] && (temp[j]+1) > temp[i]){
                temp[i]=temp[i]+1;
                parent[i]=j;

            }
        }
    }

    /*
     *  Finding LIS length
     */

    for(int i=0 ; i<n; i++){
        if (max_temp<temp[i]){
            max_temp=temp[i];
            max_index=i;

        }
    }

    // Print function call
    // For printing LIS value
    Print(max_index,max_temp,arr,parent);

}

/*
 *  Print function
 */

 void Print(int index,int temp, int arr[], int parent[]){

    int len=temp;


    // Array for storing LIS value
    int LIS[temp];
    for(int j=0 ; j<temp; j++){
        LIS[j]=0;
    }

    while (index >= 0){
        LIS[temp-1]=arr[index];
        temp--;
        index=parent[index];
    }

    // Print LIS
    printf("\n Length of LIS is :: %d\n\n",len);
    printf(" LIS :: ");
    for(int i=0 ; i<len; i++){
        printf(" %d",LIS[i]);
    }
    printf(" \n");


 }







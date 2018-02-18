#include<stdio.h>
//#include<bits/stdc++.h>

int main(){

   float count1,fraction,number,note[]={100,50,20,10,5,2},coin[]={100,50,25,10,5,1};
   count1=fraction=number=0;
   float input=0.0;

   scanf("%f",&input);
//   printf("\nInput:: %f",input);

   number=input;

//    for taking fractional part

   input=input*100;
   fraction=(float)(input%100);



//   printf("\n Num:: %d  Frac :: %d",number,fraction);

   printf("NOTAS:");
   for(int i=0;i<6;i++){
      count1=number/note[i];
      number=(float)(number%note[i]);
      printf("\n%d nota (s) de R$ %.2f",count1,note[i]);
   }


   if (number==1) {
      fraction=fraction+100;
   }
//   printf("\n%d",fraction);

   printf("\nMOEDAS:");
   for(int i=0;i<6;i++){
      count1=fraction/coin[i];
      fraction=(float)(fraction%coin[i]);
      printf("\n%d moeda (s) de R$ %.2f",count1,coin[i]/100);
   }
   printf("\n");
    return 0;
}


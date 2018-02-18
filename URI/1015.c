
#include<stdio.h>
#include<math.h>

int main(){

     float x1,x2,y1,y2,total;
     scanf("%f%f\n%f%f",&x1,&y1,&x2,&y2);
     /*total=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);*/
     printf("%.4f\n",sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
     return 0;
}

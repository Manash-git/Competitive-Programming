//#include<stdio.h>
#include<bits/stdc++.h>

int main(){

	//int total_weight=10;
	double n1,n2,n3,n4,n5,average,final_average;

//	n1=9.0;n2=4;n3=8.5;n4=9.0;

	scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);

	average=((n1*2)+(n2*3)+(n3*4)+n4)/10;
	printf("Media: %.1lf\n",average);

	if (average>=7) {
	    printf("Aluno aprovado.\n");
	}else if (average<5) {
	    printf("Aluno reprovado.\n");
	}else if (average>=5.0 && average<=6.9) {

	    printf("Aluno em exame.\n");
	    printf("Nota do exame: ");
	    scanf("%lf",&n5);

	    final_average=(average+n5)/2;

		if (final_average>=5) {
			printf("Aluno aprovado.\n");
			printf("Media final: %.1lf\n",final_average);
		}else{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1lf\n",final_average);

		}


	}
	return 0;
}

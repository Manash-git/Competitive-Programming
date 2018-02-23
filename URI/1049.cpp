//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	char str1[20],str2[20],str3[20];
	gets(str1);
	gets(str2);
	gets(str3);
//	puts(str);

	if (strcmp(str1,"vertebrado")==0){

		if (strcmp(str2,"ave")==0) {
		    if (strcmp(str3,"carnivoro")==0) {
				printf("aguia\n");
			}
			if (strcmp(str3,"onivoro")==0) {
				printf("pomba\n");
			}
		}

		if (strcmp(str2,"mamifero")==0) {
		    if (strcmp(str3,"onivoro")==0) {
				printf("homem\n");
			}
			if (strcmp(str3,"herbivoro")==0) {
				printf("vaca\n");
			}
		}

	}

	if (strcmp(str1,"invertebrado")==0) {

		if (strcmp(str2,"inseto")==0) {
		    if (strcmp(str3,"hematofago")==0) {
				printf("pulga\n");
			}
			if (strcmp(str3,"herbivoro")==0) {
				printf("lagarta\n");
			}
		}

		if (strcmp(str2,"anelideo")==0) {
		    if (strcmp(str3,"hematofago")==0) {
				printf("sanguessuga\n");
			}
			if (strcmp(str3,"onivoro")==0) {
				printf("minhoca\n");
			}
		}
	}


	return 0;
}

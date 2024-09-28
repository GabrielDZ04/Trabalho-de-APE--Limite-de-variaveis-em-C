#include <stdio.h>
#include <stdlib.h>
int main(){
	float n1,n2,ppd,eu,n3;
	int eu_ver,n3_ver;
	do{
		printf("Digite a n1(0 a 4.5):\n");
		scanf("%f",&n1);
		printf("Digite a n2(0 a 4.5):\n");
		scanf("%f",&n2);
		printf("Digite a PPD(0 a 1):\n");
		scanf("%f",&ppd);
	  if (n1 < 0 || n1 > 4.5 || n2 < 0 || n2 > 4.5 || ppd < 0 || ppd > 1) {
            printf("Codigo de erro 3\n"); }
    } while (n1 < 0 || n1 > 4.5 || n2 < 0 || n2 > 4.5 || ppd < 0 || ppd > 1);

	printf("Realizou o Exame Unificado? (Nao=0/Sim=1)\n");
    scanf("%d",&eu_ver);
    if(eu_ver == 1){
    	do{
    	printf("Digite a nota do Exame Unificado(0 a 1):\n");
    	scanf("%f",&eu);
    }while(eu>1);
	}
	printf("Realizou a n3? (Nao=0/Sim=1)\n");
    scanf("%d",&n3_ver);
    if(n3_ver == 1){
    	do{
    	printf("Digite a nota da n3(0 a 4.5):\n");
    	scanf("%f",&n3);
    }while(n3>4.5);
	}
	if(n1<n2){
		n1 = n3;
	}else if(n2<n1){
		n2 = n3;
	}
	float notafinal;
	if(eu_ver=1){
		notafinal = n1+n2+ppd+eu;
		printf("Sua nota final: %2.f\n",notafinal);
		if(notafinal>=7){
			printf("APROVADO\n");
		}else if(notafinal>10){
			printf("APROVADA COM NOTA EXTRA(EU)\n");
		}else{
			printf("REPROVADO");
		}
	}else{
		notafinal = n1+n2+ppd;
		printf("Sua nota final: %f.2\n",notafinal);
		if(notafinal>=7){
			printf("APROVADO\n");
		}else{
			printf("REPROVADO");
		}
	}
	
	
	return 0;
}

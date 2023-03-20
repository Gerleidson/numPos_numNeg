#include<stdio.h>

main(){
	int Num, Cont=1, QtPos=0,QtNeg=0,QtZero=0;
	
	
	while(Cont<=5){
	
		printf("Informe um numero: ");
		scanf("%d",&Num);
			if(Num>0){			
				QtPos++;
			}
			else
				if(Num<0){
					QtNeg++;
				}
				else{
					QtZero++;
				}
	Cont++;
	}
printf("\nPositivos %d, \t Negativos %d, \t Zeros %d", QtPos, QtNeg, QtZero);
}




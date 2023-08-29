#include<stdio.h>

int main(){
	
	int num;
	int resl;

	printf("ingrese el numero\n");
	scanf("%d",&num);
	
	resl = num % 2;
	
	if(resl % 2 == 0){
		printf("el numero es par");
	}
	else{
		printf("el numero no es par");
	}
}

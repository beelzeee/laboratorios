#include<stdio.h>


int main(){

int tiempo;
int resultado;

printf("ingrese una fecha\n");
scanf("%d",&tiempo);

resultado = tiempo/4;

if(resultado % 4 !=0){
	printf("el a�o no es bisiesto");
}
//else{
//	printf("el a�o no es bisiesto");
//}

else if(resultado%100 != 0){
	printf("el a�o no es bisiesto");
}

else if(resultado%400 != 0){
	printf("el a�o no es bisiesto");
}
else{
	printf("el a�o es bisiesto");
}

}	

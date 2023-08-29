/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=0;
    int b=0;
    int sumar =0;
    int restar =0;
    int multiplicar =0;
    int divicion = 0;
    
    printf("ingrese 2 numeros:");
    scanf("%d",&a);
    printf("el otro");
    scanf("%d",&b);
    
    sumar = a+b;
    restar = a-b;
    multiplicar = a*b;
    divicion = a/b;
    
    printf("resultado de la sumar %d",sumar);
    printf("\n");
    printf("resultado de la restar %d",restar);
    printf("\n");
    printf("resultado de la multiplicar %d",multiplicar);
    printf("\n");
    printf("resultado de la divicion %d",divicion);
    return 0;
}

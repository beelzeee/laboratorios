/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int edad;
    char nombre[10];
    
    printf("ingrese su edad:");
    scanf("%d",&edad);
    printf("ingrese el nombre:");
    scanf("%s",&nombre);
    
    printf(" hola %s, su edad es %d",nombre,edad);
    return 0;
}

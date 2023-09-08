#include <stdio.h>
#include <string.h>

/////////////////////////////////////////////////////
struct alumno{
        char nombre[30];
        int lista;
        float promedio;
};   
/////////////////////////////////////////////////////
struct libro1{
    char titulo[30];
    char autor[30];
    int isbn;
    float precio;
};
//////////////////////////////////////////////////////
struct producto{
	char nombre[30];
	int id;
	float precio2;
	int cantidad;
};
int main()
{
	int vueltas1=0;
	int contador1=1;
	
	struct alumno alumnos1[4];
	
	while(vueltas1<5){
		printf("ingrese el nombre del alumno %d\n",contador1);
	    scanf("%s",&alumnos1[vueltas1].nombre);
	    printf("ingrese el nÂ° de lista del alumno %d\n",contador1);
	    scanf("%d",&alumnos1[vueltas1].lista);
	    printf("ingrese el promedio del alumno %d\n",contador1);
	    scanf("%f",&alumnos1[vueltas1].promedio);
	    vueltas1++;
	    contador1++;
	}
///////////////////////////////////////////////////////////////////////////////////
	if(alumnos1[0].promedio>alumnos1[1].promedio&&alumnos1[2].promedio&&alumnos1[3].promedio&&alumnos1[4].promedio){
        printf("el alumno: %s tiene el promedio mas alto\n",alumnos1[0].nombre);
        printf("promedio: %f\n",alumnos1[0].promedio);
    }
    else if(alumnos1[1].promedio>alumnos1[0].promedio&&alumnos1[2].promedio&&alumnos1[3].promedio&&alumnos1[4].promedio){
        printf("el alumno: %s tiene el promedio mas alto\n",alumnos1[1].nombre);
        printf("promedio: %f\n",alumnos1[1].promedio);
    }
    else if(alumnos1[2].promedio>alumnos1[1].promedio&&alumnos1[0].promedio&&alumnos1[3].promedio&&alumnos1[4].promedio){
        printf("el alumno: %s tiene el promedio mas alto\n",alumnos1[2].nombre);
        printf("promedio: %f\n",alumnos1[2].promedio);
    }
    else if(alumnos1[3].promedio>alumnos1[1].promedio&&alumnos1[2].promedio&&alumnos1[0].promedio&&alumnos1[4].promedio){
        printf("el alumno: %s tiene el promedio mas alto\n",alumnos1[3].nombre);
        printf("promedio: %f\n",alumnos1[3].promedio);
    }
    else if(alumnos1[4].promedio>alumnos1[1].promedio&&alumnos1[2].promedio&&alumnos1[3].promedio&&alumnos1[0].promedio){
        printf("el alumno: %s tiene el promedio mas alto\n",alumnos1[4].nombre);
        printf("promedio: %f\n",alumnos1[4].promedio);
    }
////////////////////////////////////////////////////////////////////////////////////////
	int vueltas=0;
	int contador=1;
	
    struct libro1 libros[4];
    
    while(vueltas<5){
	    printf("titulo del libro %d\n",contador);
	    scanf("%s",&libros[vueltas].titulo);
	    printf("autor del libro %d\n",contador);
	    scanf("%s",&libros[vueltas].autor);
	    printf("n° ISBN del libro %d\n",contador);
	    scanf("%d",&libros[vueltas].isbn);
	    printf("precio del libro %d\n",contador);
	    scanf("%f",&libros[vueltas].precio);
	    contador++;
	    vueltas++;
	}    
    
    if(libros[0].precio>libros[1].precio&&libros[2].precio&&libros[3].precio&&libros[4].precio){
        printf("el libro: %s tiene el precio mas alto\n",libros[0].precio);
        printf("libro: %f\n",libros[0].precio);
    }
    else if(libros[1].precio>libros[0].precio&&libros[2].precio&&libros[3].precio&&libros[4].precio){
        printf("el libro: %s tiene el precio mas alto\n",libros[1].precio);
        printf("libro: %f\n",libros[1].precio);
    }
    else if(libros[2].precio>libros[1].precio&&libros[0].precio&&libros[3].precio&&libros[4].precio){
        printf("el libro: %s tiene el precio mas alto\n",libros[2].precio);
        printf("libro: %f\n",libros[2].precio);
    }
    else if(libros[3].precio>libros[1].precio&&libros[2].precio&&libros[0].precio&&libros[4].precio){
        printf("el libro: %s tiene el precio mas alto\n",libros[3].precio);
        printf("libro: %f\n",libros[3].precio);
    }
    else if(libros[4].precio>libros[1].precio&&libros[2].precio&&libros[3].precio&&libros[0].precio){
        printf("el libro: %s tiene el precio mas alto\n",libros[4].precio);
        printf("libro: %f\n",libros[4].precio);
    }
    
    int opcion=0;
    int vueltas2=0;
	int contador2=1;
	struct producto pro[2];
	int rei=0;
	
	pro[0].cantidad=0;
	pro[1].cantidad=0;
	pro[2].cantidad=0;
	while(rei!=1){
		
    printf("\n");
    printf("-----TIENDA-----\n");
    printf("1) agregar producto\n");
    printf("2) mostrar producto de mayor valor\n");
    printf("3) mostrar stock actual de productos\n");
    printf("4) SALIR\n");
    scanf("%d",&opcion);
    
    switch(opcion){
    	case 1:
    		printf("--MAXIMO 3 PRODUCTOS--\n");
    		printf("\n");
		    while(vueltas2<3){
			    printf("ingrese el nombre del producto\n");
			    scanf("%s",&pro[vueltas2].nombre);
			    printf("ingrese la ID del producto\n");
			    scanf("%d",&pro[vueltas2].id);
			    printf("ingrese el precio del producto\n");
			    scanf("%f",&pro[vueltas2].precio2);
			    printf("ingrese la cantidad de productos\n");
			    scanf("%d",&pro[vueltas2].cantidad);
			    contador2++;
			    vueltas2++;
			} 
    		break;
    	case 2:
    		if(pro[0].cantidad==0){
    			printf("no hay ningun producto\n");
			}
			else{
				if(pro[0].precio2>pro[1].precio2&&pro[2].precio2){
        			printf("el producto: %s tiene el precio mas alto\n",pro[0].nombre);
        			printf("producto: %f\n",pro[0].precio2);
			    }
			    else if(pro[1].precio2>pro[0].precio2&&pro[2].precio2){
			        printf("el producto: %s tiene el precio mas alto\n",pro[1].nombre);
			        printf("producto: %f\n",pro[1].precio2);
			    }
			    else if(pro[2].precio2>pro[1].precio2&&pro[0].precio2){
			        printf("el producto: %s tiene el precio mas alto\n",pro[2].nombre);
			        printf("producto: %f\n",pro[2].precio2);
			    }
			}
    		break;
    	case 3:
    		if(pro[0].cantidad==0){
    			printf("no hay ningun producto\n");
			}
			else{
				printf("stock almacen 1: %d\n",pro[0].cantidad);
				printf("stock almacen 2: %d\n",pro[1].cantidad);
				printf("stock almacen 3: %d\n",pro[2].cantidad);
			}
    		break;
    	case 4:
    		printf("-Acaba de salir-\n");
    		break;
	}
	printf("desea mantenerse en el menu?\n");
	printf("0 = si   1=no\n");
	scanf("%d",&rei);
	}
    
    return 0;
}

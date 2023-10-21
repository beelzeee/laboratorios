#include<iostream>
#include<string>
using namespace std;

int main(){
	int suma,resta,multi,divi,promedio,valor1,valor2,A,a=10,edad;
	string mostrar,nombre,texto;
	float e=1.5;
	double i=12343;
	char o [10]="holamundo";
	texto = "holamundooo";
	//bool = false;
	
	cout << "hola mundo\n";
	cout << "int: " << a;
	cout << "\nfloat: " << e;
	cout << "\ndouble: " << i;
	cout << "\nchar: " << o;
	cout << "\n";
	cout << texto;//string
	cout << "\n";
	cout << "\nescriba un numero\n";
	cin >> A;
	cout << "escriba una palabra\n";
	cin >> mostrar;
	cout << "\nentero: "<< A;
	cout << "\npalabra: "<<mostrar;
	cout << "\n";
	cout << "ponga un nombre:";
	cin >> nombre;
	cout << "hola "<<nombre;
	cout << "\ningrese 2 numeros\n";
	cin >> valor1;
	cin >> valor2;
	suma=valor1+valor2;
	resta=valor1-valor2;
	multi=valor1*valor2;
	divi=valor1/valor2;
	promedio=(suma+resta+multi+divi)/4;
	cout << "\nsuma:"<<suma;
	cout << "\nresta:"<<resta;
	cout << "\nmultiplicacion:"<<multi;
	cout << "\ndivision:"<<divi;
	cout << "\npromedio:"<<promedio;
	cout << "\n";
	cout << "ingrese una edad:";
	cin	>> edad;
	if(edad>18 && edad<25){
		cout << "la edad esta dentro del rango";
	}
	else{
		cout << "la edad esta fuera del rango";
	}
	
	return 0;
}

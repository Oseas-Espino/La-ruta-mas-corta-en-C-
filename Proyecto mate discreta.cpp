#include<iostream> #include<stdio.h> #include<conio.h> #include<string.h> #include<stdlib.h> #include<math.h> #include<cmath> #include<cstdlib>

using namespace std;
float ab, ac, bd;
int cd, cf, de, fe, fg, ge, menor, opcion;

void opcion1(){
	ab=0;
	menor=10000000;
	cout<<"Ingrese el valor de la arista de A hacia B: "<<endl;
	cin>>ab;
    cout<<"Ingrese el valor de la arista de A hacia C: "<<endl;
	cin>>ac;
	cout<<"Ingrese el valor de la arista de B hacia D: "<<endl;
	cin>>bd;
	cout<<"Ingrese el valor de la arista de C hacia D: "<<endl;
	cin>>cd;
	cout<<"Ingrese el valor de la arista de C hacia F: "<<endl;
	cin>>cf;
	cout<<"Ingrese el valor de la arista de D hacia E: "<<endl;
	cin>>de;
	cout<<"Ingrese el valor de la arista de F hacia E: "<<endl;
	cin>>fe;
	cout<<"Ingrese el valor de la arista de F hacia G: "<<endl;
	cin>>fg;
	cout<<"Ingrese el valor de la arista de G hacia E: "<<endl;
	cin>>ge;
	
	if (ab<menor){
		menor=ab;
	}
	else{
		menor=menor;
	}
	cout<<"Los numeros han sido guardados"<<endl;
	system("pause");
}
void opcion2(){
	if(ab!=0){
	cout<<"La ruta mas corta de A hasta E es: ";
	cout<<menor<<endl;
	system("pause");
	}
	else{
	cout<<"No se ha ingresado ningun valor"<<endl;
	system("pause");
	}
}
int menu(){
	do{
	system("cls");
		cout<<"      RUTA MAS CORTA"<<endl;
		cout<<"          "<<endl;
		cout<< "        B-----D-------E"<<endl;     
		cout<< "       /     /       /|"<<endl;
		cout<< "      /     /       / |"<<endl;
		cout<< "     /     /       /  |"<<endl;
		cout<< "    A-----C-------F---G"<<endl;
		cout<<"          "<<endl;
		cout<< "1. Ingresar valores"<<endl;
		cout<< "2. Encontrar la ruta mas corta de A hasta E"<<endl;
		cout<< "3. Salir"<<endl;
		cout<< "   "<<endl;
		cout<< "Cual es su opcion: ";
		cin>>opcion;
if(opcion==1){
			 opcion1();
		}
				if(opcion==2){
			 opcion2();
		}
			if(opcion>3){
			 cout<< "Opcion no encontrada por favor intente de nuevo"<<endl;
			 system("pause");
			 system("cls");
			 menu();				
		}
	}while (opcion!=3);
		cout<<"QUE TENGA UN BUEN DIA"<<endl;
}
int main ()
{
menu();
	}

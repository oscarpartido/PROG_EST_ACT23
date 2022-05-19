/*Autor: oscar vivaldi partido ramirez fecha: 31/03/2022
hacer un programa que utilice la libreria string para
usar cadenas de caracteres y sus funciones mas comunews
*/
#include<stdio.h>
#include<string.h>

int main(){
	//declaracion de cadenas
	char nombre []="Oscar vivaldi Partido Ramirez";
	char* carrera="Ing. en sistemas computacionales";
	char nombre2[30];
	int longitud;
	//Entrada por teclado de cadenas con scanf no lee espacios 
	//scanf("%s",&nombre2);
	//usando gets, funciona, lee todo, pero no verifica el tamaño de la cadena
	//gets(nombre2); 
	printf("Introduce el nombre:  ");
	fgets(nombre2,30,stdin);// lee bien y solamente lo que cabe en la cadena 
	
	printf("Nombre2=[%s]\n",nombre2);
	printf("Nombre: [%s]\n",nombre);
	printf("carrera: [%s]\n",carrera);
	longitud=strlen(nombre2);
	printf("la longitud del nombre2 es %d \n",longitud);
	if(strlen(nombre)>strlen(nombre2)){
		printf("nombre tiene mas caracteres \n");
	}
	else{
		printf("nombre2 tiene mas caracteres.");
	}
	strcpy(nombre2,"hola mundo!!");
	printf("nombre2 = [%s \n]",nombre2);
	return 0;
}


/*
 ============================================================================
 Name        : class1.c
 Author      : sorokaYago
 Version     :
 Copyright   : 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//#include <stdlib.h>

int main(void) {

	//ARRABCA El programa
	setbuf (stdout, NULL);
	/*printf(MENSAJE);

	int recta;
	int valor1 = 27;
	float pi = 3.14;
	char letra = 'C';
	int numero1Usuario;
	int numero2Usuario;
	int resultadoSuma;
	int resultadoMultiplicacion;
	float resultadoDivision;
	recta = 28;

	printf("el valor de pi es: %f\n", pi);
	printf("la recta tiene %d metros\n", recta);
	printf("precio: %d pesos\n", valor1);
	printf("letra: %c\n", letra);
	printf("--------------------------------------------------\n");

	printf("ingrese primer numero: \n");
	scanf("%d", &numero1Usuario);
	printf("ingrese el segundo numero: \n");
	scanf("%d", &numero2Usuario);

	printf("1er numero = %d\n", numero1Usuario);
	printf("2do numero = %d\n", numero2Usuario);

	resultadoSuma = numero1Usuario + numero2Usuario;
	resultadoMultiplicacion = numero1Usuario * numero2Usuario;
	resultadoDivision = numero1Usuario / numero2Usuario;

	printf("%d + %d es %d\n", numero1Usuario, numero2Usuario, resultadoSuma);
	printf("%d * %d = %d\n", numero1Usuario, numero2Usuario, resultadoMultiplicacion);
	printf("%d / %d = %f\n", numero1Usuario, numero2Usuario, resultadoDivision);


	int numero1;
	int numero2;
	int resultado;

	printf("ingrese 1er numero: \n");
	scanf("%d", &numero1);
	printf("ingrese 2do numero: \n");
	scanf("%d", &numero2);
	resultado = numero1 + numero2;
	printf("la suma entre %d y %d da como resultado %d", numero1, numero2, resultado);
	*/

	//pedir 5 nums y dar como resultado maximo y minimo y promedio


	int bufferInt;
	int min;
	int max;
	int flag;
	int acumuladorSuma;
	float promedio; //no me funciona
	int j;

	j = 5;
	bufferInt = 0;
	flag = 1;
	acumuladorSuma = 0;

	for (int i = 0; i<5; i++) {
		printf("Ingrese 5 numeros distintos. ");
		printf ("\nNumero %d: ", i + 1);
		scanf("%d", &bufferInt);
		acumuladorSuma = bufferInt + acumuladorSuma;

		if(flag == 1 || bufferInt < min){
			min = bufferInt;
		}
		if (flag == 1 || bufferInt > max) {
			max = bufferInt;
			flag = 0;
			}
		fflush(stdin); //hay que usar dos stdlib?
	}
	promedio = (float)acumuladorSuma / j; //no funcciona
	printf ("\nEl promedio es: %f", promedio); //me da la cuenta mal
	printf("\nEl valor minimo es %d y el maximo es %d", min, max);


/*
	int bufferInt;
	int min;
	int max;
	int flag;
	int i;
	//char respuesta;

	//respuesta = 's';
	i = 0;

	//while (respuesta == 's'){
	//i++
	//}

	do
	{
		printf("Ingrese numeros hasta que quiera, 000 termina el proceso");
		printf ("\nNumero %d: ", i + 1);
		i++;
		scanf("%d", &bufferInt);
		//acumuladorSuma = bufferInt + acumuladorSuma;

		if(flag == 1 || bufferInt < min){
					min = bufferInt;
		}
		if (flag == 1 || bufferInt > max) {
		max = bufferInt;
		flag = 0;
					}
			}
	 while (bufferInt != 000);

	printf("\nEl valor minimo es %d y el maximo es %d", min, max);
//tira la direccion de memoria, no el 4. no se por que por el ampersand?
*/
	return EXIT_SUCCESS;
}

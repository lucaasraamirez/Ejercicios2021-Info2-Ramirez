//promedio
#include <stdio.h>

int main() {
	int e=0,suma=0, valor;
	float promedio;
	
	printf("ingrese los valores que quiere promediar. Para termnar ingresar 9999\n");
	
	while (1) 
	{
		scanf("%d",&valor);
		if(valor==9999)
		{
			promedio = suma / e;
			printf("El promedio es:%.2f",promedio);
			break;
		}
		suma=suma+valor;
		e++;
	}
	return 0;
}

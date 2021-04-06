#include <stdio.h>
#include <math.h>

int main() {
	double monto;
	double principal=1000.0;
	double tasa;
	int anio;
	
	for ( tasa=.05;tasa<0.11;tasa+=0.01) 
	{
		printf("%4s %21s %20s\n","Anio","Monto del deposito","Tasa");
		for (anio=1;anio<=10;anio++) 
		{
			monto=principal*pow(1.0+tasa,anio);
			printf("%4d %21.2f %20.2f\n",anio,monto,tasa);
		}	
	}
	return 0;
}

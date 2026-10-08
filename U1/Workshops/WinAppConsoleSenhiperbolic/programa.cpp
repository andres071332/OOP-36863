#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

long Factorial(int x);
void LeerDatos (double &deg,int &n);
void ImprimirResultado (float deg, float result);
float GradosEnRadianes( float deg);
double Serie (float x, int n);

int main(int argc, char** argv) 
{
	double deg,x, senh_1;
	int n;
	
	LeerDatos (deg, n);
	x= GradosEnRadianes(deg);
	senh_1= Serie (x,n);
	ImprimirResultado(deg,senh_1);

	system ("pause");	
	return 0;
}

void LeerDatos (double &deg,int &n)
{
	cout << "Calcular el valor aproximado del inverso del seno hiperbolico \n";
	cout << "Ingrese el valor de x (en grados): ";cin >> deg;
	cout<< "Ingrese el valor de n al cual se quiere aproximar la serie; ";cin >> n;
}

float GradosEnRadianes( float deg)
{
	const float PI = 3.14159;
	float x;
	x= (deg*PI)/180;
	return x;
}

double Serie (float x, int n)
{
	int ax=0;
	double num, den;
	double serie=0;
	for (ax=0; ax <= n; ax++)
	{
		num= pow(-1,ax)*Factorial(2*ax)*pow(x, (2*ax+1));
		den= pow(4, ax)*pow(Factorial(ax), 2)*(2*ax+1);
		serie= serie+(num/den);
	}
	return serie;
}

void ImprimirResultado (float deg, float result)
{
	cout << "El valor del inverso seno hiperbolico de " <<deg<<" es: "<< result<<endl<<endl;
}

long Factorial(int x)
{
	long fact=1;
	long ax;
		for (ax=2; ax <= x; ax++)
		{
		fact=fact*ax;
		}
	return fact;
}


#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char** argv) 
{
	long long D, C, R, i, sum, num, bin;
	
	cout << "Ingrese el valor que desea convertir a binario: "; cin >> num;
	D=num;
	i = 0;
	sum =0;
	do
	{
		C=D / 2;
		R=D % 2;
		sum=sum + R * pow(10,i);
		++i;
		D=C;
	} while ( C != 0);
	bin=sum;
	cout << "Su valor en binario es: "<< bin<< endl;
	system ("pause");
	return 0;
}

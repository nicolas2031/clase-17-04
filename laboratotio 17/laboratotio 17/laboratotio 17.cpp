#include <iostream>

/*int main()

{

	int x;
	int y;
	std::cout << "ponga un numero por favor" << std::endl;
	std::cin >> x;
	std::cout << "ponga un numero por favor" << std::endl;
	std::cin >> y;

	int suma = x + y;
	int resta = x - y;
	int producto = x * y;
	int cociente = x % y;

	std::cout << "la suma es:" << suma << std::endl;
	std::cout << "la resta  es:" << resta <<std::endl;
	std::cout << "la multiplicacion  es:" << producto << std::endl;
	std::cout << "el cociente es:" << cociente << std::endl;

	return 0;


}

int main()
{
	char t[] = "x y z f";
	char q = 'x';
	char w = 'y';
	char e = 'z';
	char r = 'f';
	
	//1
	std::cout << t << std::endl;
	//2
	std::cout << q << " " << w << " " << e << " " << r << std::endl;
	//3
	std::cout << q << std::endl;
	std::cout << w << std::endl;
	std::cout << e << std::endl;
	std::cout << r << std::endl;
	


}






/*int main()

{
	int x;
	int y;
	std::cout << "ponga un numero por favor" << std::endl;
	std::cin >> x;
	std::cout << "ponga un numero por favor" << std::endl;
	std::cin >> y;

	if (x > y) {

		std::cout << "el numero mayor es " << x << std::endl;
	}

	else if (x < y) {
		std::cout << "el numero mayor es " << y << std::endl;
	}

	else {
		std::cout << "estos numeros son iguales " << std::endl;
	}

	return 0;

}

int main()

{

	int x;
	int y;
	int z;



	std::cout << "ponga un numero por favor" << std::endl;
	std::cin >> x;
	std::cout << "ponga un numero por favor" << std::endl;
	std::cin >> y;
	std::cout << "ponga un numero por favor " << std::endl;
	std::cin >> z;

	int suma = x + y + z;
	int producto = x * y * z;
	int promedio = (x + y + z) / 3;

	std::cout << "la suma es: " << suma << std::endl;
	std::cout << "el promedio es: " << promedio << std::endl;
	std::cout << "el producto es:  " << producto << std::endl;

	if (x > y && x > z) {

		std::cout << "el numero mayor es " << x << std::endl;
	}

	else if (y > x && y > z) {
		std::cout << "el numero mayor es " << y << std::endl;
	}
	else if (z > x && z > y) {
		std::cout << "el numero mayor es " << z << std::endl;
	}
	
	else {
		std::cout << "estos numeros son iguales " << std::endl;
	}

	return 0;



}*/


using namespace std;


// ejercicio 2.27

int main()
{
	char g;


	cout << "ingrese un caracter: "; cin >> g;
	cout << static_cast <int> (g);

	return 0;

}


// ejercicio 2.28
int main()

{

	int x;
	cout << " ingrese un numero de 5 numeros " << endl;
	cin >> x;

	int n1 = x / 10000;
	int n2 = (x % 10000) / 1000;
	int n3 = ((x % 10000) % 1000) / 100;
	int n4 = (((x % 10000) % 1000) % 100) / 10;
	int n5 = ((((x % 10000) % 1000) % 100) % 10) / 1;



	cout << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << endl;
	return 0;

}

// ejercicio 2.29

int main()
{
	int x;
	
	x = 0;
	cout << x << "\t" << 6 * (x * x) << "\t" << (x * x * x) << endl;
	x = 1;
	cout << x << "\t" << 6 * (x * x) << "\t" << (x * x * x) << endl;

	x = 2;
	cout << x << "\t" << 6 * (x * x) << "\t" << (x * x * x) << endl;
	x = 3;
	cout << x << "\t" << 6 * (x * x) << "\t" << (x * x * x) << endl;
	x = 4;
	cout << x << "\t" << 6 * (x * x) << "\t" << (x * x * x) << endl;
	x = 5;
	cout << x << "\t" << 6 * (x * x) << "\t" << (x * x * x) << endl;
	x = 6;
	cout << x << "\t" << 6 * (x * x) << "\t" << (x * x * x) << endl;
	x = 7;
	cout << x << "\t" << 6 * (x * x) << "\t" << (x * x * x) << endl;
	x = 8;
	cout << x << "\t" << 6 * (x * x) << "\t" << (x * x * x) << endl;
	x = 9;
	cout << x << "\t" << 6 * (x * x) << "\t" << (x * x * x) << endl;



	return 0;

}


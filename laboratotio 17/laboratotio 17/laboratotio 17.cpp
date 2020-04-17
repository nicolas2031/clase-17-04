#include <iostream>

int main()

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

	int x = 4;
	int y = 3;
	int z = 2;
	int s = 1;

	std::cout << "sus nnumeros adyacentes de 1 son: " << "0," << s << ",2" << std::endl;
	std::cout << "sus nnumeros adyacentes de 2 son: " << "1," << z << ",3" << std::endl;
	std::cout << "sus nnumeros adyacentes de 3 son: " << "2," << y << ",4" << std::endl;
	std::cout << "sus nnumeros adyacentes de 4 son: " << "3," << x << ",5" << std::endl;
	return 0;

}






int main()

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



}









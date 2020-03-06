#include <iostream>
#include <iomanip> 
#include <conio.h>
//Вариант №13
// задание №1
/*int main()
{
	system("color 70");

	std::cout   << "   *******" << std::endl
			    << "   *     *" << std::endl
		    	<< "   *     *" << std::endl
				 << "   *     *" << std::endl
			    << " ***********" << std::endl
		    	<< " *         *" << std::endl;


	_getch(); 

	return 0;
}
*/
//задание №2i
/*int main()
{
	system("color 8A");

	int storona;

	std::cout << "Storona vosmiugolnika :  ";
	std::cin >> storona;

	int perimetr = storona * 8;
	std::cout << "Perimetr raven:  ";
	std::cout << perimetr << std::endl;

	float ploshad = 4.828 * (storona * storona);
	std::cout << "Ploshad ravna:  ";
	std::cout << ploshad;

	_getch();

	return 0;

	//Я сделал возможность получения площади через сторону восьмиугольника , а число 4.828 взял из формулы.
}
*/
//задание №6
/*int main()
{
	system("color 72");

	float ch1;
	float ch2;
	float ch3;

	std::cout << "Vvedite chislo 1:  ";
	std::cin >> ch1;

	std::cout << "Vvedite chislo 2:  ";
	std::cin >> ch2;

	std::cout << "Vvedite chislo 3:  ";
	std::cin >> ch3;

	float srednee = (ch1 + ch2 + ch3) / 3;
	std::cout << "Srednee arefmeticheskoe:  ";
	std::cout << srednee << std::endl;

	float raznost = (2 * (ch1 + ch3)) - 3 * ch2;
	std::cout << "Raznost:  ";
	std::cout << raznost << std::endl;

	_getch();

	return 0;
}
*/
//задание №8a
/*int main()
{
	system("color F");
	float a;
	float b;

	std::cout << "Solve function. \n"

		"Enter a: ";	
	std::cin >> a;

	std::cout << "Enter b: ";
	std::cin >> b;

	float f = (a + 4 * b) * (a - 3 * b) + a * a;

	std::cout << "a = " << a << std::endl
		<< "b = " << b << std::endl
		<< "f = " << f << std::endl;


	_getch();

	return 0;
}
*/
//задание №9g
/*int main()
{
	system("color F0");
	
	float t1, v1, v2, v3;
	
	std::cout << "Turns per min :  ";
	std::cin >> t1;

	v1 = t1 * 360;
	v2 = t1 * 21600;
	v3 = t1 * 6.28318530718;

	std::cout << "Degrees per min   Degrees per hour   Radian per min \n"
		      <<"     "<<v1<<"              "<<v2<<"          "<<v3;
	


	_getch();

	return 0;
}
*/
//задание №10
/*int main()
{
	system("color F2");

	int num1, num2, num3, max;

	std::cout << "Enter 3 numbers " << std::endl;
	std::cout << "-->"; std::cin >> num1;
	std::cout << "-->"; std::cin >> num2;
	std::cout << "-->"; std::cin >> num3;

	if (num1 > num2)  max = num1;
	else max = num2;

	if (max < num3) max = num3;

	std::cout << "Max : " << max << std::endl;

	_getch();

	return 0;
}
*/
#include <fstream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <iostream>
#include <sstream>
#define PI 3.14159265


using namespace std;

//Задача №1
/*int main()
{
	ofstream outFile;
	outFile.open("results1.txt");

	int num;

	cout << "Enter num :  ";
	cin >> num;
	
	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < i; j++)
			cout << 0;
		cout << endl;
	}

	cout << endl;
	outFile << num << endl;


	_getch();
	
	return 0;

	outFile.close();
}*/
//Задача №2(M)
/*int main()
{
	ofstream outFile;
	outFile.open("results2M.txt");

	float dx, xs, xf;
	const float eps = 0.000001;  // всё, что меньше этого числа считаем нулём

	cout << "Enter [xs, xf]: ";
	cin >> xs >> xf;

	cout << "Enter dx: ";
	cin >> dx;

	// заголовок таблицы
	cout << "\tx\t\ty" << endl;

	cout.precision(5);
	float f;
	float x = xs;  // начинаем считать с левого края интервала
	while (x < xf) {
		if (fabs(x - 2) < eps)
			cout << "\t"
			<< x
			<< "\t\t Divide on zero"
			<< endl;
		else {
			f = sqrt(2 + 4 * x * x) + 6 * x + sin(8 * x + 11);

			cout << "\t"
				<< x
				<< "\t\t"
				<< f
				<< endl;
		}
		x += dx;
	}

	outFile << "x = " << x << endl;
	outFile << "y = " << f << endl;

	_getch;

	return 0;

	outFile.close();
}*/
//Задача №2(D)
/*int main()
{
	ofstream outFile;
	outFile.open("results2D.txt");

	float dx, xs, xf;
	const float eps = 0.000001;  // всё, что меньше этого числа считаем нулём

	cout << "Enter [xs, xf]: ";
	cin >> xs >> xf;

	cout << "Enter dx: ";
	cin >> dx;

	// заголовок таблицы
	cout << "\tx\t\ty" << endl;

	cout.precision(5);
	float f;
	float x = xs;  // начинаем считать с левого края интервала
	while (x < xf) {
		if (fabs(x - 2) < eps)
			cout << "\t"
			<< x
			<< "\t\t Divide on zero"
			<< endl;
		else {
			f = (-3 + x) * (-3 + x) + 2 * x + 5;

			cout << "\t"
				<< x
				<< "\t\t"
				<< f
				<< endl;
		}
		x += dx;
	}

	outFile << "x = " << x << endl;
	outFile << "y = " << f << endl;

	return 0;

	outFile.close();
}*/
//Задача №4 (С)
/*int main()
{
	setlocale(LC_ALL, "Rus");

	ofstream outFile;
	outFile.open("results4C.txt");

	int x, y;

	cout << "Введите число x : "; cin >> x;

	if (x > 0) {
		y = 1.5*x + 5;
		cout << "y = 1.5*x +5 = " << y << endl;
	}
	
	outFile << "y = " << y << endl;

	_getch();

	return 0;

	outFile.close();

}*/
//Задача №9
/*int main() {
	setlocale(LC_ALL, "Rus");

	ofstream outFile;
	outFile.open("results9.txt");

	float r;//начальный радиус в см
	float v = 0.0;//суммарный объём
	
	cout << "Введите начальный радиус :  ";
	cin >> r;

	for (int i = 1; i <= 12; i++)
	{
		v += 4.0 / 3.0 * PI * r * r * r;//к суммарному объёму прибавляем 4/3 * ПИ * радиус в кубе
		r += 0.5;//увеличиваем радиус на 0.5 см
	}
	cout << "Суммарный объём 12-шаров равен : " << v << " (см кубических) или " << v / 1000 << " (литров)\n";
	
	outFile << "Суммарный объём 12-шаров равен : " << v << " (см кубических) или  " << v / 1000 << " (литров)" << endl;

	_getch();

	return 0;

	outFile.close();
}*/
//Задача №3 (С)
/*int main() {

	ofstream outFile;
	outFile.open("results3C.txt");

	float x, lim, y, i;

	cout << "Enter x :  ";
	cin >> x;
	cout << "Predel :  ";
	cin >> lim;

	i = 1;
	y = 0;

	double sum = 0;

	for (int i = 1; i <= lim; i++) {
		y = 1 / (2 * (x * i));
		sum += y;
	}
	cout << sum << endl;

	cout << endl;
	outFile << sum << endl;

	return 0; 

	outFile.close();

}*/
//Задача №3 (G)
/*int main() {

	ofstream outFile;
	outFile.open("resurts3G.txt");

	int x, lim, y, u;
	int i;

	cout << "Enter x :  ";
	cin >> x;
	cout << "Predel :  ";
	cin >> lim;

	double sum = 0;

	for (i = 1; i <= lim; i++) {

		if (i % 2 == 0) {
			u = 1 / (x * i);
			sum = sum - u;
		}
		else {
			u = 1 / (x * i);
			sum = sum + u;
		}
	}
	cout << sum << "";

	cout << endl;
	outFile << sum << endl;

	return 0;
	
	outFile.close();
}*/




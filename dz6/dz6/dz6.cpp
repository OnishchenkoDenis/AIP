#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <windows.h>

using namespace std;

//Задача 1
/*void   Task1()
{
	fstream f;
	f.open("Z1.txt", ios::out | ios::trunc);

	int const  n = 5;
	int mx[n][n];

	srand(time(NULL));

	int min = 256;
	int str = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mx[i][j] = rand() % (min - 1);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mx[i][j] < min)
			{
				min = mx[i][j];
				str = i;
			}

		}
	}


	for (int i = 0; i < n; i++)
	{
		mx[str][i] = 0;
	}

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			cout << mx[i][j] << " ";
			f << mx[i][j] << " ";
		}
		cout << "\n";
	}
	f << min;
	cout << min;
	f.close();

}*/

//Задача 4

/*void Task4() {

	cout << "Задача 4. В квадратной матрице найти сумму положительных элементов, лежащих на и выше главной диагонали и расположенных в чётных столбцах." << endl;

	const int n = 4;
	const int m = 4;
	int mat[n][m];
	int k = 0;

	srand(time(NULL));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			mat[i][j] = rand() % 28 - 13;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << mat[i][j] << " \t";
		cout << endl;
	}

	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i + 1; j++) {
			if (mat[i][1] > 0)
				count += mat[i][1];
			if (mat[i][3] > 0)
				count += mat[i][3];
		}

	cout << "Sum of elements: " << count << endl;

}*/


//Задача 7

/*void Task7() {

	cout << "Задача 7. Дана матрица. Элементы первой строки — количество осадков в соответствующий день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган? (ураган — когда самый сильный ветер был в самый дождливый день)." << endl;

	const int n = 4;
	const int m = 4;
	int mat[n][m];
	int thunderone[m];
	int thundertwo[m];
	int k = 0;

	srand(time(NULL));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			mat[i][j] = rand() % 28;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << mat[i][j] << " \t";
		cout << endl;
	}


	int rain = 0;
	int rainprov = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			for (int j = 0; j < i + 1; j++) {
				if (mat[i][0] > rain) {
					rain = mat[i][0];
					thunderone[j] = mat[i][0];
				}
				if (mat[i][2] > rain) {
					rain = mat[i][2];
					thunderone[j] = mat[i][2];
					thunderone[j] = rainprov;
				}
			}
		}
	}

	int wind = 0;
	int windprov = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			for (int j = 0; j < i + 1; j++) {
				if (mat[i][1] > wind) {
					wind = mat[i][1];
					thundertwo[j] = mat[i][1];
					thundertwo[j] = windprov;
				}
				if (mat[i][3] > wind) {
					wind = mat[i][3];
					thundertwo[j] = mat[i][3];
					thundertwo[j] = windprov;
				}
			}

		}
	}
	cout << "Wind- " << wind << " Rainfall- " << rain << endl;
	if (windprov = rainprov) {
		cout << "Шторм был" << endl;
	}
	else {
		cout << "Шторма не было" << endl;
	}

}*/

//Задача 10

/*int main()
{
	char a;
	const int rows = 3;
	const int cols = 3;
	int mat1[rows][cols];
	int mat2[rows][cols];
	int mat3[rows][cols];
	int t = 0;
	std::cout << "Vvod matrix 1: \n";

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << "[" << i << "][" << j << "] = ";
			std::cin >> mat1[i][j];
		}
	}
	std::cout << "Vvod matrix 2: \n";

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << "[" << i << "][" << j << "] = ";
			std::cin >> mat2[i][j];
		}
	}
	std::cout << "Viberite chto delat s Matritsami: \n" << "1. Slojit\n" << "2. Vichest\n" << "3. Umnojit\n" << "4. Transpnirovat\n" << "Vibor: ";
	std::cin >> a;

	switch (a) {
	case '1':
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++) {
				mat3[i][j] = mat1[i][j] + mat2[i][j];
			}
		std::cout << "-----Otvet-----\n";
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				std::cout << mat3[i][j] << "    ";
			}
			std::cout << "\n";
		}
		break;

	case '2':
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++) {
				mat3[i][j] = mat1[i][j] - mat2[i][j];
			}
		std::cout << "-----Otvet-----\n";
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				std::cout << mat3[i][j] << "    ";
			}
			std::cout << "\n";
		}
		break;

	case '3':
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++) {
				mat3[i][j] = 0;
				for (int k = 0; k < 3; k++)
					mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		std::cout << "-----Otvet-----\n";
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				std::cout << mat3[i][j] << "    ";
			}
			std::cout << "\n";
		}
		break;

	case '4':
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++) {
				t = mat1[i][j];
				mat1[i][j] = mat1[j][i];
				mat1[j][i] = t;
			}
		std::cout << "-----Otvet-----\n";
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				std::cout << mat1[j][i] << "    ";
			}
			std::cout << "\n";
		}
		break;
	}
	getchar();
	getchar();
	return 0;
}*/



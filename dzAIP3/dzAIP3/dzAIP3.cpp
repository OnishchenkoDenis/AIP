#include <iostream>
#include <cstdlib>
#include <ctime> 
#include "fstream"
#include <stdio.h>
#define fess 10
using namespace std;
const int numOfElements = 20;

//Задание 1е
/*
int main()
{
	setlocale(LC_ALL, "rus");
	int mas[10]{};
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		mas[i] = 5 + rand() % 15;
	}
	cout << endl << "Массив c числами oт 5 до 15: ";
	for (int i = 0; i < 10; i++)
	{
		cout << mas[i] << "  ";
	}
	cout << endl;
	return 0;
}*/

//Задание 2с


/*int main() {

	int mas[fess];
	int sum = 0, count = 0;

	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 20 + 1;
		cout << mas[i] << " ";
		if (mas[i] > 3) {
			sum += mas[i];
			count++;
		}
	}
	cout << endl << "kol- vo = " << count << " elements," << " sum = " << sum;
	return 0;
}*/

//Задание 2g

/*int main() {
	int mas[fess];
	int sum = 0, count = 0;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 20 + 1;
		cout << mas[i] << " ";
		if (mas[i] < 5) {
			sum += mas[i];
			count++;
		}
	}
	cout << endl << "kol- vo = " << count << " elements," << " sum = " << sum;
	return 0;
}*/

//Задача 5
/*
int getMaxIndex(int intArray[]);
int getMinIndex(int intArray[]);

int main() {
	setlocale(LC_ALL, "rus");
	int intArray[numOfElements];
	intArray[0] = 5;
	srand(time(NULL));

	for (register int i = 0; i < numOfElements; i++) {
		intArray[i] = 50 - rand() % 100;
		cout << "\n" << "intArray[" << i << "] = " << intArray[i];
	}

	cout << "\n" << "Max index: " << getMaxIndex(intArray);
	cout << "\n" << "Min index: " << getMinIndex(intArray);
	return 0;
}

int getMaxIndex(int intArray[]) {
	int maxIndex = 0;
	int maxElement = 0;
	for (register int i = 0; i < numOfElements; i++) {
		if (intArray[i] > maxElement) {
			maxElement = intArray[i];
			maxIndex = i;
		}
	}

	return maxIndex;
}

int getMinIndex(int intArray[]) {
	int minIndex = 0;
	int minElement = 0;
	for (register int i = 0; i < numOfElements; i++) {
		if (intArray[i] < minElement) {
			minElement = intArray[i];
			minIndex = i;
		}
	}

	return minIndex;
}*/


//Задание4

/*int main()
{

	std::ofstream outFile;
	outFile.open("results(4).txt");


	const int n = 10;
	const int x = 8;
	int y = 0;
	long long sum = 1;

	int arr[n];
	int gar[x];



	srand(10);

	for (int i = 0; i < n; i++)
		arr[i] = rand() % 10 + 10;

	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << ", ";
		outFile << arr[i] << ", ";
	}

	std::cout << std::endl;



	for (int i = 0; i < 10; i++) {
		sum = sum * arr[i];
		std::cout << sum << std::endl;
	}


	std::cout << "Proizvedenie is: " << sum << std::endl;
	outFile << "Proizvedenie is: " << sum << std::endl;

	std::cin.get();
	std::cin.get();


	return 0;
	outFile.close();
}*/

//Задание 8
/*
int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	int b = 0;
	int i, size;
	srand((unsigned)time(NULL));
	int* arr;
	cout << "Введите розмер массива: ";
	cin >> size;
	arr = new int[size];
	cout << "Массив: ";
	for (i = 0; i < size; i++)
	{
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			a++;
		}
		else {
			b++;
		}
	}
	cout << endl << "Количество положительных элементов = " << a;
	cout << endl << "Количество отрицательных элементов = " << b;
	cout << endl;
	delete[] arr;
	system("pause");
	return 0;
}*/

//Задание 10

/*int main() {
	const int n = 10;
	srand(time(NULL));
	int Digit = rand() % 100;
	int Arr[n];
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
		cout << Arr[i] << ' ';
		if (Arr[i] > Digit) counter++;
	}
	cout << endl;
	cout << "Zadannoe chislo: " << Digit;
	cout << endl;
	cout << "Kolichestvo chisel, bolshe zadannogo: " << counter;
}*/

//Задание 14 а
/*
int main() {
	setlocale(LC_ALL, "Russian");
	int a = 0;
	int b = 0;
	int i, size;
	srand((unsigned)time(NULL));
	int* arr;
	cout << "Введите розмер массива: ";
	cin >> size;
	arr = new int[size];
	cout << "Массив: ";
	for (i = 0; i < size; i++)
	{
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		if (i % 2 == 1) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}*/


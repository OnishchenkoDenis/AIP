#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <clocale>

using namespace std;

//Задача 1e

/*
int main()
{
	setlocale(LC_ALL, "rus");
	int mas[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		mas[i] = rand() % 41 - 25;
	}
	cout << endl << "Массив c числами oт -25 до 15: ";
	for (int i = 0; i < 10; i++)
	{
		cout << mas[i] << "  ";
	}
	cout << endl;
	return 0;
}*/

//Задача 2a,2b,2c

/*void selectionSort(float data[], int len);
void insertionSort(float data[], int len);
void bubbleSort(float data[], int len);
void s100();
void s1k();
void s5k();
void s10k();
void s50k();
long int counterB = 0;
long int counterS = 0;
long int counterI = 0;
fstream f;

int main() {

	f.open("Zadacha2_a_b_c.txt", ios::out | ios::trunc);
	cout << "Sorting has started!" << endl << endl;
	srand(5589004543543466);
	s100();
	s1k();
	s5k();
	s10k();
	s50k();
	return 0;
	f.close();
}

void selectionSort(float data[], int len) {
	int j = 0;
	float tmp = 0;
	for (int i = 0; i < len; i++) {
		j = i;
		for (int k = i; k < len; k++) {
			if (data[j] > data[k]) {
				j = k;
				counterS++;
			}
		}
		tmp = data[i];
		data[i] = data[j];
		data[j] = tmp;
		counterS++;
	}
}

void insertionSort(float data[], int len) {
	float key = 0;
	int j = 0;
	for (int i = 1; i < len; i++) {
		key = data[i];
		j = i - 1;
		counterI++;
		while (j >= 0 && data[j] > key) {
			data[j + 1] = data[j];
			j = j - 1;

			data[j + 1] = key;
			counterI++;
		}
	}
}

void bubbleSort(float data[], int len) {
	float tmp = 0;
	for (int i = 0; i < len; i++) {
		for (int j = len - 1; j >= i + 1; j--) {
			if (data[j] < data[j - 1]) {
				tmp = data[j];
				data[j] = data[j - 1];
				data[j - 1] = tmp;
				counterB++;
			}
		}
	}
}

void s100()
{
	const int n = 100;
	float data[n];

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	insertionSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}
	bubbleSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	selectionSort(data, n);
	cout << "------------------------" << endl;
	cout << "100 elements" << endl;
	cout << "Selection Sort \t" << counterS << endl;
	cout << "Bubble Sort \t" << counterB << endl;
	cout << "Insertion Sort \t" << counterI << endl;
	cout << "------------------------" << endl << endl;

	f << "------------------------" << endl;
	f << "100 elements" << endl;
	f << "Selection Sort \t" << counterS << endl;
	f << "Bubble Sort \t" << counterB << endl;
	f << "Insertion Sort \t" << counterI << endl;
	f << "------------------------" << endl << endl;

	counterS = 0;
	counterB = 0;
	counterI = 0;

}

void s1k()
{
	const int n = 1000;
	float data[n];

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	insertionSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}
	bubbleSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	selectionSort(data, n);

	cout << "------------------------" << endl;
	cout << "1000 elements" << endl;
	cout << "Selection Sort \t" << counterS << endl;
	cout << "Bubble Sort \t" << counterB << endl;
	cout << "Insertion Sort \t" << counterI << endl;
	cout << "------------------------" << endl << endl;

	f << "------------------------" << endl;
	f << "100 elements" << endl;
	f << "Selection Sort \t" << counterS << endl;
	f << "Bubble Sort \t" << counterB << endl;
	f << "Insertion Sort \t" << counterI << endl;
	f << "------------------------" << endl << endl;

	counterS = 0;
	counterB = 0;
	counterI = 0;
}

void s5k() {
	const int n = 5000;
	float data[n];

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	insertionSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}
	bubbleSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	selectionSort(data, n);

	cout << "------------------------" << endl;
	cout << "5000 elements" << endl;
	cout << "Selection Sort \t" << counterS << endl;
	cout << "Bubble Sort \t" << counterB << endl;
	cout << "Insertion Sort \t" << counterI << endl;
	cout << "------------------------" << endl << endl;

	f << "------------------------" << endl;
	f << "100 elements" << endl;
	f << "Selection Sort \t" << counterS << endl;
	f << "Bubble Sort \t" << counterB << endl;
	f << "Insertion Sort \t" << counterI << endl;
	f << "------------------------" << endl << endl;



	counterS = 0;
	counterB = 0;
	counterI = 0;
}

void s10k() {
	const int n = 10000;
	float data[n];

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	insertionSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}
	bubbleSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	selectionSort(data, n);
	cout << "------------------------" << endl;
	cout << "10000 elements" << endl;
	cout << "Selection Sort \t" << counterS << endl;
	cout << "Bubble Sort \t" << counterB << endl;
	cout << "Insertion Sort \t" << counterI << endl;
	cout << "------------------------" << endl << endl;

	f << "------------------------" << endl;
	f << "100 elements" << endl;
	f << "Selection Sort \t" << counterS << endl;
	f << "Bubble Sort \t" << counterB << endl;
	f << "Insertion Sort \t" << counterI << endl;
	f << "------------------------" << endl << endl;

	counterS = 0;
	counterB = 0;
	counterI = 0;
}

void s50k() {
	const int n = 50000;
	float  data[n];

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	insertionSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}
	bubbleSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	selectionSort(data, n);

	f << "------------------------" << endl;
	f << "100 elements" << endl;
	f << "Selection Sort \t" << counterS << endl;
	f << "Bubble Sort \t" << counterB << endl;
	f << "Insertion Sort \t" << counterI << endl;
	f << "------------------------" << endl << endl;

	cout << "------------------------" << endl;
	cout << "50000 elements" << endl;
	cout << "Selection Sort \t" << counterS << endl;
	cout << "Bubble Sort \t" << counterB << endl;
	cout << "Insertion Sort \t" << counterI << endl;
	cout << "------------------------" << endl << endl;

	counterS = 0;
	counterB = 0;
	counterI = 0;
}*/

//Задача 3e,5

/*struct pc {
	string username;
	int FreeMemory;
	float flops;
};
void randString(string& str) {
	static const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	str = "     ";
	for (int i = 0; i < str.length(); i++) {
		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];
	}
	str[str.length()] = 0;
}
void showpc(const pc p) {
	cout << "\t" << p.username << "\t\t\t"
		<< p.FreeMemory << "\t\t"
		<< "   " << p.flops << endl;
}
void showpcF(const pc p) {
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << "\t" << p.username << "\t\t\t"
		<< p.FreeMemory << "\t\t"
		<< "   " << p.flops << endl;
	f.close();
}
void bubbleSortflops(pc Mas[], int Size) {
	int j = 0;
	pc tmp;
	// идём по массиву
	for (int i = 0; i < Size; i++) {
		// делаем проверки в оставшейся части массива
		for (int j = Size - 1; j >= i + 1; j--) {
			if (Mas[j].flops > Mas[i].flops) {  // сравниваем соседние элементы
				// делаем перестановку
				tmp = Mas[i];
				Mas[i] = Mas[j];
				Mas[j] = tmp;
			}
		}
	}
}
void bubbleSortFreeMemory(pc Mas[], int Size) {
	int j = 0;
	pc tmp;
	// идём по массиву
	for (int i = 0; i < Size; i++) {
		// делаем проверки в оставшейся части массива
		for (int j = Size - 1; j >= i + 1; j--) {
			if (Mas[j].FreeMemory > Mas[i].FreeMemory) {  // сравниваем соседние элементы
				// делаем перестановку
				tmp = Mas[i];
				Mas[i] = Mas[j];
				Mas[j] = tmp;
			}
		}
	}
}
void Cout(pc pc[], int Size) {
	cout << endl << "                        Sorted Flops" << endl << endl;
	cout << "       Username\t" <<"            Free Memory\t" <<"          Flops\n";
	bubbleSortflops(pc, Size);
	for (int i = 0; i < Size; i++)
		showpc(pc[i]);
	cout << endl << "                        Sorted Free Memory" << endl << endl;
	cout << "       Username\t" << "            Free Memory\t" << "          Flops\n";
	bubbleSortFreeMemory(pc, Size);
	for (int i = 0; i < Size; i++)
		showpc(pc[i]);
}
void file(pc pc[], int Size, const int l) {
	ofstream f;
	f.open("data.txt");
	for (int i = 0; i < l; i++) {
		f << endl << "                        Sorted Flops" << endl << endl;
		f << "       Username\t" << "            Free Memory\t" << "          Flops\n";
		bubbleSortflops(pc, Size);
		for (int i = 0; i < Size; i++)
			showpcF(pc[i]);
		f << endl << "                 Sorted Free Memory" << endl << endl;
		f << "       Username\t" << "            Free Memory\t" << "          Flops\n";
		bubbleSortFreeMemory(pc, Size);
		for (int i = 0; i < Size; i++)
			showpcF(pc[i]);
	}
	f.close();
}
void write2File(const pc p[], const int l) {
	ofstream f;
	f.open("data.txt");
	for (int i = 0; i < l; i++)
		f << p[i].username << "\t"
		<< p[i].FreeMemory << "\t"
		<< p[i].flops << endl;
	f.close();
}
int main() {
	int const Size = 15;
	pc pc[Size];
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << "       Username\t" << "            Free Memory\t" << "          Flops\n";
	for (int i = 0; i < Size; i++)
	{
		pc[i].FreeMemory = 80 + rand() % 150;
		pc[i].flops = 725 + rand() % 250;
		randString(pc[i].username);
		showpcF(pc[i]);
	}
	cout << "       Username\t" << "            Free Memory\t" << "          Flops\n";
	for (int i = 0; i < Size; i++)
	{
		pc[i].FreeMemory = 80 + rand() % 150;
		pc[i].flops = 725 + rand() % 250;
		randString(pc[i].username);
		showpc(pc[i]);
	}
	Cout(pc, Size);
	file(pc, Size, 1);
	write2File(pc, Size);
	return 0;
}*/

//Задача 3h,4

/*struct Shoes {

	string brand;
	int quality;
	float cost;
};

void randString(string& str) {
	static const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	str = "     ";


	for (int i = 0; i < str.length(); i++) {
		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];
	}
	str[str.length()] = 0;
}

void showflowers(const Shoes p) {
	cout << "\t" << p.brand << "\t\t\t"
		<< p.quality << "\t\t"
		<< "   " << p.cost << endl;
}

void showflowersF(const Shoes p) {
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << "\t" << p.brand << "\t\t\t"
		<< p.quality << "\t\t"
		<< "   " << p.cost << endl;
	f.close();

}


void bubbleSortcost(Shoes shoe[], int Size) {
	int j = 0;
	Shoes tmp;
	// идём по массиву
	for (int i = 0; i < Size; i++) {
		// делаем проверки в оставшейся части массива
		for (int j = Size - 1; j >= i + 1; j--) {
			if (shoe[j].cost > shoe[i].cost) {  // сравниваем соседние элементы
				// делаем перестановку
				tmp = shoe[i];
				shoe[i] = shoe[j];
				shoe[j] = tmp;
			}
		}
	}
}

void bubbleSortrarity(Shoes shoe[], int Size) {
	int j = 0;
	Shoes tmp;
	// идём по массиву
	for (int i = 0; i < Size; i++) {
		// делаем проверки в оставшейся части массива
		for (int j = Size - 1; j >= i + 1; j--) {
			if (shoe[j].quality > shoe[i].quality) {  // сравниваем соседние элементы
				// делаем перестановку
				tmp = shoe[i];
				shoe[i] = shoe[j];
				shoe[j] = tmp;
			}
		}
	}
}


void Cout(Shoes shoe[], int Size) {

	cout << endl << "                        Sorted Cost" << endl << endl;
	cout << "       Brand\t" << "            Quality\t" << "          Cost\n";
	bubbleSortcost(shoe, Size);

	for (int i = 0; i < Size; i++)
		if (shoe[i].quality > 5)
			showflowers(shoe[i]);

	cout << endl << "                        Sorted Quality" << endl << endl;
	cout << "       Brand\t" << "            Quality\t" << "          Cost\n";
	bubbleSortrarity(shoe, Size);

	for (int i = 0; i < Size; i++)
		if (shoe[i].cost > 300)
			showflowers(shoe[i]);
}

void file(Shoes shoe[], int Size, const int l) {

	ofstream f;
	f.open("data.txt");
	for (int i = 0; i < l; i++) {
		f << endl << "                        Sorted Cost" << endl << endl;
		f << "       Brand\t" << "            Quality\t" << "          Cost\n";
		bubbleSortcost(shoe, Size);

		for (int i = 0; i < Size; i++)
			if (shoe[i].cost > 300)
				showflowersF(shoe[i]);

		f << endl << "                 Sorted Quality" << endl << endl;
		f << "       Brand\t" << "            Quality\t" << "          Cost\n";
		bubbleSortrarity(shoe, Size);

		for (int i = 0; i < Size; i++)
			if (shoe[i].quality > 5)
				showflowersF(shoe[i]);
	}
	f.close();
}

void write2File(const Shoes p[], const int l) {
	ofstream f;
	f.open("data.txt");


	for (int i = 0; i < l; i++)
		f << p[i].brand << "\t"
		<< p[i].quality << "\t"
		<< p[i].cost << endl;
	f.close();
}

int main() {
	int const Size = 15;
	Shoes shoes[Size];
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << "       Brand\t" << "            Quality\t" << "          Cost\n";
	for (int i = 0; i < Size; i++)
	{
		shoes[i].quality = 1 + rand() % 10;
		shoes[i].cost = 50 + rand() % 850;
		randString(shoes[i].brand);

		showflowersF(shoes[i]);


	}

	cout << "       Brand\t" << "            Quality\t" << "          Cost\n";
	for (int i = 0; i < Size; i++)
	{
		shoes[i].quality = 1 + rand() % 10;
		shoes[i].cost = 50 + rand() % 850;
		randString(shoes[i].brand);

		showflowers(shoes[i]);


	}


	Cout(shoes, Size);
	file(shoes, Size, 1);
	write2File(shoes, Size);

	return 0;
}*/
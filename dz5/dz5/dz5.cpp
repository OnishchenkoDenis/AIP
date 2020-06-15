#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;
const int string_len = 3;

#pragma warning(disable : 4996)

/*std::string arrhp[10] = { "Black","Yellow", "Red", "White", "Green", "Pink", "Blue", "Purple", "Gray" };

struct engine
{
	string name;
	string hp;

};

struct car
{
	string name;
	int color;
	engine engine;
};

void randString(string& str, const int len) {
	static const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	// очищаем и заносим данные
	str.clear();
	str.append(len, ' ');

	for (int i = 0; i < str.length(); i++) {
		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];
	}
	str[str.length()] = 0;  // последний символ сообщает о том, что строка закончилась
}

void showengines(const car l) {
	cout << l.name << "\t"
		<< l.color << "\t\t"
		<< l.engine.name << "\t\t"
		<< l.engine.hp << endl;

}

void showcar(const car engine[], const int len) {
	cout << "name \t"
		<< "enginehp \t"
		<< "engineName\t"
		<< "color " << endl;

	for (int i = 0; i < len; i++) {
		showengines(engine[i]);
	}

	cout << endl;
}

void initcar(car engines[], const int len) {
	for (int i = 0; i < len; i++) {
		// car
		randString(engines[i].engine.name, string_len);
		engines[i].engine.hp = arrhp[rand() % 9];

		// engine
		randString(engines[i].name, string_len);
		engines[i].color = rand() % 50;
	}
}

void writeTextFile(const car engines[], const int l) {
	ofstream f;

	f.open("homeworkAIP5.txt");
	for (int i = 0; i < l; i++)  // Все атрибуты struct  в одной строке
		f << engines[i].name << " "
		<< engines[i].color << "  "
		<< engines[i].engine.name << "  "
		<< engines[i].engine.hp << endl;
	f.close();
}

void writeBinFile(car lib[], const int l) {
	// in-function WRITE code
	fstream f;
	f.open("homeworkAIP5.txt", ios::out | ios::binary);
	f.write((char*)lib, sizeof(car) * l);
	f.close();
}

void openBinFile(car lib[], const int l) {
	fstream f;
	f.open("homeworkAIP5.txt", ios::in | ios::binary);
	f.read((char*)lib, sizeof(car) * l);
	f.close();
}


void openTextFile(car engines[], const int l) {
	ifstream f;

	f.open("homeworkAIP5.txt");
	for (int i = 0; i < l; i++)
		f >> engines[i].name
		>> engines[i].color
		>> engines[i].engine.name
		>> engines[i].engine.hp;
	f.close();
}

int main()
{
	//Задание 1
	//Объявить сущности 1 и 2. Описать их свойства. Включить одну сущность в другую. Объявить массив сущностей 1. 
	//Заполнить атрибуты числовыми и текстовыми значениями (диапазон значений определить самостоятельно). 
	//библиотека и книга 
	//Задание 2 
	//Реализовать чтение и запись данных в текстовый файл 
	const int len = 20;
	const int Showmassive = 5;
	car arrengines[len];

	cout << "First massive car:\n";
	initcar(arrengines, len);
	writeTextFile(arrengines, len);
	writeBinFile(arrengines, len);
	showcar(arrengines, Showmassive);

	cout << "New massive car:\n";
	initcar(arrengines, len);
	showcar(arrengines, Showmassive);

	cout << "Read massive car txt:\n";
	openTextFile(arrengines, len);
	showcar(arrengines, Showmassive);

	cout << "Read massive car bin:\n";
	openBinFile(arrengines, len);
	showcar(arrengines, Showmassive);


	std::getchar();
	std::getchar();
	return 0;
}*/

/*void readMp3Header(const string fname) {
	ifstream f;

	f.open(fname);
	if (!f.is_open()) {
		cout << "Error open: " << fname << ". (" << strerror(errno) << ")." << endl;
		f.close();
		return;
	}

	unsigned char b2[2];
	unsigned char b3;
	unsigned char b4;

	cout << "----------------- Read First MP3 Header in file without ID3v2----------------- \n";
	f.read((char*)b2, sizeof(b2));
	f.read((char*)&b3, sizeof(char));
	f.read((char*)&b4, sizeof(char));
	f.close();

	cout << fname << endl << "Signature: " << hex << showbase << endl
		<< (int)b2[0] << endl
		<< (int)b2[1] << endl
		<< (int)b3 << endl
		<< (int)b4 << endl;

	cout << endl;
}*/

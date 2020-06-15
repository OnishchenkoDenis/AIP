#include <iostream>
#include <stdio.h>
#include <string.h>
#include <clocale>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <Windows.h>


using namespace std;

//Задача13 Составить алгоритм, исключающий все слова “плохо” из текста.
/*int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	ifstream is("Text.txt");
	ifstream f("Text.txt");
	int a = 0;
	int count = 0;
	char word[80], str[80], * p = str;
	char text[800] = "";

	while (f.getline(str, 80))
	{
		cout << str << "\n";

	}


	cout << "Введите слово для исключения: ";
	cin >> word;
	int len = strlen(word);

	while (is.getline(str, 80))
	{
		while ((p = strstr(str, word)) != NULL)
		{
			strcpy_s(p, strlen(p), p + len + 1);
			count++;
		}
		strcat_s(text, str);
		strcat_s(text, "\n");
	}
	is.close();

	string File;
	cout << "Введите имя файла, в который необходимо продублировать выводимую информацию: ";
	cin >> File;
	ofstream os(File);

	cout << "Количество вырезанных из текста слов "" << word << "" = " << count << endl;
	os << "Количество вырезанных из текста слов "" << word << "" = " << count << endl;
	cout << "Полученный текст:\n" << text;
	os << "Полученный текст:\n" << text;
	os.close();

	_getch();
}*/

//Задача 9 По введенному номеру дня недели вывести его название, используя оператор множественного выбора.
/*int main() {
	int day;
	std::cout << "Enter day (1..7): ";
	std::cin >> day;

	while (day < 1 || day > 7) {
		std::cout << "Invalid Day." << std::endl;

		std::cout << "Enter day (1..7): ";
		std::cin >> day;
	}

	const char* day_of_week[] = { "Monday",  "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

	std::cout << day_of_week[day - 1] << std::endl;

	return 0;
}*/

//Задача7 Составить алгоритм, находящий самое длинное слово.
/*int main() {
	std::string str;

	while (std::cout << "String: " && std::getline(std::cin, str) && !str.empty()) {
		std::istringstream ist(str);
		std::string longest;

		ist >> longest;
		while (ist >> str)
			if (str.length() > longest.length())
				longest = str;

		std::cout << "Longest word: " << longest << std::endl;
	}

	return 0;
}*/

//Задача 4 Составить алгоритм, исключающий из текста “лишние” пробелы. 
/*int main()
{
	fstream f;
	f.open("zdn4.txt", ios::out | ios::trunc);

	string str("esgegegeg  zerg   zerg");
	int k = 0;
	cout << str << endl;
	f << str << endl;

	while (k != str.size())
	{
		if (str[k] == ' ' && str[k + 1] == ' ')
			str.erase(k, 1);
		else k++;
	}
	cout << str << endl;
	f << str << endl;
	f.close();
	system("pause");
}*/

//Задача 17 Дан массив строк. Упорядочить массив по длине строк.
/*void main()
{

	string WORDS[] =
	{
		"HKkootl",
		"kfkfokseesf",
		"fsefs",
		"gkhdrklgpuodpm",
		"sxvxsvvxsv",
		"jsj"
	};

	int amout = sizeof(WORDS) / sizeof(WORDS[0]);
	int* mas = new int[amout];

	cout << "Original massiv" << endl;


	for (int i = 0; i < amout; i++)
	{
		cout << WORDS[i] << endl;

	}
	cout << "\n";

	for (int i = 0; i < amout; i++)
	{
		bool flag = true;
		for (int j = 0; j < amout - (i - 1); j++)
		{
			if (WORDS[j].length() > WORDS[j + 1].length())
			{
				flag = false;
				swap(WORDS[j], WORDS[j + 1]);
			}
		}
		if (flag)
		{
			break;
		}
	}

	cout << "Sort massiv" << endl;

	for (int i = 0; i < amout; i++)
	{
		cout << WORDS[i] << endl;
	}



}*/

//Задача 22 Исключить из строки группы символов, расположенные между символами «/*», «*/» включая границы . Предполагается, что нет вложенных скобок.
/*void main()
{
	fstream f;
	f.open("zdn22.txt", ios::out | ios::trunc);
	//string s1 = "GerhhrehHH/*kerhhrhehg*)/gorehrhrr";

	int lonng = s1.length();
	char zvezd = '*';
	char slash = '/';


	for (int i = 0; i < lonng; i++)
	{

		if (slash == s1[i] && zvezd == s1[i + 1])
		{
			break;
		}
		else
		{
			cout << s1[i];
			f << s1[i];
		}


	}

	for (int i = 0; i < lonng; i++)
	{

		if (slash == s1[i + 1] && zvezd == s1[i]) {

			int t = i + 2;

			for (; t < lonng; t++)
			{
				cout << s1[t];
				f << s1[t];
			}

		}

	}

	f.close();

}*/

//Задача 25 Дан email в строке. Определить, является ли он корректным
/*int main()
{
	char n;
	setlocale(LC_ALL, "Rus");
	char str[40];
	std::cout << "Введите Email\n";
	std::cin >> str;
	{
		bool valid = true;
		int all_presents = 0;
		std::string suitable_symbols = "-_.@"; // допустимые символы помимо латинских букв и цифр
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (!isalpha(str[i]) && !isdigit(str[i]) && suitable_symbols.find(str[i]) == std::string::npos) { // наличие недопустимого символа
				valid = false; break;
			}
			if (i > 0 && str[i] == '.' && str[i - 1] == '.') { valid = false; break; } // две точки подряд
			else if (i > 0 && str[i] == '@' && !all_presents) { all_presents = 1; } // наличие @
			else if (str[i] == '@' && all_presents) { valid = false; break; } // наличие двух @ в строчке
			else if ((isalpha(str[i]) || isdigit(str[i])) && all_presents == 1) { all_presents = 2; } // наличие буквы или цифры после @
			else if (str[i] == '.' && all_presents == 2) { all_presents = 3; } // наличие точки после символа( который после @ )
			else if (isalpha(str[i]) && all_presents == 3 && str[i + 2] == '\0') { all_presents = 4; } // наличие буквы в конце строчки
		}
		if (valid && all_presents == 4) { std::cout << "Ваш email допустим."; }
		else { std::cout << "Email введён неправильно!\n"; }
	}
}*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <locale> 
#include <time.h>
#include <cstring>
#include <fstream>
#include <iostream>
#include <chrono>
#include <ctime>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <thread>
#include "lib_vector.h"//подключенная статическая библиотека
using namespace std;

void ParalPtk()//задание параллельного потока
{
    //вывод данных: кто выполнил, дата и время
    cout << "Выполнила: Комарова ИА, 503 гр" << endl;
    vec();//функция из статической библиотеки   
}

int main(int argc, const char* argv[])
{
    setlocale(LC_ALL, "Russian");//подключение русского языка
    
    cout << "Before:" << endl;//вывод цифр из текста
    string line;//объявление строковой переменной
    ifstream in("numbers.txt"); //открытие файла с цифрами
    getline(in, line);//построчное чтение
    cout << line << endl;//вывод строки в консоль
    cout << endl;

    cout << "Replace:" << endl; //STL replace, замена цифры символом
    string s1 = line.substr(0, 10);//выделение подстроки строки
    string repl1 = s1.replace(5, 1, "#");//замена цифры символом
    cout << repl1 << endl;//вывод результата в консоль

    string s2 = line.substr(10, 10);
    string repl2 = s2.replace(7, 1, "#");
    cout << repl2 << endl;

    string s3 = line.substr(20, 10);
    string repl3 = s3.replace(2, 1, "#");
    cout << repl3 << endl;

    string s4 = line.substr(30, 10);
    string repl4 = s4.replace(8, 1, "#");
    cout << repl4 << endl;

    string s5 = line.substr(40, 10);
    string repl5 = s5.replace(5, 1, "#");
    cout << repl5 << endl;

    string s6 = line.substr(50, 10);
    string repl6 = s6.replace(7, 1, "#");
    cout << repl6 << endl;

    string s7 = line.substr(60, 10);
    string repl7 = s7.replace(3, 1, "#");
    cout << repl7 << endl;

    string s8 = line.substr(70, 10);
    string repl8 = s8.replace(8, 1, "#");
    cout << repl8 << endl;

    string s9 = line.substr(80, 10);
    string repl9 = s9.replace(3, 1, "#");
    cout << repl9 << endl;

    string s10 = line.substr(90, 10);
    string repl10 = s10.replace(2, 1, "#");
    cout << repl10 << endl;
    cout << endl;

    vector<string>v{ repl1, repl2, repl3, repl4, repl5, repl6, repl7, repl8, repl9, repl10 };//вектор со строками из цифр
    
    cout << "Sort:" << endl;//сортировка строк по возрастанию
    sort(v.begin(), v.end());
    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;

    ParalPtk();//запуск параллельного процесса

    system("pause");
    return 0;
}
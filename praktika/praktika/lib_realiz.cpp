#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include "lib_vector.h"//заголовочный файл
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int vec ()
{
    time_t now;
    struct tm nowLocal;
    now = time(NULL);
    nowLocal = *localtime(&now);
    cout << "Дата: " << nowLocal.tm_mday << "." << nowLocal.tm_mon + 1 << "." << nowLocal.tm_year + 1900 << "." << endl;//вывод даты
    cout << "Время: " << nowLocal.tm_hour << "ч. " << nowLocal.tm_min << "мин. " << nowLocal.tm_sec << "сек. " << endl;//вывод текущего времени
    cin.get();
    
    return 0;
}
#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include "lib_vector.h"//������������ ����
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
    cout << "����: " << nowLocal.tm_mday << "." << nowLocal.tm_mon + 1 << "." << nowLocal.tm_year + 1900 << "." << endl;//����� ����
    cout << "�����: " << nowLocal.tm_hour << "�. " << nowLocal.tm_min << "���. " << nowLocal.tm_sec << "���. " << endl;//����� �������� �������
    cin.get();
    
    return 0;
}
#include "MyString.h"
#include <iostream>

MyString :: MyString() // конструктор без параметров
{
    std::cout << "<<Конструктор без параметров>>";
}

MyString :: MyString(const char* str)//конструктор с параметрами
{
    std::cout << "<<Конструктор с параметрами>>\n";
    str1 = new char[strlen(str) + 1];
    strcpy_s(str1, length, str);
}
MyString :: ~MyString() {
    std::cout << "Удаляем обьект данного класса:)))\n";
    delete[]str1;
    delete[]str2;
}

void MyString :: set() {
    std::cin.getline(str1, length + 1);
}
void MyString::print()  {
    std::cout << str1;
}
void MyString::update() {
    switch (length % 3)
    {
    case 0:
        //удаляем символ посередине
        size_t mid = length / 2;
        std::swap(str1[mid], str1[length - 1]);
        break;
    case 1:
        //удаляем два первых и два последних символа
        str1[length - 4] = '\0';
        break;
    default:
        //удаляем цифры которые делятся на два
        for (size_t i = 0; i < length; ++i) {
            if ((str1[i] - '0') % 2 == 0 && isdigit(str1[i])) {
                str1[i] = ' ';
            }
        }
        str1[length] = '\0'; // Заменяем удаленный символ пробелом
        break;
    }


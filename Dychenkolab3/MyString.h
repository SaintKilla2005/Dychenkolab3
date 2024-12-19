#include<iostream>
class MyString
{
public:
    MyString();//конструктор без параметров
    MyString(const char* str);//конструктор с параметрами
    ~MyString();
	void set();
	void update();
	void print();
private:
    char* str1;
    char* str2;
    size_t length;

 
};


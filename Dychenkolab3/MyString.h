#include<iostream>
class MyString
{
public:
    MyString();//����������� ��� ����������
    MyString(const char* str);//����������� � �����������
    ~MyString();
	void set();
	void update();
	void print();
private:
    char* str1;
    char* str2;
    size_t length;

 
};


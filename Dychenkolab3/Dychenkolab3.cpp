#include<iostream>
#include"MyString.h"
int main()
{
	MyString s1, s2("Hello world");
	s1.set();
	s1.print();
	s2.update();
	s2.print();
}


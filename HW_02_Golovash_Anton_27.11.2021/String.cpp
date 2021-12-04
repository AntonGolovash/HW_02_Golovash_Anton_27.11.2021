#include "String.h"
#include <string>
#include <iostream>
using namespace std;

String::String()// конструктор создания по умолчанию
{
	str = nullptr;
}

String::String(const char* str)// конструктор создания с параметрами
{
	int length = strlen(str);
	this->str = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->str[i] = str[i];
	}
	this->str[length] = '\0';
}

String::String(const String& other)// конструктор копирования
{
	if (this->str != nullptr)
	{
		delete[] this->str;
	}

	int length = strlen(other.str);
	this->str = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->str[i] = other.str[i];
	}
	this->str[length] = '\0';
}

String::~String()// деструктор
{
	delete[] this->str;
}


int String::Length()
{
	return strlen(this->str);
}

char String::StartWith()
{
	return str[0];
}

char String::EndsWith()
{
	return str[strlen(this->str) - 1];
}

bool String::Equal(const char* str)
{
	int counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] != this->str[counter])
		{
			return false;
		}
		counter++;
	}
	return true;
}

char* String::GetStr()
{
	return str;
}

void String::SetStr(const char* str)
{
	if (this->str != nullptr)
	{
		delete[] this->str;
	}

	int lengthOfNewString = 0;

	while (str[lengthOfNewString] != '\0')
	{
		lengthOfNewString++;
	}

	this->str = new char[lengthOfNewString + 1];

	for (int i = 0; i < lengthOfNewString; i++)
	{
		this->str[i] = str[i];
	}
	this->str[lengthOfNewString] = '\0';
}


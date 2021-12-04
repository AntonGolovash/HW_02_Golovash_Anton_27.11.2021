#pragma once
#include <string>
#include <iostream>
using namespace std;

class String
{
public:
	String();
	String(const char* str);
	String(const String& other);
	~String();
	int Length();
	char StartWith();
	char EndsWith();
	bool Equal(const char* str);
	char* GetStr();
	void SetStr(const char* str);
private:
	char* str;
};


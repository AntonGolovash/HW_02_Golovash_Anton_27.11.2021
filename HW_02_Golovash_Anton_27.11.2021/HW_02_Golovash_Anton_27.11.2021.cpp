#include "String.h"
#include "Figure.h"
#include <sstream>
using namespace std;

int main()
{
	String str_1("Hello");
	String str_2("World");
	char* str_3 = new char[] { "Hello" };
	cout << "Length of string - " << str_1.Length() << endl;
	cout << "First char of the string - " << str_1.StartWith() << endl;
	cout << "Last char of the string - " << str_1.EndsWith() << endl;
	(str_1.Equal(str_3)) ? cout << "Strings are equal" << endl : cout << "Strings are NOT equal" << endl;
	cout << str_1.GetStr() << endl;
	str_1.SetStr("Hello the whole world");
	cout << str_1.GetStr() << endl;

	Figure::Square quadrate(10);
	Figure::Triangle triangle(15, 15);
	quadrate.ToString();
	triangle.ToString();

	return 0;
}
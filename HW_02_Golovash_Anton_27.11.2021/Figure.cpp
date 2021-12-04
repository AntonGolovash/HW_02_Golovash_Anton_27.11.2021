#include "Figure.h"

Figure::Figure()
{
}

Figure::Square::Square(int side)
{
	this->side = side;
}

void Figure::Square::ToString()
{
	cout << PrintSquare() << endl;
}

string Figure::Square::PrintSquare()
{
	stringstream ss;
	ss << "Side of a scuare: \t" << to_string(this->side) << "\n";
	return ss.str();
}

Figure::Triangle::Triangle(int width, int height)
{
	this->width = width;
	this->height = height;
}

void Figure::Triangle::ToString()
{
	cout << PrintTriangle() << endl;
}

string Figure::Triangle::PrintTriangle()
{
	stringstream ss;
	ss << "Width of a triangle : \t" << to_string(this->width) << "\n"
		<< "Height of a triangle : \t" << to_string(this->height);
	return ss.str();
}

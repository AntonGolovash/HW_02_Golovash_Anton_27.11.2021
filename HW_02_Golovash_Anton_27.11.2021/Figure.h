#pragma once
#include <sstream>
#include <iostream>
using namespace std;

class Figure
{
public:
	Figure();
	class Square
	{
	public:
		Square(int side);
		void ToString();
	private:
		int side;
		string PrintSquare();
	};

	class Triangle
	{
	public:

		Triangle(int width, int height);
		void ToString();
	private:
		int width;
		int height;
		string PrintTriangle();
	};

	class CalcFigure
	{
	public:

	private:
		Figure* Square;
		Figure* Triangle;

	};

private:

};


#pragma once
#include <math.h>

class Vector2D
{

public:

	Vector2D(int x = 0, int y = 0);
	~Vector2D();

	Vector2D Add(const Vector2D& rhs);
	Vector2D Subtract(const Vector2D& rhs);

	Vector2D Scale(const Vector2D& rhs);
	Vector2D Scale(int second);

	int Distance(const Vector2D& rhs);
	int Magnitude();

	Vector2D Divide(int rhs);

	Vector2D Negate();


	int x;
	int y;

};

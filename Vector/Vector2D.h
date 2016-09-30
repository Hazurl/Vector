#pragma once

#include <string>

class Vector2D
{
public:
//:: CONSTRUCTEURS
	Vector2D(Vector2D const& v);
	Vector2D(double x = 0, double y = 0);

//:: DESTRUCTEURS
	~Vector2D();

//:: GETTEURS - ACCESSEURS
	unsigned static int getNumberOfInstance();

	double getX() const;
	double getY() const;
	
	void setX(double x);
	void setY(double y);

//:: METHODES
	std::string toString() const;
	bool isEqual(Vector2D const& v) const;

	double normalize() const;

protected:
	static unsigned int _instance;

	double _x;
	double _y;
	
};


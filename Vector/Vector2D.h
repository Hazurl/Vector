#pragma once

#include <string>

class Vector2D
{
public:
//:: CONSTRUCTEURS
	Vector2D(Vector2D const& v);
	Vector2D(int x = 0, int y = 0);

//:: DESTRUCTEURS
	~Vector2D();

//:: GETTEURS - ACCESSEURS
	unsigned static int getNumberOfInstance();

	int getX() const;
	int getY() const;
	
	void setX(int x);
	void setY(int y);

//:: METHODES
	std::string toString() const;
	bool isEqual(Vector2D const& v) const;

	double normalize() const;

protected:
	static unsigned int _instance;

	int _x;
	int _y;
	
};


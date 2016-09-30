#pragma once
#include "Vector2D.h"
class Vector3D : public Vector2D
{
public:
	//:: CONSTRUCTEURS
	Vector3D(Vector3D const& v);
	Vector3D(int x = 0, int y = 0, int z = 0);

	//:: DESTRUCTEURS
	~Vector3D();

	//:: GETTEURS - ACCESSEURS
	int getZ() const;

	void setZ(int z);

	//:: METHODES
	std::string toString() const;
	bool isEqual(Vector3D const& v) const;

	double normalize() const;

private:
	int _z;

};


#pragma once
#include "Vector2D.h"
class Vector3D : public Vector2D
{
public:
	//:: CONSTRUCTEURS
	Vector3D(Vector3D const& v);
	Vector3D(double x = 0, double y = 0, double z = 0);

	//:: DESTRUCTEURS
	~Vector3D();

	//:: GETTEURS - ACCESSEURS
	double getZ() const;

	void setZ(double z);

	//:: METHODES
	std::string toString() const;
	bool isEqual(Vector3D const& v) const;

	double normalize() const;

private:
	double _z;

};


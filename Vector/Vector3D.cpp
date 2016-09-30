#include "stdafx.h"
#include "Vector3D.h"
#include <cmath>

Vector3D::Vector3D(Vector3D const & v) {
	this->_x = v._x;
	this->_y = v._y;
	this->_z = v._z;
}
Vector3D::Vector3D(double x, double y, double z) {
	this->_x = x;
	this->_y = y;
	this->_z = z;
}
Vector3D::~Vector3D() {
}
double Vector3D::getZ() const {
	return _z;
}
void Vector3D::setZ(double z) {
	this->_z = z;
}
std::string Vector3D::toString() const {
	return std::string("(" + std::to_string(this->_x) + "; " + std::to_string(this->_y) + "; " + std::to_string(this->_z) + ")");
}
bool Vector3D::isEqual(Vector3D const & v) const {
	return (this->_x == v._x && this->_y == v._y && this->_z == v._z);
}
double Vector3D::normalize() const {
	return std::sqrt(_x*_x + _y*_y + _z*_z);
}

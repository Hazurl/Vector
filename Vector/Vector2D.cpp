#include "stdafx.h"
#include "Vector2D.h"
#include <cmath>

Vector2D::Vector2D(Vector2D const& v) {
	_instance++;
	this->_x = v._x;
	this->_y = v._y;
}
Vector2D::Vector2D(int x, int y) {
	_instance++;
	this->_x = x;
	this->_y = y;
}
Vector2D::~Vector2D() {
	_instance--;
}
unsigned int Vector2D::getNumberOfInstance() {
	return _instance;
}
int Vector2D::getX() const {
	return this->_x;
}
int Vector2D::getY() const {
	return this->_y;
}
void Vector2D::setX(int x) {
	this->_x = x;
}
void Vector2D::setY(int y) {
	this->_y = y;
}
std::string Vector2D::toString() const {
	return std::string("(" + std::to_string(this->_x) + "; "+ std::to_string(this->_y) +")");
}
bool Vector2D::isEqual(Vector2D const & v) const {
	return (this->_x == v._x && this->_y == v._y);
}
double Vector2D::normalize() const {
	return std::sqrt((double)_x*_x + _y*_y);
}

//:: STATIC ATTRIBUT
unsigned int Vector2D::_instance = 0;
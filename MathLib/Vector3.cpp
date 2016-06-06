#include "Vector3.h"
#include <math.h>

Vector3::Vector3() {}
Vector3::Vector3(float x, float y, float z)
{
	x = x;
	y = y;
	z = z;
}

Vector3::~Vector3() {}

void Vector3::SetX(float x)
{
	x = x;
}

void Vector3::SetY(float y)
{
	y = y;
}

void Vector3::SetZ(float z)
{
	z = z;
}

void Vector3::Set(float x, float y, float z)
{
	x = x;
	y = y;
	z = z;
}


float Vector3::GetX()
{
	return x;
}

float Vector3::GetY()
{
	return y;
}

float Vector3::GetZ()
{
	return z;
}

float Vector3::Dot(const Vector3& other)
{
	return (x*other.x) + (y*other.y) + (z*other.z);
}

Vector3 Vector3::Cross(const Vector3& other)
{
	Vector3 newVec;
	newVec.x = y * other.z - z * other.y;
	newVec.y = z * other.x - x * other.z;
	newVec.z = x * other.y - y * other.x;
	return newVec;
}

float Vector3::Length()
{
	float length = sqrt((x*x) + (y*y) + (z*z));
	return length;
}

void Vector3::Normalise()
{
	x = x / Length();
	y = y / Length();
	z = z / Length();
}

float Vector3::Magnitude()
{
	return sqrt((x*x) + (y*y) + (z*z));
}

Vector3 Vector3::operator + (const Vector3& other)
{
	Vector3 newVec;
	newVec.x = x + other.x;
	newVec.y = y + other.y;
	newVec.z = z + other.z;
	return newVec;
}

Vector3 Vector3::operator - (const Vector3& other)
{
	Vector3 newVec;
	newVec.x = x - other.x;
	newVec.y = y - other.y;
	newVec.z = z - other.z;
	return newVec;
}

Vector3 Vector3::operator / (const Vector3& other)
{
	Vector3 newVec;
	newVec.x = x / other.x;
	newVec.y = y / other.y;
	newVec.z = z / other.z;
	return newVec;
}

Vector3 Vector3::operator / (const float& other)
{
	Vector3 newVec;
	newVec.x = x / other;
	newVec.y = y / other;
	newVec.z = z / other;
	return newVec;
}

Vector3 Vector3::operator * (const Vector3& other)
{
	Vector3 newVec;
	newVec.x = x * other.x;
	newVec.y = y * other.y;
	newVec.z = z * other.z;
	return newVec;
}

Vector3 Vector3::operator * (const float& other)
{
	Vector3 newVec;
	newVec.x = x * other;
	newVec.y = y * other;
	newVec.z = z * other;
	return newVec;
}

Vector3& Vector3::operator = (const Vector3& other)
{
	x = other.x;
	y = other.y;
	z = other.z;
	return *this;
}

Vector3 operator * (const float& lhs, const Vector3& rhs)
{
	Vector3 newVec;
	newVec.x = lhs * rhs.x;
	newVec.y = lhs * rhs.y;
	newVec.z = lhs * rhs.z;
	return newVec;
}

Vector3& Vector3::operator += (const Vector3& other)
{
	x += other.x;
	y += other.y;
	z += other.z;
	return *this;
}
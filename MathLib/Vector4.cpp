#include "Vector4.h"

Vector4::Vector4() {}
Vector4::Vector4(float x, float y, float z, float w) 
{
	m_x = x;
	m_y = y;
	m_z = z;
	m_w = w;
}
Vector4::~Vector4() {}

void Vector4::SetX(float x)
{
	m_x = x;
}

void Vector4::SetY(float y)
{
	m_y = y;
}

void Vector4::SetZ(float z)
{
	m_z = z;
}

void Vector4::SetW(float w)
{
	m_w = w;
}

void Vector4::Set(float x, float y, float z, float w)
{
	m_x = x;
	m_y = y;
	m_z = z;
	m_w = w;
}


float Vector4::GetX()
{
	return m_x;
}

float Vector4::GetY()
{
	return m_y;
}

float Vector4::GetZ()
{
	return m_z;
}

float Vector4::GetW()
{
	return m_w;
}

float Vector4::Dot(const Vector4& other)
{
	return (m_x*other.m_x) + (m_y*other.m_y) + (m_z*other.m_z) + (m_w*other.m_w);
}

Vector4 Vector4::Cross(const Vector4& other)
{
	Vector4 newVec;
	newVec.m_x = m_y * other.m_z - m_z * other.m_y;
	newVec.m_y = m_z * other.m_x - m_x * other.m_z;
	newVec.m_z = m_x * other.m_y - m_y * other.m_x;
	m_w = 0;
	return newVec;
}

Vector4 Vector4::operator + (const Vector4& other)
{
	Vector4 newVec;
	newVec.m_x = m_x + other.m_x;
	newVec.m_y = m_y + other.m_y;
	newVec.m_z = m_z + other.m_z;
	newVec.m_w = m_w + other.m_w;
	return newVec;
}

Vector4 Vector4::operator - (const Vector4& other)
{
	Vector4 newVec;
	newVec.m_x = m_x - other.m_x;
	newVec.m_y = m_y - other.m_y;
	newVec.m_z = m_z - other.m_z;
	newVec.m_w = m_w - other.m_w;
	return newVec;
}

Vector4 Vector4::operator / (const Vector4& other)
{
	Vector4 newVec;
	newVec.m_x = m_x / other.m_x;
	newVec.m_y = m_y / other.m_y;
	newVec.m_z = m_z / other.m_z;
	newVec.m_w = m_w / other.m_w;
	return newVec;
}

Vector4 Vector4::operator / (const float& other)
{
	Vector4 newVec;
	newVec.m_x = m_x / other;
	newVec.m_y = m_y / other;
	newVec.m_z = m_z / other;
	newVec.m_w = m_w / other;
	return newVec;
}

Vector4 Vector4::operator * (const Vector4& other)
{
	Vector4 newVec;
	newVec.m_x = m_x * other.m_x;
	newVec.m_y = m_y * other.m_y;
	newVec.m_z = m_z * other.m_z;
	newVec.m_w = m_w * other.m_w;
	return newVec;
}

Vector4 Vector4::operator * (const float& other)
{
	Vector4 newVec;
	newVec.m_x = m_x * other;
	newVec.m_y = m_y * other;
	newVec.m_z = m_z * other;
	newVec.m_w = m_w * other;
	return newVec;
}

Vector4& Vector4::operator = (const Vector4& other)
{
	m_x = other.m_x;
	m_y = other.m_y;
	m_z = other.m_z;
	m_w = other.m_w;
	return *this;
}

Vector4 operator * (const float& lhs, const Vector4& rhs)
{
	Vector4 newVec;
	newVec.m_x = lhs * rhs.m_x;
	newVec.m_y = lhs * rhs.m_y;
	newVec.m_z = lhs * rhs.m_z;
	newVec.m_w = lhs * rhs.m_w;
	return newVec;
}

Vector4 operator / (const float& lhs, const Vector4& rhs)
{
	Vector4 newVec;
	newVec.m_x = lhs / rhs.m_x;
	newVec.m_y = lhs / rhs.m_y;
	newVec.m_z = lhs / rhs.m_z;
	newVec.m_w = lhs / rhs.m_w;
	return newVec;
}
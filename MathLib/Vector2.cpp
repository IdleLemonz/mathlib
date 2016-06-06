#include "Vector2.h"

Vector2::Vector2(){}
Vector2::Vector2(float x, float y)
{
	m_x = x;
	m_y = y;
}

Vector2::~Vector2(){}

void Vector2::SetX(float x)
{
	m_x = x;
}

void Vector2::SetY(float y)
{
	m_y = y;
}

void Vector2::Set(float x, float y)
{
	m_x = x;
	m_y = y;
}


float Vector2::GetX()
{
	return m_x;
}

float Vector2::GetY()
{
	return m_y;
}

float Vector2::Dot(const Vector2& other)
{
	return (m_x*other.m_x) + (m_y*other.m_y);
}

Vector2 Vector2::operator + (const Vector2& other)
{
	Vector2 newVec;
	newVec.m_x = m_x + other.m_x;
	newVec.m_y = m_y + other.m_y;
	return newVec;
}

Vector2 Vector2::operator - (const Vector2& other)
{
	Vector2 newVec;
	newVec.m_x = m_x - other.m_x;
	newVec.m_y = m_y - other.m_y;
	return newVec;
}

Vector2 Vector2::operator / (const Vector2& other)
{
	Vector2 newVec;
	newVec.m_x = m_x / other.m_x;
	newVec.m_y = m_y / other.m_y;
	return newVec;
}

Vector2 Vector2::operator / (const float& other)
{
	Vector2 newVec;
	newVec.m_x = m_x / other;
	newVec.m_y = m_y / other;
	return newVec;
}

Vector2 Vector2::operator * (const Vector2& other)
{
	Vector2 newVec;
	newVec.m_x = m_x * other.m_x;
	newVec.m_y = m_y * other.m_y;
	return newVec;
}

Vector2 Vector2::operator * (const float& other)
{
	Vector2 newVec;
	newVec.m_x = m_x * other;
	newVec.m_y = m_y * other;
	return newVec;
}

Vector2& Vector2::operator = (const Vector2& other)
{	
	m_x = other.m_x;
	m_y = other.m_y;
	return *this;
}

Vector2 operator * (const float& lhs, const Vector2& rhs)
{
	Vector2 newVec;
	newVec.m_x = lhs * rhs.m_x;
	newVec.m_y = lhs * rhs.m_y;
	return newVec;
}
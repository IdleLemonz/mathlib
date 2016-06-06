#pragma once
#include "Vector3.h"

class Matrix3
{
public:
	Matrix3();
	~Matrix3();
	//builds and returns a new identity matrix
	static Matrix3 CreateIdentity();
	//builds and returns a new rotation matrix
	static Matrix3 CreateRotation(float a_fRadians);
	//builds and returns a new scale matrix
	static Matrix3 CreateScale(const Vector3& a_Scale);
	//builds and returns a new translation matrix
	static Matrix3 CreateTranslation(const Vector3& a_Translation);
	static Matrix3 CreateTranslation(float x, float y, float z = 1.0f);
	//transposes matrix and returns *this
	Matrix3& Transpose();
	//builds and returns a new matrix that is the transpose of this matrix
	Matrix3 GetTranspose();
	Matrix3 operator +(Matrix3& a_RHS);
	Matrix3 operator -(Matrix3& a_RHS);
	Matrix3 operator *(Matrix3& a_RHS);
	Vector3 operator *(Vector3& a_RHS);
	Matrix3& operator +=(Matrix3& a_RHS);
	Matrix3& operator -=(Matrix3& a_RHS);
	Matrix3& operator *=(Matrix3& a_RHS);
	float m[3][3];
};
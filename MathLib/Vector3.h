#pragma once
class Vector3
{
public:
	Vector3();
	Vector3(float x, float y, float z);
	~Vector3();

	void SetX(float x);
	void SetY(float y);
	void SetZ(float z);
	void Set(float x, float y, float z);
	float GetX();
	float GetY();
	float GetZ();
	float Dot(const Vector3& other);
	Vector3 Cross(const Vector3& other);
	float Length();
	void Normalise();
	float Magnitude();

	Vector3 operator + (const Vector3& other);
	Vector3 operator - (const Vector3& other);
	Vector3 operator / (const Vector3& other);
	Vector3 operator / (const float& other);
	Vector3 operator * (const Vector3& other);
	Vector3 operator * (const float& other);
	Vector3& operator = (const Vector3& other);
	Vector3& operator += (const Vector3& other);

	friend Vector3 operator * (const float& lhs, const Vector3& rhs);

	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
};

Vector3 operator * (const float& lhs, const Vector3& rhs);
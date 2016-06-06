#pragma once
class Vector4
{
public:
	Vector4();
	Vector4(float x, float y, float z, float w);
	~Vector4();

	void SetX(float x);
	void SetY(float y);
	void SetZ(float z);
	void SetW(float w);
	void Set(float x, float y, float z, float w);
	float GetX();
	float GetY();
	float GetZ();
	float GetW();
	float Dot(const Vector4& other);
	Vector4 Cross(const Vector4& other);

	Vector4 operator + (const Vector4& other);
	Vector4 operator - (const Vector4& other);
	Vector4 operator / (const Vector4& other);
	Vector4 operator / (const float& other);
	Vector4 operator * (const Vector4& other);
	Vector4 operator * (const float& other);
	Vector4& operator = (const Vector4& other);

	friend Vector4 operator * (const float& lhs, const Vector4& rhs);
	friend Vector4 operator / (const float& lhs, const Vector4& rhs);

private:
	float m_x = 0.0f;
	float m_y = 0.0f;
	float m_z = 0.0f;
	float m_w = 0.0f;
};

Vector4 operator * (const float& lhs, const Vector4& rhs);
Vector4 operator / (const float& lhs, const Vector4& rhs);
#include <GL/glut.h>

class Vector2
{
public:

	float x, y;

	Vector2(float x_pos = 0.0f, float y_pos = 0.0f)
	{
		x = x_pos;
		y = y_pos;
	}

	Vector2 new_vector2(float x, float)
	{
		return Vector2(x, y);
	}

private:

	Vector2 operator+(const Vector2& v)
	{
		Vector2 new_vector;

		new_vector.x = this->x + v.x;
		new_vector.y = this->y + v.y;

		return new_vector;
	}

	Vector2 operator-(const Vector2& v)
	{
		Vector2 new_vector;

		new_vector.x = this->x - v.x;
		new_vector.y = this->y - v.y;

		return new_vector;
	}

	Vector2 operator*(const Vector2& v)
	{
		Vector2 new_vector;

		new_vector.x = this->x * v.x;
		new_vector.y = this->y * v.y;

		return new_vector;
	}

	Vector2 operator/(const Vector2& v)
	{
		Vector2 new_vector;

		new_vector.x = this->x / v.x;
		new_vector.y = this->y / v.y;

		return new_vector;
	}
};
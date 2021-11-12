#include <GL/glut.h>

class Vector2f
{
	public:

	float x, y;

	Vector2f(float x_pos = 0.0f, float y_pos = 0.0f)
	{
		x = x_pos;
		y = y_pos;
	}

	static Vector2f Builder(float x, float y)
	{
		return Vector2f(x, y);
	}

public:

	Vector2f operator+(const Vector2f& v)
	{
		Vector2f new_vector;

		new_vector.x = this->x + v.x;
		new_vector.y = this->y + v.y;

		return new_vector;
	}

	Vector2f operator-(const Vector2f& v)
	{
		Vector2f new_vector;

		new_vector.x = this->x - v.x;
		new_vector.y = this->y - v.y;

		return new_vector;
	}

	Vector2f operator*(const Vector2f& v)
	{
		Vector2f new_vector;

		new_vector.x = this->x * v.x;
		new_vector.y = this->y * v.y;

		return new_vector;
	}

	Vector2f operator/(const Vector2f& v)
	{
		Vector2f new_vector;

		new_vector.x = this->x / v.x;
		new_vector.y = this->y / v.y;

		return new_vector;
	}
};

class Vector2i
{
	
public:

	int x, y;

	Vector2i(int x_pos = 0, int y_pos = 0)
	{
		x = x_pos;
		y = y_pos;
	}

	static Vector2i Builder(int x, int y)
	{
		return Vector2i(x, y);
	}

private:

	Vector2i operator+(const Vector2i& v)
	{
		Vector2i new_vector;

		new_vector.x = this->x + v.x;
		new_vector.y = this->y + v.y;

		return new_vector;
	}

	Vector2i operator-(const Vector2i& v)
	{
		Vector2i new_vector;

		new_vector.x = this->x - v.x;
		new_vector.y = this->y - v.y;

		return new_vector;
	}

	Vector2i operator*(const Vector2i& v)
	{
		Vector2i new_vector;

		new_vector.x = this->x * v.x;
		new_vector.y = this->y * v.y;

		return new_vector;
	}

	Vector2i operator/(const Vector2i& v)
	{
		Vector2i new_vector;

		new_vector.x = this->x / v.x;
		new_vector.y = this->y / v.y;

		return new_vector;
	}
};
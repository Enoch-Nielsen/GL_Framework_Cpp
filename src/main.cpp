#include <Vector.hpp>
#include <GL/glut.h>

void Render()
{
	glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 0.0);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.5f, -0.5f);
		glVertex2f(0.5f, 0.5f);
		glVertex2f(-0.5f, 0.5f);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	const Vector2i windowSizeA = Vector2i::Builder(250, 500);
	const Vector2i windowSizeB = Vector2i::Builder(250, 500);

	Vector2i windowSize = windowSizeA + windowSizeB;

	glutInitWindowSize(windowSize.x, windowSize.y);
	glutInitWindowPosition(0, 0);
	glutInit(&argc, argv);

	glutCreateWindow("OpenGL Test");

	glutDisplayFunc(Render);
	glutMainLoop();
	return 0;
}
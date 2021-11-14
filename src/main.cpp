#include <Vector.hpp>
#include <GL/glut.h>
#include <Console.hpp>

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

	print("Window Event");

}

int main(int argc, char** argv)
{
	Vector2i windowSizeA = Vector2i::New(250, 500);
	Vector2i windowSizeB = Vector2i::New(250, 500);

	Vector2i windowSize = windowSizeA + windowSizeB;

	glutInitWindowSize(windowSize.x, windowSize.y);
	glutInitWindowPosition(0, 0);
	glutInit(&argc, argv);

	glutCreateWindow("OpenGL Test");
	
	glutDisplayFunc(Render);
	glutMainLoop();
}
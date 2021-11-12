#include <GL/glut.h>
#include<objects.hpp>

void render()
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
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0);
	glutInit(&argc, argv);

	glutCreateWindow("OpenGL Test");

	glutDisplayFunc(render);
	glutMainLoop();
	return 0;
}
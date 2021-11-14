#include <Vector.hpp>
#include <Console.hpp>
#include <GLFW/glfw3.h>

int main(int argc, char** argv)
{
	Vector2i window_size = Vector2i::New(500, 500);

	GLFWwindow *window;
	
	if (!glfwInit())
	{
		return 1;
	}
	
	window = glfwCreateWindow(window_size.x, window_size.y, "Test Window", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}
	
	glfwMakeContextCurrent(window);

	while(!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_QUADS);
			glVertex2f(-0.5, 0.5);
			glVertex2f(0.0, 0.5);
			glVertex2f(0.0, 0.0);
			glVertex2f(-0.5, 0.0);
		glEnd();
		
		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}
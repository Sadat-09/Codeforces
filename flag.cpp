#include <windows.h>  // for MS Windows


void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.9f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

glBegin(GL_TRIANGLES);

        //Triangle 1
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2f(-0.5f, 0.0f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.0f, 0.5f);
  glEnd();
glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f); //green box
       glVertex2f(-0.5f, 0.0f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.5f, -0.5f);

         glVertex2f(-0.5f, -0.5f);

         //red box left
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.5f, 0.0f);
        glVertex2f(-0.3f, 0.0f);
        glVertex2f(-0.3f, -0.5f);

         glVertex2f(-0.5f, -0.5f);

         //red box right
         glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.3f, 0.0f);
        glVertex2f(0.3f, -0.5f);

         glVertex2f(0.5f, -0.5f);

         //blue shape
         glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(-0.1f, 0.0f);
        glVertex2f(0.1f, 0.0f);
        glVertex2f(0.1f, -0.5f);

         glVertex2f(-0.1f, -0.5f);

         //green shape for short the blue shape
         glColor3f(0.0f, 1.0f, 0.0f);
         glVertex2f(-0.1f, 0.0f);
        glVertex2f(0.1f, 0.0f);
        glVertex2f(0.1f, -0.2f);

         glVertex2f(-0.1f, -0.2f);




        glEnd();


	glFlush();  // Render now
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

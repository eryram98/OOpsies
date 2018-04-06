#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

#include "Bar.hpp"

using namespace std;

Bar::Bar(float x1) {
    x = x1;
}

//contains which checks if in or nah
bool Bar::hit(float xx, float yy)
{
    if (xx >= x && xx <= x + width && yy <= y && yy >= y - height)
        return true;
    else
        return false;
}

void Bar::draw()
{
    glColor3d(1.0, 0.6, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(x, y);
    glVertex2f(x+width, y);
    glVertex2f(x+width, y-height);
    glVertex2f(x, y-height);
    
    glEnd();
    
}

void Bar::moveU()
{
    y+=.04;
}
void Bar::moveD()
{
    y-=.04;
}

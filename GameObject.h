#pragma once
#include <gl/freeglut.h>
#include "ConsoleDebug.h"
#include "Transform.h"
class GameObject // class for every object used to store position and size
{
public:
	Transform transform; // transform holds position, scale and rotational information
	GameObject();
	GameObject(float x, float y, float z);
	void draw();
	void scale(float);
	void remove() const;
};


#include "XgRender.h"

#include <iostream>

#include "XgGraphicsLayer.h"

XgRender::XgRender()
{
	std::cout << "Render Hello World ...";
}


XgRender::~XgRender()
{
}

void XgRender::display()
{
	XgGraphicsLayer graphicsLayer;

	graphicsLayer.display();
}

#include "XgGraphicsLayer.h"

#include "XgVLib.h"

XgGraphicsLayer::XgGraphicsLayer()
{
}


XgGraphicsLayer::~XgGraphicsLayer()
{
}

void XgGraphicsLayer::display()
{
	XgVLib scene;

	scene.run();
}

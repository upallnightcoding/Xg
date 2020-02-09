#include "XgGraphicsLayer.h"

#include "XgVLib.h"

XgGraphicsLayer::XgGraphicsLayer()
{
}


XgGraphicsLayer::~XgGraphicsLayer()
{
}

void XgGraphicsLayer::display(XgObject &object)
{
	XgVLib scene;

	scene.run(object);
}

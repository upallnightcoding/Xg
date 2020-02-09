#include "XgRender.h"

#include <iostream>

#include "XgGraphicsLayer.h"
#include "XgObject.h"

XgRender::XgRender()
{
	std::cout << "Render Hello World ...";
}


XgRender::~XgRender()
{
}

void XgRender::display()
{
	const std::string DIR_PATH = "C:/Users/Ken/Desktop/SandBox/programming/c++/XgV/XgV/model/";
	const std::string MODEL_PATH = DIR_PATH + "chalet.obj/chalet.obj";
	const std::string TEXTURE_PATH = DIR_PATH + "chalet.jpg";

	XgObject object(MODEL_PATH, TEXTURE_PATH);
	object.loadModel();

	XgGraphicsLayer graphicsLayer;

	graphicsLayer.display(object);
}

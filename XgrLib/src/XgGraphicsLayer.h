#pragma once

#include "XgObject.h"

class XgGraphicsLayer
{
public:
	XgGraphicsLayer();
	virtual ~XgGraphicsLayer();

public:
	void display(XgObject &object);
};


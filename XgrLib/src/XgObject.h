#pragma once

#include "Xg.h"

class XgObject
{
public:
	XgObject(string modelPath, string texturePath);
	virtual ~XgObject();

public:
	void loadModel();

private:
	string modelPath;
	string texturePath;

public:
	std::vector<Vertex> vertices;
	std::vector<uint32_t> indices;
};



#pragma once
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class Parcer
{
public:
	Parcer();
	~Parcer();

	bool OpenFile(const char * Filename);

	fstream Continuar;

	string reader;
	int NVertx;
	int NIndex;
	int NNormal;
	int NTexture;

	char tempchar;
	float holder;
	void Literate(const char * fileName);

};


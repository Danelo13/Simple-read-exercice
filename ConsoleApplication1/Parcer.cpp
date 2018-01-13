#include "stdafx.h"
#include "Parcer.h"


Parcer::Parcer()
{
}


Parcer::~Parcer()
{
}


bool Parcer::OpenFile(const char * Filename) {
	Continuar.open(Filename, fstream::in);
	if (!Continuar.is_open()) {
		return false;
	}
	return true;

}

void Parcer::Literate(const char * filename) {
	if (OpenFile(filename)) {
		getline(Continuar, reader);
		if (reader == "xof 0303txt 0032") {
			
			int VertexMax;
			float VertexOut;
			while (getline(Continuar, reader)) {
				
				int findMesh = reader.find("Mesh mesh");
				
				if (findMesh != -1) {
					Continuar >> VertexMax >> tempchar;
					cout << "Vertices: " << VertexMax << endl;
					for (int i = 0; i < VertexMax; i++) {
						Continuar >> VertexOut >> tempchar;
						cout << VertexOut << " X,";
						Continuar >> VertexOut >> tempchar;
						cout << VertexOut << " Y,";
						Continuar >> VertexOut >> tempchar >> tempchar;
						cout << VertexOut << " Z of vertex #" << i << endl;
					}
				}

			}
		}

	}
}



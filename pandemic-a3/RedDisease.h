#pragma once
#include "Diseases.h"

class RedDisease : public Diseases {
public:
	int getCubes(){ return cubes; }
private:
	int cubes = 24;
};
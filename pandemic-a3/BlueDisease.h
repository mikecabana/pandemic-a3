#pragma once
#include "Diseases.h"

class BlueDisease : public Diseases {
public:
	int getCubes(){ return cubes; }
	void decreaseCubes(){ cubes = cubes - 1; Notify(); }
private:
	int cubes;
};
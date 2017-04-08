#pragma once
#include "DiseaseDecorator.h"

class AddCube : public DiseaseDecorator {
public:
	AddCube(Diseases *decoratedDisease) : DiseaseDecorator(decoratedDisease){ 
		
		DiseaseDecorator::getCubes() + 1; Notify(); }
};
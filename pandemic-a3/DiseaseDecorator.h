#pragma once
#include "Diseases.h"

class DiseaseDecorator : public Diseases {
protected:
	Diseases *decoratedDisease;
public:
	DiseaseDecorator(Diseases *decoratedDisease){
		this->decoratedDisease = decoratedDisease;
	}

	int getCubes(){
		return decoratedDisease->getCubes();
	}

};
#pragma once
#include "ObserverDecorator.h"
#include <string>

class CubeRatio : public ObserverDecorator {
public:
	CubeRatio(Observer *decoratedObserver, Statistics *s) : ObserverDecorator(decoratedObserver, s) {}

	std::string Update() {
		return ObserverDecorator::Update() + "\n"+ std::to_string(s->getCubes()) +"/96 of cubes available";
	}
};
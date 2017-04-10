#pragma once
#include "ObserverDecorator.h"
#include <string>

class CubeRatio : public ObserverDecorator {
public:
	CubeRatio(Observer *decoratedObserver) : ObserverDecorator(decoratedObserver) {}

	std::string Update() {
		return ObserverDecorator::Update() + "\nDisplay % of cubes available";
	}
};
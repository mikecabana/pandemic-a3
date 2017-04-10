#pragma once
#include "ObserverDecorator.h"

class CubeRatio : public ObserverDecorator {
public:
	CubeRatio(Observer *decoratedObserver) : ObserverDecorator(decoratedObserver) {}

	std::string Update() {
		return ObserverDecorator::Update() + "\nDecorated";
	}
};
#pragma once
#include "ObserverDecorator.h"
#include <string>

class InfectedRatio : public ObserverDecorator {
public:
	InfectedRatio(Observer *decoratedObserver) : ObserverDecorator(decoratedObserver) {}

	std::string Update() {
		return ObserverDecorator::Update() + "\nDisplay % of infected cities";
	}
};
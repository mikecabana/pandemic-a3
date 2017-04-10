#pragma once
#include "ObserverDecorator.h"
#include <string>

class StationRatio : public ObserverDecorator {
public:
	StationRatio(Observer *decoratedObserver) : ObserverDecorator(decoratedObserver) {}

	std::string Update() {
		return ObserverDecorator::Update() + "\nDisplay % of stations available";
	}
};
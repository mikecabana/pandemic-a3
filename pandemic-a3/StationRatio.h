#pragma once
#include "ObserverDecorator.h"
#include <string>

class StationRatio : public ObserverDecorator {
public:
	StationRatio(Observer *decoratedObserver, Statistics *s) : ObserverDecorator(decoratedObserver, s) {}

	std::string Update() {
		return ObserverDecorator::Update() + "\n" + std::to_string(s->getStations())+"/6 of stations available";
	}
};
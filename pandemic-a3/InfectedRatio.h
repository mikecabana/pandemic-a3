#pragma once
#include "ObserverDecorator.h"
#include <string>

class InfectedRatio : public ObserverDecorator {
public:
	InfectedRatio(Observer *decoratedObserver, Statistics *s) : ObserverDecorator(decoratedObserver, s) {}

	std::string Update() {
		return ObserverDecorator::Update() + "\n"+std::to_string(s->getCitiesInfected())+" infected cities";
	}
};
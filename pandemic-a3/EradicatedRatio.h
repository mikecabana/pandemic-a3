#pragma once
#include "ObserverDecorator.h"
#include <string>

class EradicatedRatio : public ObserverDecorator {
public:
	EradicatedRatio(Observer *decoratedObserver, Statistics *s) : ObserverDecorator(decoratedObserver, s) {}

	std::string Update() {
		return ObserverDecorator::Update() + "\n"+ std::to_string(s->getEradicated())+"/4 of viruses eradicated";
	}
};
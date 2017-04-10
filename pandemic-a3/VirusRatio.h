#pragma once
#include "ObserverDecorator.h"
#include <string>

class VirusRatio : public ObserverDecorator {
public:
	VirusRatio(Observer *decoratedObserver, Statistics *s) : ObserverDecorator(decoratedObserver, s) {}

	std::string Update() {
		return ObserverDecorator::Update() + "\n"+std::to_string(s->getCured())+"/4 of viruses cured";
	}
};
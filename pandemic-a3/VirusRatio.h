#pragma once
#include "ObserverDecorator.h"
#include <string>

class VirusRatio : public ObserverDecorator {
public:
	VirusRatio(Observer *decoratedObserver) : ObserverDecorator(decoratedObserver) {}

	std::string Update() {
		return ObserverDecorator::Update() + "\nDisplay % of viruses cured";
	}
};
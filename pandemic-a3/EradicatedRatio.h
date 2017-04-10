#pragma once
#include "ObserverDecorator.h"
#include <string>

class EradicatedRatio : public ObserverDecorator {
public:
	EradicatedRatio(Observer *decoratedObserver) : ObserverDecorator(decoratedObserver) {}

	std::string Update() {
		return ObserverDecorator::Update() + "\nDisplay % of viruses eradicated";
	}
};
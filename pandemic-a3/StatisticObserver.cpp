#include "StatisticObserver.h"
#include <iostream>

StatisticObserver::StatisticObserver() {
}

StatisticObserver::StatisticObserver(Statistics* s) {
	_subject = s;
	_subject->Attach(this);
}

std::string StatisticObserver::Update() {
	return "Observers updated";
}
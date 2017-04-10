#pragma once
#include "Observer.h"
#include "Statistics.h"

class StatisticObserver : public Observer {
public:
	StatisticObserver();
	StatisticObserver(Statistics* s);
	~StatisticObserver();
	std::string Update();
private:
	Statistics *_subject;
};
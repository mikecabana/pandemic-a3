#include "Statistics.h"
#include "StatisticObserver.h"
#include "CubeRatio.h"

int main() {
	Statistics *stat = new Statistics();
	Observer *sOb = new CubeRatio(new StatisticObserver(stat));

	//adding decorator
	//sOb = new CubeRatio(sOb);

	start:
	std::cout << "Options" << std::endl;
	std::cout << "1 - Use a colored virus cube" << std::endl;
	std::cout << "2 - Use a research station" << std::endl;
	std::cout << "3 - Increment number of cities infected" << std::endl;
	std::cout << "4 - Increment number of viruses cured" << std::endl;
	std::cout << "5 - Increment number of viruses eradicated" << std::endl;
	std::cout << "0 - exit" << std::endl;
	
	int option;
	std::string color;
	std::cin >> option;
	switch (option) {
	case 1: 
		std::cout << "Type the color of cube to use (red/blue/black/yellow)" << std::endl;
		std::cin >> color;
		stat->useCube(color);
		goto start;
	case 2: 
		std::cout << "Research station used" << std::endl;
		stat->useStations();
		goto start;
	case 3:
		std::cout << "City infected" << std::endl;
		stat->incrementInfecetd();
		goto start;
	case 4:
		std::cout << "Virus cured" << std::endl;
		stat->incrementCure();
		goto start;
	case 5:
		std::cout << "Virus eradicated" << std::endl;
		stat->incrementEradicated();
		goto start;
	case 0:
		std::cout << "Thanks for palying";
	}

}
#include <iostream>
#include <chrono>
#include "../include/vacuumenvironment.h"

int main(int argc, char **argv) {
    VacuumEnvironment environment(VacuumEnvironment::ArenaShape::rectangle, 15, 24.0);
    environment.runSimulationForSeconds(15);
    std::chrono::milliseconds timespan(1000);
    
    environment.startEnv();
    std::this_thread::sleep_for(timespan);
    environment.endEnv();
    
    return 0;
}

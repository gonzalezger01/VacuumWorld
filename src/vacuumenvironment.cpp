/*
* Copyright 2019 <copyright holder> <email>
* 
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
* 
*     http://www.apache.org/licenses/LICENSE-2.0
* 
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "../include/vacuumenvironment.h"

VacuumEnvironment::VacuumEnvironment()
{
}

/* environment characteristics such as size shape and dirt placement should be easily changed */
VacuumEnvironment::VacuumEnvironment(VacuumEnvironment::ArenaShape shape, int size, double dirtRate)
:blockCount(size), arenaShape(shape), dirtRate(dirtRate)
{
    shapeEnv();
}

void VacuumEnvironment::shapeEnv()
{
    //shape is the length of the area
    
}

void VacuumEnvironment::sizeEnv()
{
    
}

void VacuumEnvironment::startEnv()
{   
    environment = std::thread(&VacuumEnvironment::runEnv, this, std::ref(this->isWorldRunning));
}

void VacuumEnvironment::runEnv(bool& isWorldRunning){
    while(isWorldRunning){
        generateDirt();
        std::cout << "Value " << isWorldRunning << std::endl;
    }
    std::cout << "World Ended thanks for playing" << std::endl;
}

void VacuumEnvironment::endEnv()
{
    this->isWorldRunning = false;
    environment.join();
}
 
void VacuumEnvironment::runSimulationForSeconds(size_t seconds)
{
    secondsToRunEnv = seconds;
}

void VacuumEnvironment::generateDirt()
{
    std::random_device randomSeed;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(randomSeed()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> dis(1, 10);
    
    
    std::cout << dis(gen) << std::endl;
    
    
}

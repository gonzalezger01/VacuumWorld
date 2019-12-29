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

/* environment characteristics such as size shape and dirt placement should be easily changed */

#ifndef VACUUMENVIRONMENT_H
#define VACUUMENVIRONMENT_H
#include <random>
#include <thread>
#include <string>
#include <iostream>
/**
 * @todo write docs
 */
class VacuumEnvironment
{
public:
    enum ArenaShape { line, plus, rectangle };
    
    //Constructor to initialize with default shape
    VacuumEnvironment();
    VacuumEnvironment(ArenaShape shape, int size, double dirtRate);
    
    //shape environment determines how the arena will be shaped
    void shapeEnv();
    
    //determines how many blocks we have avilable for the shape
    //if we dont have enough we should just not have that last block
    void sizeEnv();
    
    void startEnv();
    void runEnv(bool& isWorldRunning);
    void endEnv();
    
    void runSimulationForSeconds(size_t seconds);
    
    
    //the rate per second that the arena will have for dirt
    void dirtPlacementRate(int n);
private:
    int blockCount = 0;
    bool isWorldRunning = true;
    ArenaShape arenaShape = line;
    double dirtRate = 0.0;
    int secondsToRunEnv = 0;
    std::thread environment;
    
    void generateDirt();

};

#endif // VACUUMENVIRONMENT_H

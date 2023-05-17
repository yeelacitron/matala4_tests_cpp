#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
#include "Point.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "OldNinja.hpp"
#include "Cowboy.hpp"

namespace ariel{
    class Team{
        private:
            std::vector<Character> fighters;
            Character * leader;
            
        public:
            Team(Character * leader);
            ~Team()=default;
            void add(Character *fighter);
            virtual void attack(Team *other);
            int stillAlive();
            virtual void print();
    };
}







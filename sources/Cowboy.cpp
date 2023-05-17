#include "Cowboy.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>

using namespace std;
namespace ariel{
    Cowboy::Cowboy(std::string name,Point point):Character(name,point,110){

    }
    void Cowboy::shoot(Character *enemy){

    }
    string Cowboy::print(){
        return "";
    }
    bool Cowboy::hasboolets() const{
        return true;
    }
    void Cowboy::reload(){
        
    }
    int Cowboy::getNumBullets() const{
        return 1;
    }
}
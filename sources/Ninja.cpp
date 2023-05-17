#include "Ninja.hpp"
using namespace std;
namespace ariel{

    Ninja::Ninja(string name,Point point,int hit_points,int speed):Character(name,point,hit_points),speed(speed){

    }
    
    string Ninja::print() {
        return "";
    }
    void Ninja::move(Character* enemy){
        
    }
    void Ninja::slash(Character* enemy){
        
    }
    
}
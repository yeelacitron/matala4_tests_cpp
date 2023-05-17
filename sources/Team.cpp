#include "Team.hpp"

using namespace std;

namespace ariel{

    Team::Team(Character * leader):leader(leader){

    }
    
    void Team::add(Character *fighter){

    }
    void Team::attack(Team *other){
    }
    int Team::stillAlive(){
        return 0;
    }
    void Team::print(){

    }
    Character* Team::getLeader() const{
        Cowboy *b = new Cowboy("hi",Point(0,0));
        return b;
    }
    
}
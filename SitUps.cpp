# include "SitUps.h"

SitUps::SitUps(){
    sets = 0;
    repetitions = 0;
}

SitUps::SitUps(string _name, int _sets, int _repetitions):Exercise(_name){
    sets = _sets;
    repetitions = _repetitions;
}

int SitUps::getSets(){
    return sets;
}

void SitUps::setSets(int _sets){
    sets = _sets;
}

int SitUps::getRepetitions(){
    return repetitions;
}

void SitUps::setRepetitions(int _repetitions){
    repetitions = _repetitions;
}

float SitUps::calculateCaloriesBurned(){
    return  (8 * 3.5) * sets * repetitions;
}

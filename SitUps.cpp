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

double SitUps::calculateCaloriesBurned(){
    double caloriesBurned = (sets * repetitions * 3.5 * 10)/ 200;
    return  caloriesBurned;
}

double SitUps::calculateCaloriesBurned(int weight){
    double caloriesBurned = (sets * repetitions * 3.5 * weight * 10)/200;
    return caloriesBurned;
}

bool SitUps::operator==(SitUps val) {
    if (sets==val.getSets() && repetitions==val.getRepetitions()){
        return true;
    }
    else {
        return false;
    }
}

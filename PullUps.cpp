# include "PullUps.h"

PullUps::PullUps(){
    sets = 0;
    repetitions = 0;
}

PullUps::PullUps(string _name, int _sets, int _repetitions):Exercise(_name){
    sets = _sets;
    repetitions = _repetitions;
}

int PullUps::getSets(){
    return sets;
}

void PullUps::setSets(int _sets){
    sets = _sets;
}

int PullUps::getRepetitions(){
    return repetitions;
}

void PullUps::setRepetitions(int _repetitions){
    repetitions = _repetitions;
}

double PullUps::calculateCaloriesBurned(){
    double caloriesBurned = (sets * repetitions * 4.0 * 10) / 200;
    return caloriesBurned;
}

double PullUps::calculateCaloriesBurned(int weight){
    double caloriesBurned = (sets * repetitions * weight * 4.0 * 10)/200;
    return caloriesBurned;
}

bool PullUps::operator==(PullUps val){
    if (sets==val.getSets() && repetitions==val.getRepetitions()){
        return true;
    }
    else {
        return false;
    }
}

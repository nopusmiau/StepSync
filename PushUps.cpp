# include "PushUps.h"

PushUps::PushUps(){
    sets = 0;
    repetitions = 0;
}

PushUps::PushUps(string _name, int _sets, int _repetitions):Exercise(_name){
    sets = _sets;
    repetitions = _repetitions;
}

int PushUps::getSets(){
    return sets;
}

void PushUps::setSets(int _sets){
    sets = _sets;
}

int PushUps::getRepetitions(){
    return repetitions;
}

void PushUps::setRepetitions(int _repetitions){
    repetitions = _repetitions;
}

double PushUps::calculateCaloriesBurned(){
    double caloriesBurned = (sets * repetitions * 3.8 * 10) / 200;
    return caloriesBurned;
}

double PushUps::calculateCaloriesBurned(int weight){
    double caloriesBurned = (sets * repetitions * weight * 3.8 * 10)/200;
    return caloriesBurned;
}

bool PushUps::operator==(PushUps val){
    if (sets==val.getSets() && repetitions==val.getRepetitions()){
        return true;
    }
    else {
        return false;
    }
}

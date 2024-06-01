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
    double caloriesBurned = (sets * repetitions * (8 * 3.5) * 10) / 200;
    return caloriesBurned;
}

# include "PushUps.h"

PushUps::PushUps(){
    sets = 0;
    repetitions = 0;
}

PushUps::PushUps(string _name, float _duration, int _sets, int _repetitions):Exercise(_name, _duration){
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

float PushUps::calculateCaloriesBurned(){
    return duration * (8 * 3.5) * sets * repetitions;
}
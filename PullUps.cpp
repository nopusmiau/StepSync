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
    double caloriesBurned = (sets * repetitions * (8 * 3.5) * 10) / 200;
    return caloriesBurned;
}

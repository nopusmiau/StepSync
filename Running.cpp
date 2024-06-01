# include "Running.h"

Running::Running(){
    distance = 0;
    duration = 0;
}

Running::Running(string _name, int _distance, int _duration):Exercise(_name){
    distance = _distance;
    duration = _duration;
}

int Running::getDistance(){
    return distance;
}

string Running::getDistance(string measureUnit){
    string msg = measureUnit;
    return to_string(distance) + msg;
}

void Running::setDistance(int _distance){
    distance = _distance;
}

int Running::getDuration(){
    return duration;
}

string Running::getDuration(string measureUnit){
    string msg = measureUnit;
    return to_string(distance) + msg;
}

void Running::setDuration(int _duration){
    duration = _duration;
}

double Running::calculateCaloriesBurned(){
    double caloriesBurned = (duration * distance * (11.5 * 3.5))/ 200;
    return caloriesBurned;
}

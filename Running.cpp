# include "Running.h"

Running::Running(){
    distance = 0;
    duration = 0;
}

Running::Running(string _name, float _distance, float _duration):Exercise(_name){
    distance = _distance;
    duration = _duration;
}

float Running::getDistance(){
    return distance;
}

void Running::setDistance(float _distance){
    distance = _distance;
}

float Running::getDuration(){
    return duration;
}

void Running::setDuration(float _duration){
    duration = _duration;
}

float Running::calculateCaloriesBurned(){
    return duration * (11.5 * 3.5) * distance;
}

# include "Cardio.h"

Cardio::Cardio(){
    distance = 0;
}

Cardio::Cardio(string _name, float _duration, float _distance):Exercise(_name, _duration){
    distance = _distance;
}

float Cardio::getDistance(){
    return distance;
}

void Cardio::setDistance(float _distance){
    distance = _distance;
}

float Cardio::calculateCaloriesBurned(){
    return duration * (11.5 * 3.5) * distance;
}
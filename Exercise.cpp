# include "Exercise.h"

Exercise::Exercise(){
    name = "";
    duration = 0;
}

Exercise::Exercise(string _name, float _duration){
    name = _name;
    duration = _duration;
}

string Exercise::getName(){
    return name;
}

void Exercise::setName(string _name){
    name = _name;
}

float Exercise::getDuration(){
    return duration;
}

void Exercise::setDuration(float _duration){
    duration = _duration;
}

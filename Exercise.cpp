# include "Exercise.h"

Exercise::Exercise(){
    name = "";
}

Exercise::Exercise(string _name){
    name = _name;
}

string Exercise::getName(){
    return name;
}

void Exercise::setName(string _name){
    name = _name;
}

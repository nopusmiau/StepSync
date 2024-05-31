# include "Routine.h"

Routine::Routine(vector <Exercise*> exercises){
    this->exercises = exercises;
}

vector <Exercise*> Routine::getExercises(){
    return exercises;
}

void Routine::addExercise(Exercise* exercise){
    exercises.push_back(exercise);
}

string Routine::getRoutineInfo(){
    string content = "-----------------------\n";
    for(int j = 0; j < exercises.size(); ++j){

        string detailedContent = "";
        string running_1 = "Distance: ";
        string running_2 = "Duration: ";
        string msg_1 = "Sets: ";
        string msg_2 = "Repetitions: ";
        const type_info& type_info = typeid(*exercises[j]);
        if(type_info == typeid(Running)){
            Running *p1 = (Running *) exercises[j];
            detailedContent = detailedContent + p1->getName() + "\n" + to_string(p1->getDistance()) + "\n";
            running_1 = running_1 + to_string(p1->getDistance()) + "\n";
            running_2 = running_2 + to_string(p1 ->getDuration()) + "\n";
        }
        else if(type_info == typeid(PushUps)){
            PushUps *p1 = (PushUps *) exercises[j];
            detailedContent = detailedContent + p1->getName() + "\n";
            msg_1 = msg_1 + to_string(p1->getSets()) + "\n";
            msg_2 = msg_2 + to_string(p1->getRepetitions()) + "\n";
        }
        else if(type_info == typeid(PullUps)){
            PullUps *p1 = (PullUps *) exercises[j];
            detailedContent = detailedContent + p1->getName() + "\n";
            msg_1 = msg_1 + to_string(p1->getSets()) + "\n";
            msg_2 = msg_2 + to_string(p1->getRepetitions()) + "\n";
        }
        else {
            SitUps *p1 = (SitUps *) exercises[j];
            detailedContent = detailedContent + p1->getName() + "\n";
            msg_1 = msg_1 + to_string(p1->getSets()) + "\n";
            msg_2 = msg_2 + to_string(p1->getRepetitions()) + "\n";
        }
        content = content + detailedContent + "\n";
    }
    content = content + "-----------------------";
    return content;
}

double Routine::calculateTotalCaloriesBurned() {
    double totalCalories = 0;
    for (const auto& exercise : exercises){
        totalCalories += exercise->calculateCaloriesBurned();
    }
    return totalCalories;
}
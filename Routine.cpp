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
            detailedContent = detailedContent + p1->getName() + "\n";
            running_1 = running_1 + p1->getDistance(" km") + "\n";
            running_2 = running_2 + p1 ->getDuration(" minutes") + "\n";
            detailedContent = detailedContent + running_1 + running_2;
            detailedContent = detailedContent +  "Calories Burned: " + to_string(p1->calculateCaloriesBurned()) + "\n";
        }
        else if(type_info == typeid(PushUps)){
            PushUps *p1 = (PushUps *) exercises[j];
            detailedContent = detailedContent + p1->getName() + "\n";
            msg_1 = msg_1 + to_string(p1->getSets()) + "\n";
            msg_2 = msg_2 + to_string(p1->getRepetitions()) + "\n";
            detailedContent = detailedContent + msg_1 + msg_2;
            detailedContent = detailedContent + "Calories Burned: " + to_string(p1->calculateCaloriesBurned()) + "\n";
        }
        else if(type_info == typeid(PullUps)){
            PullUps *p1 = (PullUps *) exercises[j];
            detailedContent = detailedContent + p1->getName() + "\n";
            msg_1 = msg_1 + to_string(p1->getSets()) + "\n";
            msg_2 = msg_2 + to_string(p1->getRepetitions()) + "\n";
            detailedContent = detailedContent + msg_1 + msg_2;
            detailedContent = detailedContent + "Calories Burned: " + to_string(p1->calculateCaloriesBurned()) + "\n";
        }
        else if(type_info == typeid(SitUps)){
            SitUps *p1 = (SitUps *) exercises[j];
            detailedContent = detailedContent + p1->getName() + "\n";
            msg_1 = msg_1 + to_string(p1->getSets()) + "\n";
            msg_2 = msg_2 + to_string(p1->getRepetitions()) + "\n";
            detailedContent = detailedContent + msg_1 + msg_2;
            detailedContent = detailedContent + "Calories Burned: " + to_string(p1->calculateCaloriesBurned()) + "\n";
        }
        else{
            detailedContent = detailedContent;
        }
        content = content + detailedContent + "\n";
    }
    content = content + "-----------------------";
    return content;
}

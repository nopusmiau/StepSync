# include <fstream>
# include "Exercise.cpp"
# include "Running.cpp"
# include "PushUps.cpp"
# include "SitUps.cpp"
# include "PullUps.cpp"
# include "Routine.cpp"


int main(){
    int weight;
    int age;
    string gender;
    int choice;
    int choice2;
    int resume;
    int caloriesWithWeight;
    int duration;
    int distance;
    int sets_push;
    int repetitions_push;
    int sets_pull;
    int repetitions_pull;
    int sets_sit;
    int repetitions_sit;

    ofstream outFile("ExerciseRoutine.txt");

    cout << "What is your weight? (in Kg) " << endl;
    cin >> weight;
    cout << "How old are you? (in years) " << endl;
    cin >> age;
    cout << "What is your gender? (M/F) " << endl;
    cin >> gender;
    cout << "Entered data:" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Gender: " << gender << endl;

    outFile << "Entered data:" << endl;
    outFile << "Weight: " << weight << " kg" << endl;
    outFile << "Age: " << age << " years" << endl;
    outFile << "Gender: " << gender << endl;

    bool loop = true;

    while (loop){
        cout << "Please select a 1, 2 or 3: (1. Create a Routine) (2. Make your own Routine) (3. Exit Program)" << endl;
        cin >> choice;

        if(choice == 1){
            cout << "Let's create your own Exercise routine based on the data you provided: \n" << endl;
            cout << "(Note: For calculating calories for every exercise except running, duration is by default: 10 minutes) \n" << endl;
            outFile << "Let's create your own Exercise routine based on the data you provided: \n" << endl;
            outFile << "(Note: For calculating calories for every exercise except running, duration is by default: 10 minutes) \n" << endl;

            if(age >= 18 && age <= 25) {
                if(weight < 60){
                    //LightWeight (< 60 kg)
                    vector <Exercise*> running;
                    running.push_back(new Running("Running", 6, 30));
                    Routine exerciseRoutine = Routine(running);
                    Exercise *pushup = new PushUps("Push-Ups", 4, 20);
                    exerciseRoutine.addExercise(pushup);
                    Exercise *pullup = new PullUps("Pull-Ups", 3, 10);
                    exerciseRoutine.addExercise(pullup);
                    Exercise *situp = new SitUps("Sit-Ups", 4, 25);
                    exerciseRoutine.addExercise(situp);
                    cout << "Do you wish to calculate the calories including the weight? (1. Yes, 2. No) \n" << endl;
                    cin >> caloriesWithWeight;
                    if(caloriesWithWeight==1){
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                    }
                    else {
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfo() << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfo() << endl;
                    }
                    cout << "Do your best and never give up! \n" << endl;
                    outFile << "Do your best and never give up! \n" << endl;
                    cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
                    cin >> resume;
                    if(resume == 2){
                        loop = false;
                    }
                    
                }
                else if(weight <= 80) {
                    //MiddleWeight (60 - 80 kg)
                    vector <Exercise*> running;
                    running.push_back(new Running("Running", 5, 25));
                    Routine exerciseRoutine = Routine(running);
                    Exercise *pushup = new PushUps("Push-Ups", 4, 15);
                    exerciseRoutine.addExercise(pushup);
                    Exercise *pullup = new PullUps("Pull-Ups", 3, 8);
                    exerciseRoutine.addExercise(pullup);
                    Exercise *situp = new SitUps("Sit-Ups", 4, 20);
                    exerciseRoutine.addExercise(situp);
                    cout << "Do you wish to calculate the calories including the weight? (1. Yes, 2. No) \n" << endl;
                    cin >> caloriesWithWeight;
                    if(caloriesWithWeight==1){
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                    }
                    else {
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfo() << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfo() << endl;
                    }
                    cout << "Do your best and never give up! \n" << endl;
                    outFile << "Do your best and never give up! \n" << endl;
                    cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
                    cin >> resume;
                    if(resume == 2){
                        loop = false;
                    }
                }
                else {
                    //HeavyWeight (> 80 kg)
                    vector <Exercise*> running;
                    running.push_back(new Running("Running", 4, 20));
                    Routine exerciseRoutine = Routine(running);
                    Exercise *pushup = new PushUps("Push-Ups", 4, 10);
                    exerciseRoutine.addExercise(pushup);
                    Exercise *pullup = new PullUps("Pull-Ups", 3, 6);
                    exerciseRoutine.addExercise(pullup);
                    Exercise *situp = new SitUps("Sit-Ups", 4, 15);
                    exerciseRoutine.addExercise(situp);
                    cout << "Do you wish to calculate the calories including the weight? (1. Yes, 2. No) \n" << endl;
                    cin >> caloriesWithWeight;
                    if(caloriesWithWeight==1){
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                    }
                    else {
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfo() << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfo() << endl;
                    }
                    cout << "Do your best and never give up! \n" << endl;
                    outFile << "Do your best and never give up! \n" << endl;
                    cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
                    cin >> resume;
                    if(resume == 2){
                        loop = false;
                    }
                }
            }else if(age >= 26 && age <= 35){
                if (weight < 60){
                    //LightWeight (< 60 kg)
                    vector <Exercise*> running;
                    running.push_back(new Running("Running", 5, 25));
                    Routine exerciseRoutine = Routine(running);
                    Exercise *pushup = new PushUps("Push-Ups", 3, 20);
                    exerciseRoutine.addExercise(pushup);
                    Exercise *pullup = new PullUps("Pull-Ups", 3, 8);
                    exerciseRoutine.addExercise(pullup);
                    Exercise *situp = new SitUps("Sit-Ups", 4, 20);
                    exerciseRoutine.addExercise(situp);
                    cout << "Do you wish to calculate the calories including the weight? (1. Yes, 2. No) \n" << endl;
                    cin >> caloriesWithWeight;
                    if(caloriesWithWeight==1){
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                    }
                    else {
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfo() << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfo() << endl;
                    }
                    cout << "Do your best and never give up! \n" << endl;
                    outFile << "Do your best and never give up! \n" << endl;
                    cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
                    cin >> resume;
                    if(resume == 2){
                        loop = false;
                    }
                } 
                else if(weight <= 80){
                    //MiddleWeight (60 - 80 kg)
                    vector <Exercise*> running;
                    running.push_back(new Running("Running", 4, 20));
                    Routine exerciseRoutine = Routine(running);
                    Exercise *pushup = new PushUps("Push-Ups", 3, 15);
                    exerciseRoutine.addExercise(pushup);
                    Exercise *pullup = new PullUps("Pull-Ups", 3, 6);
                    exerciseRoutine.addExercise(pullup);
                    Exercise *situp = new SitUps("Sit-Ups", 4, 15);
                    exerciseRoutine.addExercise(situp);
                    cout << "Do you wish to calculate the calories including the weight? (1. Yes, 2. No) \n" << endl;
                    cin >> caloriesWithWeight;
                    if(caloriesWithWeight==1){
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                    }
                    else {
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfo() << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfo() << endl;
                    }
                    cout << "Do your best and never give up! \n" << endl;
                    outFile << "Do your best and never give up! \n" << endl;
                    cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
                    cin >> resume;
                    if(resume == 2){
                        loop = false;
                    }
                }
                else {
                    //HeavyWeight (> 80 kg)
                    vector <Exercise*> running;
                    running.push_back(new Running("Running", 3, 15));
                    Routine exerciseRoutine = Routine(running);
                    Exercise *pushup = new PushUps("Push-Ups", 3, 10);
                    exerciseRoutine.addExercise(pushup);
                    Exercise *pullup = new PullUps("Pull-Ups", 3, 5);
                    exerciseRoutine.addExercise(pullup);
                    Exercise *situp = new SitUps("Sit-Ups", 4, 10);
                    exerciseRoutine.addExercise(situp);
                    cout << "Do you wish to calculate the calories including the weight? (1. Yes, 2. No) \n" << endl;
                    cin >> caloriesWithWeight;
                    if(caloriesWithWeight==1){
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                    }
                    else {
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfo() << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfo() << endl;
                    }
                    cout << "Do your best and never give up! \n" << endl;
                    outFile << "Do your best and never give up! \n" << endl;
                    cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
                    cin >> resume;
                    if(resume == 2){
                        loop = false;
                    }
                }
            }else if(age >= 36 && age <= 45){
                if(weight < 60){
                    //LightWeight (< 60 kg)
                    vector <Exercise*> running;
                    running.push_back(new Running("Running", 4, 20));
                    Routine exerciseRoutine = Routine(running);
                    Exercise *pushup = new PushUps("Push-Ups", 3, 15);
                    exerciseRoutine.addExercise(pushup);
                    Exercise *pullup = new PullUps("Pull-Ups", 3, 6);
                    exerciseRoutine.addExercise(pullup);
                    Exercise *situp = new SitUps("Sit-Ups", 4, 15);
                    exerciseRoutine.addExercise(situp);
                    cout << "Do you wish to calculate the calories including the weight? (1. Yes, 2. No) \n" << endl;
                    cin >> caloriesWithWeight;
                    if(caloriesWithWeight==1){
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                    }
                    else {
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfo() << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfo() << endl;
                    }
                    cout << "Do your best and never give up! \n" << endl;
                    outFile << "Do your best and never give up! \n" << endl;
                    cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
                    cin >> resume;
                    if(resume == 2){
                        loop = false;
                    }
                }
                else if(weight <= 80){
                    //MiddleWeight (60 - 80 kg)
                    vector <Exercise*> running;
                    running.push_back(new Running("Running", 3, 15));
                    Routine exerciseRoutine = Routine(running);
                    Exercise *pushup = new PushUps("Push-Ups", 3, 12);
                    exerciseRoutine.addExercise(pushup);
                    Exercise *pullup = new PullUps("Pull-Ups", 3, 5);
                    exerciseRoutine.addExercise(pullup);
                    Exercise *situp = new SitUps("Sit-Ups", 4, 12);
                    exerciseRoutine.addExercise(situp);
                    cout << "Do you wish to calculate the calories including the weight? (1. Yes, 2. No) \n" << endl;
                    cin >> caloriesWithWeight;
                    if(caloriesWithWeight==1){
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                    }
                    else {
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfo() << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfo() << endl;
                    }
                    cout << "Do your best and never give up! \n" << endl;
                    outFile << "Do your best and never give up! \n" << endl;
                    cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
                    cin >> resume;
                    if(resume == 2){
                        loop = false;
                    }
                }
                else {
                    //HeavyWeight (> 80 kg)
                    vector <Exercise*> running;
                    running.push_back(new Running("Running", 2, 10));
                    Routine exerciseRoutine = Routine(running);
                    Exercise *pushup = new PushUps("Push-Ups", 3, 10);
                    exerciseRoutine.addExercise(pushup);
                    Exercise *pullup = new PullUps("Pull-Ups", 3, 4);
                    exerciseRoutine.addExercise(pullup);
                    Exercise *situp = new SitUps("Sit-Ups", 4, 10);
                    exerciseRoutine.addExercise(situp);
                    cout << "Do you wish to calculate the calories including the weight? (1. Yes, 2. No) \n" << endl;
                    cin >> caloriesWithWeight;
                    if(caloriesWithWeight==1){
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                    }
                    else {
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfo() << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfo() << endl;
                    }
                    cout << "Do your best and never give up! \n" << endl;
                    outFile << "Do your best and never give up! \n" << endl;
                    cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
                    cin >> resume;
                    if(resume == 2){
                        loop = false;
                    }
                }
            }else if(age >= 46 && age <= 50){
                if(weight < 60){
                    //LightWeight (< 60 kg)
                    vector <Exercise*> running;
                    running.push_back(new Running("Running", 3, 15));
                    Routine exerciseRoutine = Routine(running);
                    Exercise *pushup = new PushUps("Push-Ups", 3, 10);
                    exerciseRoutine.addExercise(pushup);
                    Exercise *pullup = new PullUps("Pull-Ups", 2, 5);
                    exerciseRoutine.addExercise(pullup);
                    Exercise *situp = new SitUps("Sit-Ups", 3, 10);
                    exerciseRoutine.addExercise(situp);
                    cout << "Do you wish to calculate the calories including the weight? (1. Yes, 2. No) \n" << endl;
                    cin >> caloriesWithWeight;
                    if(caloriesWithWeight==1){
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                    }
                    else {
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfo() << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfo() << endl;
                    }
                    cout << "Do your best and never give up! \n" << endl;
                    outFile << "Do your best and never give up! \n" << endl;
                    cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
                    cin >> resume;
                    if(resume == 2){
                        loop = false;
                    }
                }
                else if(weight <= 80){
                    //MiddleWeight (60 - 80 kg)
                    vector <Exercise*> running;
                    running.push_back(new Running("Running", 2, 10));
                    Routine exerciseRoutine = Routine(running);
                    Exercise *pushup = new PushUps("Push-Ups", 3, 8);
                    exerciseRoutine.addExercise(pushup);
                    Exercise *pullup = new PullUps("Pull-Ups", 2, 4);
                    exerciseRoutine.addExercise(pullup);
                    Exercise *situp = new SitUps("Sit-Ups", 3, 10);
                    exerciseRoutine.addExercise(situp);
                    cout << "Do you wish to calculate the calories including the weight? (1. Yes, 2. No) \n" << endl;
                    cin >> caloriesWithWeight;
                    if(caloriesWithWeight==1){
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                    }
                    else {
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfo() << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfo() << endl;
                    }
                    cout << "Do your best and never give up! \n" << endl;
                    outFile << "Do your best and never give up! \n" << endl;
                    cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
                    cin >> resume;
                    if(resume == 2){
                        loop = false;
                    }
                }
                else {
                    //HeavyWeight (> 80 kg)
                    vector <Exercise*> running;
                    running.push_back(new Running("Running", 1, 5));
                    Routine exerciseRoutine = Routine(running);
                    Exercise *pushup = new PushUps("Push-Ups", 3, 6);
                    exerciseRoutine.addExercise(pushup);
                    Exercise *pullup = new PullUps("Pull-Ups", 2, 3);
                    exerciseRoutine.addExercise(pullup);
                    Exercise *situp = new SitUps("Sit-Ups", 3, 8);
                    exerciseRoutine.addExercise(situp);
                    cout << "Do you wish to calculate the calories including the weight? (1. Yes, 2. No) \n" << endl;
                    cin >> caloriesWithWeight;
                    if(caloriesWithWeight==1){
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                    }
                    else {
                        cout << "Here is your exercise routine: \n" << endl;
                        cout << exerciseRoutine.getRoutineInfo() << endl;
                        outFile << "Here is your exercise routine: \n" << endl;
                        outFile << exerciseRoutine.getRoutineInfo() << endl;
                    }
                    cout << "Do your best and never give up! \n" << endl;
                    outFile << "Do your best and never give up! \n" << endl;
                    cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
                    cin >> resume;
                    if(resume == 2){
                        loop = false;
                    }
                }
            }
            else {
                cout << "This program only accepts age that range from 18, to 50 years old, please exit the program and input the correct values" << endl;
                outFile << "This program only accepts age that range from 18, to 50 years old, please exit the program and input the correct values" << endl;
                continue;
            }
            
        } 
        else if(choice == 2){
            cout << "Let's make your own personalized routine of Exercises from the available in this program: \n" << endl;
            cout << "(Note: the duration value for every exercise except Running is set to 10 minutes for the purpose of calculating calories) \n" << endl;
            outFile << "Let's make your own personalized routine of Exercises from the available in this program: \n" << endl;
            outFile << "(Note: the duration value for every exercise except Running is set to 10 minutes for the purpose of calculating calories) \n" << endl;
            vector <Exercise*> exercises;
            Routine exerciseRoutine = Routine(exercises);
            bool loop2 = true;
            int choice3;
            int choice4;
            int choice5;
            while(loop2){
                cout << "What exercise do you wish to add: (1. Running, 2. Push-Ups, 3. Pull-Ups, 4. Sit-Ups, 5. Exit Program)" << endl;
                cin >> choice2;
                if(choice2 == 1){
                    cout << "How many Running exercises? (Put your answer as a full number, no decimals, max value of allowed exercises = 2)" << endl;
                    cin >> choice3;
                    if(choice3 == 1){
                        cout << "What is the value of distance?(Running)" << endl;
                        cin >> distance;
                        cout << "What is the value of duration?(Running)" << endl;
                        cin >> duration;
                        Exercise *running = new Running("Running",distance,duration);
                        exerciseRoutine.addExercise(running);
                        cout << "Do you wish to add more exercises or go see the routine? (1. Add more, 2. Go to created routine)" << endl;
                        cin >> choice5;
                        if (choice5 != 1){
                            loop2 = false;
                        }
                    }
                    else if(choice3 == 2){
                        int distance2;
                        int duration2;
                        cout << "What is the value of the first distance?" << endl;
                        cin >> distance;
                        cout << "What is the value of the first duration?" << endl;
                        cin >> duration;
                        cout << "What is the value of the second distance?" << endl;
                        cin >> distance2;
                        cout << "What is the value of the second duration?" << endl;
                        cin >> duration2;
                        Running *running = new Running("Running",distance,duration);
                        Running *running2 = new Running("Running",distance2,duration2);
                        if(*running == *running2) {
                            cout << "You have created two similar exercise routines of this type, do you wish to continue? (1. Yes, 2. No)" << endl;
                            cin >> choice4;
                            if (choice4 == 1){
                                exerciseRoutine.addExercise(running);
                                exerciseRoutine.addExercise(running2);
                            }
                            else if(choice4 == 2) {
                                delete running;
                                delete running2;
                            }
                            else {
                                cout << "Please select 1 or 2" << endl;
                            }
                        }
                        exerciseRoutine.addExercise(running);
                        exerciseRoutine.addExercise(running2);
                        cout << "Do you wish to add more exercises or go see the routine? (1. Add more, 2. Go to created routine)" << endl;
                        cin >> choice5;
                        if (choice5 != 1){
                            loop2 = false;
                        }
                    }
                    else{
                        cout << "Please introduce a valid number, remember no decimals and no more than 2 exercises" << endl;
                    }      
                }
                else if(choice2 == 2){
                    cout << "How many Push-Ups exercises? (Put your answer as a full number, no decimals, max value of allowed exercises = 2)" << endl;
                    cin >> choice3;
                    if(choice3 == 1){
                        cout << "What is the value of sets?(Push-Ups)" << endl;
                        cin >> sets_push;
                        cout << "What is the value of repetitions?(Push-Ups)" << endl;
                        cin >> repetitions_push;
                        Exercise *pushup = new PushUps("Push-Ups",sets_push,repetitions_push);
                        exerciseRoutine.addExercise(pushup);
                        cout << "Do you wish to add more exercises or go see the routine? (1. Add more, 2. Go to created routine)" << endl;
                        cin >> choice5;
                        if (choice5 != 1){
                            loop2 = false;
                        }
                    }
                    else if(choice3 == 2){
                        int sets_push2;
                        int repetitions_push2;
                        cout << "What is the value of the first sets?" << endl;
                        cin >> sets_push;
                        cout << "What is the value of the first repetitions?" << endl;
                        cin >> repetitions_push;
                        cout << "What is the value of the second sets?" << endl;
                        cin >> sets_push2;
                        cout << "What is the value of the second repetitions?" << endl;
                        cin >> repetitions_push2;
                        PushUps *pushup = new PushUps("Push-Ups",sets_push,repetitions_push);
                        PushUps *pushup2 = new PushUps("Push-Ups",sets_push2,repetitions_push2);
                        if(*pushup == *pushup2) {
                            cout << "You have created two similar exercise routines of this type, do you wish to continue? (1. Yes, 2. No)" << endl;
                            cin >> choice4;
                            if (choice4 == 1){
                                exerciseRoutine.addExercise(pushup);
                                exerciseRoutine.addExercise(pushup2);
                            }
                            else if(choice4 == 2) {
                                delete pushup;
                                delete pushup2;
                            }
                            else {
                                cout << "Please select 1 or 2" << endl;
                            }
                        }
                        exerciseRoutine.addExercise(pushup);
                        exerciseRoutine.addExercise(pushup2);
                        cout << "Do you wish to add more exercises or go see the routine? (1. Add more, 2. Go to created routine)" << endl;
                        cin >> choice5;
                        if (choice5 != 1){
                            loop2 = false;
                        }
                    }
                    else{
                        cout << "Please introduce a valid number, remember no decimals and no more than 2 exercises" << endl;
                    }      
                }
                else if(choice2 == 3){
                    cout << "How many Pull-Ups exercises? (Put your answer as a full number, no decimals, max value of allowed exercises = 2)" << endl;
                    cin >> choice3;
                    if(choice3 == 1){
                        cout << "What is the value of sets?(Pull-Ups)" << endl;
                        cin >> sets_pull;
                        cout << "What is the value of repetitions?(Pull-Ups)" << endl;
                        cin >> repetitions_pull;
                        Exercise *pullup = new PullUps("Pull-Ups",sets_pull,repetitions_pull);
                        exerciseRoutine.addExercise(pullup);
                        cout << "Do you wish to add more exercises or go see the routine? (1. Add more, 2. Go to created routine)" << endl;
                        cin >> choice5;
                        if (choice5 != 1){
                            loop2 = false;
                        }
                    }
                    else if(choice3 == 2){
                        int sets_pull2;
                        int repetitions_pull2;
                        cout << "What is the value of the first sets?" << endl;
                        cin >> sets_pull;
                        cout << "What is the value of the first repetitions?" << endl;
                        cin >> repetitions_pull;
                        cout << "What is the value of the second sets?" << endl;
                        cin >> sets_pull2;
                        cout << "What is the value of the second repetitions?" << endl;
                        cin >> repetitions_pull2;
                        PullUps *pullup = new PullUps("Pull-Ups",sets_pull,repetitions_pull);
                        PullUps *pullup2 = new PullUps("Pull-Ups",sets_pull2,repetitions_pull2);
                        if(*pullup == *pullup2) {
                            cout << "You have created two similar exercise routines of this type, do you wish to continue? (1. Yes, 2. No)" << endl;
                            cin >> choice4;
                            if (choice4 == 1){
                                exerciseRoutine.addExercise(pullup);
                                exerciseRoutine.addExercise(pullup2);
                            }
                            else if(choice4 == 2) {
                                delete pullup;
                                delete pullup2;
                            }
                            else {
                                cout << "Please select 1 or 2" << endl;
                            }
                        }
                        exerciseRoutine.addExercise(pullup);
                        exerciseRoutine.addExercise(pullup2);
                        cout << "Do you wish to add more exercises or go see the routine? (1. Add more, 2. Go to created routine)" << endl;
                        cin >> choice5;
                        if (choice5 != 1){
                            loop2 = false;
                        }
                    }
                    else{
                        cout << "Please introduce a valid number, remember no decimals and no more than 2 exercises" << endl;
                    }
                }
                else if(choice == 4){
                    cout << "How many Sit-Ups exercises? (Put your answer as a full number, no decimals, max value of allowed exercises = 2)" << endl;
                    cin >> choice3;
                    if(choice3 == 1){
                        cout << "What is the value of sets?(Sit-Ups)" << endl;
                        cin >> sets_sit;
                        cout << "What is the value of repetitions?(Sit-Ups)" << endl;
                        cin >> repetitions_sit;
                        Exercise *situp = new SitUps("Sit-Ups",sets_sit,repetitions_sit);
                        exerciseRoutine.addExercise(situp);
                        cout << "Do you wish to add more exercises or go see the routine? (1. Add more, 2. Go to created routine)" << endl;
                        cin >> choice5;
                        if (choice5 != 1){
                            loop2 = false;
                        }
                    }
                    else if(choice3 == 2){
                        int sets_sit2;
                        int repetitions_sit2;
                        cout << "What is the value of the first sets?" << endl;
                        cin >> sets_sit;
                        cout << "What is the value of the first repetitions?" << endl;
                        cin >> repetitions_sit;
                        cout << "What is the value of the second sets?" << endl;
                        cin >> sets_sit2;
                        cout << "What is the value of the second repetitions?" << endl;
                        cin >> repetitions_sit2;
                        SitUps *situp = new SitUps("Sit-Ups",sets_sit,repetitions_sit);
                        SitUps *situp2 = new SitUps("Sit-Ups",sets_sit2,repetitions_sit2);
                        if(*situp == *situp2) {
                            cout << "You have created two similar exercise routines of this type, do you wish to continue? (1. Yes, 2. No)" << endl;
                            cin >> choice4;
                            if (choice4 == 1){
                                exerciseRoutine.addExercise(situp);
                                exerciseRoutine.addExercise(situp2);
                            }
                            else if(choice4 == 2) {
                                delete situp;
                                delete situp2;
                            }
                            else {
                                cout << "Please select 1 or 2" << endl;
                            }
                        }
                        exerciseRoutine.addExercise(situp);
                        exerciseRoutine.addExercise(situp2);
                        cout << "Do you wish to add more exercises or go see the routine? (1. Add more, 2. Go to created routine)" << endl;
                        cin >> choice5;
                        if (choice5 != 1){
                            loop2 = false;
                        }
                    }
                    else{
                        cout << "Please introduce a valid number, remember no decimals and no more than 2 exercises" << endl;
                    }
                }
                else if(choice == 5){
                    cout << "Exiting Program. Goodbye!" << endl;
                    loop = false;
                }
            }
            cout << "Do you wish to calculate the calories burned with the weight? (1. Yes) (2. No) \n" << endl;
            cin >> caloriesWithWeight;
            if(caloriesWithWeight==1){
                 cout << "Here is your exercise routine: \n" << endl;
                 cout << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
                 outFile << "Here is your exercise routine: \n" << endl;
                 outFile << exerciseRoutine.getRoutineInfoWithWeight(weight) << endl;
            }
            else {
                cout << "Here is your exercise routine: \n" << endl;
                cout << exerciseRoutine.getRoutineInfo() << endl;
                outFile << "Here is your exercise routine: \n" << endl;
                outFile << exerciseRoutine.getRoutineInfo() << endl;
            }
            cout << "Do your best and never give up! \n" << endl;
            outFile << "Do your best and never give up! \n" << endl;
            cout << "Do you wish to remain in the program? (1.Yes 2.No) " << endl;
            cin >> resume;
            if(resume == 2){
                loop = false;
            }
        }
        else if(choice == 3){
            cout << "Exiting the program. Goodbye! \n" << endl;
            loop = false;
        } else {
            cout << "Invalid choice. Please enter 1, 2 or 3." << endl;
        }
        }
        outFile.close();
        return 0;
    }


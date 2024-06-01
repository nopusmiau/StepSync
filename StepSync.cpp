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

    bool loop = true;

    while (loop){
        cout << "Please select a 1 or 2: (1. Create a Routine) (2. Exit Program)" << endl;
        cin >> choice;

        if(choice == 1){
            cout << "Let's create your own Exercise routine based on the data you provided: \n" << endl;
            cout << "(Note: For calculating calories for every exercise except running, duration is by default: 10 minutes) \n" << endl;
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
                    cout << "Here is your exercise routine: \n" << endl;
                    cout << exerciseRoutine.getRoutineInfo() << endl;
                    cout << "Do your best and never give up! \n" << endl;
                    loop = false;
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
                    cout << "Here is your exercise routine: \n" << endl;
                    cout << exerciseRoutine.getRoutineInfo() << endl;
                    cout << "Do your best and never give up! \n" << endl;
                    loop = false;
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
                    cout << "Here is your exercise routine: \n" << endl;
                    cout << exerciseRoutine.getRoutineInfo() << endl;
                    cout << "Do your best and never give up! \n" << endl;
                    loop = false;
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
                    cout << "Here is your exercise routine: \n" << endl;
                    cout << exerciseRoutine.getRoutineInfo() << endl;
                    cout << "Do your best and never give up! \n" << endl;
                    loop = false;
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
                    cout << "Here is your exercise routine: \n" << endl;
                    cout << exerciseRoutine.getRoutineInfo() << endl;
                    cout << "Do your best and never give up! \n" << endl;
                    loop = false;
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
                    cout << "Here is your exercise routine: \n" << endl;
                    cout << exerciseRoutine.getRoutineInfo() << endl;
                    cout << "Do your best and never give up! \n" << endl;
                    loop = false;
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
                    cout << "Here is your exercise routine: \n" << endl;
                    cout << exerciseRoutine.getRoutineInfo() << endl;
                    cout << "Do your best and never give up! \n" << endl;
                    loop = false;
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
                    cout << "Here is your exercise routine: \n" << endl;
                    cout << exerciseRoutine.getRoutineInfo() << endl;
                    cout << "Do your best and never give up! \n" << endl;
                    loop = false;
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
                    cout << "Here is your exercise routine: \n" << endl;
                    cout << exerciseRoutine.getRoutineInfo() << endl;
                    cout << "Do your best and never give up! \n" << endl;
                    loop = false;
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
                    cout << "Here is your exercise routine: \n" << endl;
                    cout << exerciseRoutine.getRoutineInfo() << endl;
                    cout << "Do your best and never give up! \n" << endl;
                    loop = false;
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
                    cout << "Here is your exercise routine: \n" << endl;
                    cout << exerciseRoutine.getRoutineInfo() << endl;
                    cout << "Do your best and never give up! \n" << endl;
                    loop = false;
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
                    cout << "Here is your exercise routine: \n" << endl;
                    cout << exerciseRoutine.getRoutineInfo() << endl;
                    cout << "Do your best and never give up! \n" << endl;
                    loop = false;
                }
            }
            else {
                cout << "Esta fúncion solo acepta edades de 18 hasta 50 años, porfavor salga del programa y vuelva a introducir los valores correctos" << endl;
            }
            
        } else if(choice == 2){
            cout << "Exiting the program. Goodbye! \n" << endl;
            loop = false;
        } else {
            cout << "Invalid choice. Please enter 1 or 2." << endl;
        }
        }
        return 0;
    }

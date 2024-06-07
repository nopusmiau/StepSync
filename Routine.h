# ifndef ROUTINE_H_
# define ROUTINE_H_
# include "Exercise.h"
# include "Running.h"
# include "PushUps.h"
# include "PullUps.h"
# include "SitUps.h"
# include <vector>
# include <typeinfo>
# include <string>

class Routine {
    private:
        vector <Exercise*> exercises;
    public:
        Routine(vector <Exercise*>);
        vector <Exercise*> getExercises();
        void addExercise(Exercise*);
        string getRoutineInfo();
        string getRoutineInfoWithWeight(int);
};

# endif

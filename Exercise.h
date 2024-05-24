# ifndef EXERCISE_H_
# define EXERCISE_H_
# include <iostream>
using namespace std;

class Exercise{
    protected:
        string name;
        float duration;
    public:
        Exercise();
        Exercise(string, float);
        string getName();
        void setName(string);
        float getDuration();
        void setDuration(float);
        virtual float calculateCaloriesBurned() = 0;
};

# endif
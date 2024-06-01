# ifndef EXERCISE_H_
# define EXERCISE_H_
# include <iostream>
using namespace std;

class Exercise{
    protected:
        string name;
    public:
        Exercise();
        Exercise(string);
        string getName();
        void setName(string);
        virtual double calculateCaloriesBurned() = 0;
};

# endif

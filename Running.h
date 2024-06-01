# ifndef RUNNING_H_
# define RUNNING_H_
# include "Exercise.h"
# include <string>

class Running:public Exercise{
    private:
        int distance;
        int duration;
    public:
        Running();
        Running(string, int, int);
        int getDistance();
        string getDistance(string);
        void setDistance(int);
        int getDuration();
        string getDuration(string);
        void setDuration(int);
        double calculateCaloriesBurned() override;
};

# endif

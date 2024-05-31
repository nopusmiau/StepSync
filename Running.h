# ifndef RUNNING_H_
# define RUNNING_H_
# include "Exercise.h"

class Running:public Exercise{
    private:
        float distance;
        float duration;
    public:
        Running();
        Running(string, float, float);
        float getDistance();
        void setDistance(float);
        float getDuration();
        void setDuration(float);
        float calculateCaloriesBurned() override;
};

# endif

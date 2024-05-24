# ifndef CARDIO_H_
# define CARDIO_H_
# include "Exercise.h"

class Cardio:public Exercise{
    private:
        float distance;
    public:
        Cardio();
        Cardio(string, float, float);
        float getDistance();
        void setDistance(float);
        float calculateCaloriesBurned() override;
};

# endif
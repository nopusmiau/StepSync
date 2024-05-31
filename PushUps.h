# ifndef PUSHUPS_H_
# define PUSHUPS_H_
# include "Exercise.h"

class PushUps:public Exercise{
    private:
        int sets;
        int repetitions;
    public:
        PushUps();
        PushUps(string, int, int);
        int getSets();
        void setSets(int);
        int getRepetitions();
        void setRepetitions(int);
        float calculateCaloriesBurned() override;
};

# endif

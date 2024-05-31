# ifndef PULLUPS_H_
# define PULLUPS_H_
# include "Exercise.h"

class PullUps:public Exercise{
    private:
        int sets;
        int repetitions;
    public:
        PullUps();
        PullUps(string, int, int);
        int getSets();
        void setSets(int);
        int getRepetitions();
        void setRepetitions(int);
        float calculateCaloriesBurned() override;
};

# endif

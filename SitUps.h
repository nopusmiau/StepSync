# ifndef SITUPS_H_
# define SITUPS_H_
# include "Exercise.h"

class SitUps:public Exercise{
    private:
        int sets;
        int repetitions;
    public:
        SitUps();
        SitUps(string, int, int);
        int getSets();
        void setSets(int);
        int getRepetitions();
        void setRepetitions(int);
        float calculateCaloriesBurned() override;
};

# endif

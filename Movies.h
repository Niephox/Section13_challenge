#if !defined(MOVIES_H)
#define MOVIES_H

#include <vector>
#include <string>
#include "Movie.h"

using namespace std;

class Movies{
    private:
        vector<Movie> all_movies;
    public:
        void add_movie();
        bool incriment_movie_watched();
        void display();
};

#endif // MOVIES_H

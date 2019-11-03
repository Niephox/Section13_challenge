#ifndef _MOVIES_H_
#define _MOVIES_H_


#include <vector>
#include <string>
#include "Movie.h"

using namespace std;

class Movies{
    private:
        vector<Movie> all_movies;
    public:
        Movies(); // constructor
        
        void add_movie();
        bool incriment_movie_watched();
        void display() const;
};


#endif // _MOVIES_H_
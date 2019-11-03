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
        
        void add_movie(string name , string rating, int watched);
        bool increment_movie_watched(string name);
        void display() ;
};


#endif // _MOVIES_H_
#ifndef _MOVIE_H_
#define _MOVIE_H_

#include<iostream>
#include <string>
 

using namespace std;

class Movie{
   
    private:
        string  name;
        string  rating;
        int watched;      
    
    public:
        Movie(string  name , string  rating , int watched ); // Constructor
        string get_name(){return name;}
        string get_rating(){return rating;}
        int get_watched(){return watched;}
        void increment_watched(){
            watched++;
        }
};


#endif // MOVIE_H 
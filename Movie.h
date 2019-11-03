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
};


#endif // MOVIE_H 
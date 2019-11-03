#include <iostream>
#include <string>
#include "Movies.h"

using namespace std;


int main(){

    Movies movies;
    movies.display();
    
    movies.add_movie( "Big", "PG-13",2);                 // OK
    movies.add_movie( "Star Wars", "PG",5);             // OK
    movies.add_movie("Cinderella", "PG",7);  
    
    movies.display();

    cout << "Adding more movies  \n\n";
    movies.add_movie( "Cinderella", "PG",7);            // Already exists
    movies.add_movie( "Ice Age", "PG",12);              // OK

    movies.display();

    cout << "Incrementing Movie count " << endl;
    movies.increment_movie_watched( "Big");                    // OK
    movies.increment_movie_watched("Ice Age");              // OK
    
    movies.display();    // Big and Ice Age watched count incremented by 1
    
    cout << "Incrementing Movie count " << endl;
    movies.increment_movie_watched("XXX");         // XXX not found
    
    system("pause");
    return 0;
}
#include <iostream>
#include <vector>
#include "Movies.h"
#include "Movie.h"

using namespace std;


Movies::Movies(){

};

void Movies::display()   {
    cout << "\n ====================================== \n Vector size: ";
    cout << all_movies.size();
    cout << endl;
    if(all_movies.size() != 0 ){
        cout << "\n Printing Movies...\n" <<endl << endl;
       
        for(int i{0} ; i< all_movies.size(); ++i)
        {   
            cout <<  " || ";
            cout << all_movies.at(i).get_name(); 
            cout <<  " , ";
            cout << all_movies.at(i).get_rating(); 
            cout <<  " , ";
            cout << all_movies.at(i).get_watched(); 
            cout <<  "\n";
        }
        cout <<"\n ====================================== \n"<< endl;
    }
    else {
        cout << "\nThere are no movies inserted" <<endl;
        cout <<"\n ====================================== \n"<< endl;
    }
};

void Movies::add_movie(string name,string rating , int watched)
{
    Movie movie{name,rating,watched};

    bool exists = false;

    for (int i {0} ; i< all_movies.size() ; ++i)
    {
        if(all_movies.at(i).get_name() == movie.get_name() )
        {
            exists = true ;
            break;
        }
    }

    if(!exists)
    {
        all_movies.push_back(movie);
        cout << "\nMovie added: " << movie.get_name()  << endl;
    }
    else
    {   
        cout << movie.get_name() << " already exists. \n" << endl;
    }
    
}

bool Movies::increment_movie_watched(string name)
{
    for(int i{0}; i < all_movies.size() ; ++i)   
    {
        if(all_movies.at(i).get_name() == name)
            {
                all_movies.at(i).increment_watched();
                cout << name  << " incremented watched by 1 !" << endl;
                return true;
            }
        
    }
    cout << name << " doesnt exist." << endl;
    return false;
}





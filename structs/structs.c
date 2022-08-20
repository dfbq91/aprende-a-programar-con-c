#include <stdio.h>
#include <string.h>

struct Actor {
    char *name;
    int age;
};

struct Movie {
    char *name;
    int year;
    struct Actor main_actor;
};

// struct Movie change_year(struct Movie movie) { /* Bad idea, duplicates size */
//     movie.year = 2008;
//     return movie;
// }

void change_year(struct Movie *movie) {
    // (*movie).year = 2008; // One way
    movie->year = 2008; // Best way
}

/**
 * Structs
 * @return int
 * */
int main() {
    /* First way to add values to a structure */

    // struct Movie movie;
    // movie.year = 2003;
    // movie.name = "Troya";
    // strcpy(movie.main_actor, "Bradd Pitt");

    /* Second way to add values to a structure */

    // struct Movie movie = { "Bradd Pitt", 2004, "Troya" };

    /* Third way to add values to a structure */

    // struct Movie movie = { .main_actor = "Bradd Pitt", .name = "Troya", .year = 2004 };

    // printf("The movie is %s. Its main actor is %s. Its release year was %d\n",
    //        movie.name, movie.main_actor, movie.year);


    /* We can use an struct inside another struct */

    struct Actor actor = { .name = "Bradd Pitt", .age = 38 };
    struct Movie movie = { .main_actor = actor, .name = "Troya", .year = 2004 };
    printf("The movie is %s. Its main actor is %s. Its release year was %d\n",
           movie.name, movie.main_actor.name, movie.year);

    /* If we need to change the year of the movie, send it as value duplicastes struct size (bad idea). */

    // struct Movie modified_movie = change_year(movie);

    // printf("The movie is %s. Its main actor is %s. Its release year was %d\n",
    //        modified_movie.name, modified_movie.main_actor.name, modified_movie.year);


    /* Instead, we can send its address, i.e work as a pointer to struct */

    change_year(&movie);
    printf("The movie is %s. Its main actor is %s. Its release year was %d\n",
           movie.name, movie.main_actor.name, movie.year);

    return 0;
}
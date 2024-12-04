#pragma once


//Pas les lettres : K,X,Y,Z et W

enum{ MAX_CHEVALET = 88 , MAX_CHEVALET_JOUEUR = 12};

typedef struct
{
    char lettre[MAX_CHEVALET];
    int nb_lettres;
} Chevalet;

void initChevalet(Chevalet *c);



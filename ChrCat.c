//
// Created by David Arteaga on 10/19/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "error.h"
#include "ChrCat.h"
#define  BUFFER 1000
#define MAXCATS 10




// Function counts the categories against str and stores and returns them in countsArray
// it calls the function charcounter which compares the char from input against the chrcats array
// it has call to toString method that prints summary of the characters counts
// error for malloc allocation failure
static void error(char *s) {
    fprintf(stderr,"error: %s\n",s);
    exit(1);
}

int catCounter(char *str, ssize_t len, int countsArray[]) {

    for (int i = 0; i < CATEGORIES; i++) {
        countsArray[i] = 0;
    }

    int arraylen = 0;

    for (int j = 0; j < CATEGORIES; j++) {
        arraylen = my_strlen(chrcats[j]);

        for (int i = 0; i < arraylen; i++) {

            charCounter(str, len, i, j, countsArray);
        }


    }

    char *string = "";
    for (int i = 0; i < CATEGORIES; i++) {
        string = charToString(i);
        printf("Category is: %s Total is: %d\n", string, countsArray[i]);
        free(string);
    }
    return countsArray;
}


//takes character from input, len, int i, int j, and countsArray
//fills countsArray with number of each category count
void charCounter(char *character, ssize_t len, int i, int j, int countsArray[]) {

    for (int k = 0; k < len; k++) {
        if (character[k] == chrcatrs[j]->characters[i]) {
            ++countsArray[j];
        }
    }

}


//Streng length method used to count the size of chrcats arrays
int my_strlen(ChrCatR chrcatrs) {
    char *c = chrcatrs->characters;
    int i = 0;
    while (c[i] != '\0') {
        i++;
    }
    return i;


}

//to string method to print summary of results
extern char *charToString(int i) {
    char *ts;
    asprintf(&ts, "%s: '%s'\n", chrcatrs[i]->charName, chrcatrs[i]->characters);
    return ts;
}
//allocates space with malloc and checks for failure then returns r
static  ChrCatR newCharCatRep() {
    ChrCatR r = (ChrCatR) malloc(sizeof(*r));
    if (!r)
        error("malloc() failed");
    return r;
}
//adding new categories
extern ChrCat newCharCat(char *charName, char *characters) {
    ChrCatR r = newCharCatRep();
    r->charName = charName;
    r->characters = characters;
    catCounts();

    return (ChrCat) r;
}



// Counts the numbers of catergories currently in the struct
extern int catCounts() {
    int count = 0;
    for (int i = 0; chrcatrs[i] != NULL; i++) {
        count++;
    }
}


extern void rangeFinder() {
    int lowerBound = 0;
    int upperBound = 0;
    int len = 0;

    for (int i= 0; chrcatrs[i] != NULL; i++) {
        char *temp = NULL;
        temp = (char *) malloc(sizeof(char) * BUFFER);
        int charCount = 0;
        for (int j = 0; chrcatrs[i]->characters[j] != '\0'; j++) {
            if (chrcatrs[i]->characters[0] == '^' && charCount == 0) {
                temp[0] = '^';
                charCount++;
            }

        }
    }

}
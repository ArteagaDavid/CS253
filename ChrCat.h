//
// Created by David Arteaga on 10/19/22.
//

#ifndef HW4_CHRCAT_H
#define HW4_CHRCAT_H
#define CATEGORIES 3

typedef void *ChrCat;
typedef ChrCat ChrCats[CATEGORIES+1];
ChrCats chrcats;

typedef struct {
    char *charName;
    char *characters;
} *ChrCatR;


typedef ChrCatR ChrCatRs[CATEGORIES+1];
ChrCatRs chrcatrs;

extern int catCounter(char* str,ssize_t len, int countsArray[]);
extern void charCounter(char *character,ssize_t len, int i, int j, int countsArray[]);
extern int my_strlen();
extern char *charToString(int i);
extern int catCounts();
extern void rangeFinder();
extern ChrCat newCharCat(char *charName, char *characters);


#endif //HW4_CHRCAT_H

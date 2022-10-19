//
// Created by David Arteaga on 10/19/22.
//

#include <stdio.h>
#include <stdlib.h>
#include "ChrCat.h"






int main( int argc, char *argv[]) {

    // hardcoded categories
    chrcats[0] = newCharCat("lowercase vowels","aeoui");
    chrcats[1] = newCharCat("digits","1234567890");
    chrcats[2] = newCharCat("lower","abcdefghijklmnopqrstuvwxyz");
    chrcats[3] = newCharCat("lowercase consonants", "bcdfghjklmnpqrstvwxyz");

    int catNum = catCounts();
//    printf("Please enter a category name:\n")
    if(argc  > 1) {
        printf("Now enter desired characters:\n");
        for (int i = 1; i <argc; i++) {
            chrcats[catNum] = newCharCat(argv[i], argv[i + 1]);
            catNum++;
            i++;
        }

    }

//HW2 Logic below
//    char* str = 0;
//
//    size_t n=0;
//
//    printf("Enter a string  \n");
//
//    ssize_t  len = getline(&str,&n,stdin);
//
//    int countsArray[CATEGORIES];
//
//    catCounter(str,len,countsArray);
//
//    free(str);

    return 0;
}
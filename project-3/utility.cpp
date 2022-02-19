/*
 * utility.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * <#Names#>
 * <#Uniqnames#>
 *
 * EECS 183: Project 3
 * Winter 2022
 *
 * <#description#>
 */

#include "utility.h"
#include <iostream>


string toUpperCase(string original) {
    for (int i = 0; i < original.size(); i++){
        if (isalpha(original.at(i))){
            original.at(i) = toupper(original.at(i));
        }
    }
    return original;
}

string removeNonAlphas(string original) {
    string newStr = "";
    for (int i = 0; i < original.size(); i++){
        if (isalpha(original.at(i))){
            newStr += original.at(i);
        }
    }
    return newStr;
}

string removeDuplicate(string original) {
    bool isDupe = false;
    string noDuplicates = "";
    string newStr = "";
    for (int i = 0; i < original.size(); i++){
        for (int k = 0; k < noDuplicates.size(); k++){
            if (original.at(i) == noDuplicates.at(k)){
                isDupe = true;
                break;
            } else {
                isDupe = false;
            }
        }
        if (!(isDupe)){
            newStr += original.at(i);
        }
        noDuplicates += original.at(i);
    }
    // returning a string to avoid compile error
    return newStr;
}

int charToInt(char original) {
    int newInt = original - '0';
    return newInt;
}

////////////////////////////////////////////////////////////////////////////////
// Do not touch code below. ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void printGrid(const char grid[SIZE][SIZE]) {
    for (int col = 0; col < SIZE; col++) {
        cout << " ---";
    }
    cout << endl;
    for (int row = 0; row < SIZE; row++) {
        cout << "| ";
        for (int col = 0; col < SIZE; col++) {
            cout << string(1, grid[row][col]) + " | ";
        }
        cout << endl;
        for (int col = 0; col < SIZE; col++) {
            cout << " ---";
        }
        cout << endl;
    }
}

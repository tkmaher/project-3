/*
 * test.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * EECS 183: Project 3
 * Winter 2022
 *
 * Testing ciphers and utility functions
 */

#include <iostream>
#include <string>

#include "utility.h"
#include "caesar.h"
#include "vigenere.h"
#include "polybius.h"

using namespace std;


void testToUpperCase();

void testRemoveNonAlphas();

void testRemoveDuplicate();

void testCharToInt();

void testShiftAlphaCharacter();

void testCaesarCipher();

void testVigenereCipher();

void testFillGrid();

void testMixKey();

void testFindInGrid();

void testPolybiusSquare();


void startTests(){
    //MAKE SURE NONE OF THESE VIOLATE THE REQUIRES CLAUSE.
    testToUpperCase();
    cout << endl;
    testRemoveNonAlphas();
    cout << endl;
    testRemoveDuplicate();
    cout << endl;
    testCharToInt();
    cout << endl;
    testShiftAlphaCharacter();
    cout << endl;
    testCaesarCipher();
    cout << endl;
    testVigenereCipher();
    cout << endl;
    testFillGrid();
    cout << endl;
    testMixKey();
    cout << endl;
    testFindInGrid();
    cout << endl;
    testPolybiusSquare();
}

void testToUpperCase(){
    cout << "Now testing function toUpperCase()." << endl;
    cout << "Expected: 'UPPER', actual: " << toUpperCase("UPPER") << endl;
    cout << "Expected: '1A2B3C', actual: " << toUpperCase("1a2b3c") << endl;
    cout << "Expected: '99999', actual: " << toUpperCase("99999") << endl;
}

void testRemoveNonAlphas(){
    cout << "Now testing function removeNonAlphas()." << endl;
    cout << "Expected: 'Alpha', actual: " << removeNonAlphas("9001Alpha") << endl;
    cout << "Expected: 'abc', actual: " << removeNonAlphas("abc") << endl;
    cout << "Expected: 'C', actual: " << removeNonAlphas("C++") << endl;
}

void testRemoveDuplicate(){
    cout << "Now testing function removeDuplicate()." << endl;
    cout << "Expected: 'Helo Wrd', actual: " << removeDuplicate("Hello World") << endl;
    cout << "Expected: 'abc1', actual: " << removeDuplicate("abc11") << endl;
    cout << "Expected: 'C+', actual: " << removeDuplicate("C++") << endl;
}

void testCharToInt(){
    cout << "Now testing function charToInt()." << endl;
    cout << "Expected: 1, actual: " << charToInt('1') << endl;
    cout << "Expected: 9, actual: " << charToInt('9') << endl;
    cout << "Expected: 0, actual: " << charToInt('0') << endl;
}

void testShiftAlphaCharacter(){
    cout << "Now testing function charToInt()." << endl;
    cout << "Expected: d, actual: " << shiftAlphaCharacter('b', 2) << endl;
    cout << "Expected: C, actual: " << shiftAlphaCharacter('X', 5) << endl;
    cout << "Expected: x, actual: " << shiftAlphaCharacter('z', -2) << endl;
    cout << "Expected: V, actual: " << shiftAlphaCharacter('X', 50) << endl;
}

void testCaesarCipher(){
    //implement
}

void testVigenereCipher(){
    //implement
}


void testFillGrid(){
    //implement
}

void testMixKey(){
    //implement
}

void testFindInGrid(){
    //implement
}

void testPolybiusSquare(){
    //implement
}

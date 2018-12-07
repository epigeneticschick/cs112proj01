/*
 * ReversePoemtester.cpp tests the Reverse Poem class
 *Lorrayya Williams
 *  Created on: Nov 3, 2018 for CS 112
 *      Author: llw5
 */

#include "ReversePoemtester.h"
#include <cassert>

using namespace std;


void ReversePoemtester::runtests(){
	cout << "Testing Reverse Poem Class ... " << endl;
	testconstructor();
	testgetTitle();
	testgetAuthor();
	testgetBody();
	testgetBodyReversed();
	cout << "All Tests Passed!" << endl;
}

void ReversePoemtester::testconstructor(){
	cout << " Testing Constructor... " << flush;
	ReversePoem r1("anorexia.txt");
	assert(r1.getTitle() == "Anorexia");
	assert(r1.getAuthor()== "Anonymous");
	cout << r1.getBody() << endl;
	cout << r1.getBodyReversed() << endl;
	cout << " Passed!" << endl;

}

void ReversePoemtester::testgetTitle(){
	cout << "Testing getTitle() ... " << flush;
	ReversePoem r("cats.txt");
	assert(r.getTitle() == "Cats");
	cout << "Passed!" << endl;
}

void ReversePoemtester::testgetAuthor(){
	cout << "Testing getAuthor() ... " << flush;
	ReversePoem r("cats.txt");
	assert(r.getAuthor()== "Leo J. Smada");
	cout << "Passed!" << endl;
}

void ReversePoemtester::testgetBody(){
	cout << "Testing getBody() ... " << flush;
	ReversePoem r("cats.txt");
	assert( r.getBody() == "I love it when cats rub against me.\nI could never say\nI hate those purring felines.\n");
	cout << "Passed!" << endl;
}

void ReversePoemtester::testgetBodyReversed(){
	cout << "Testing getBodyReversed() ... " << flush;
	ReversePoem r("cats.txt");
	assert(r.getBody() != r.getBodyReversed());
	assert(r.getBodyReversed() == "\nI hate those purring felines.\nI could never say\nI love it when cats rub against me.\n");
	cout << "Passed!" << endl;
}

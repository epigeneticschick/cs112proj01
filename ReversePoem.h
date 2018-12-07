/*Reverses a Poem within a text file using Stacks
 * ReversePoem.h
 * Lorrayya Williams
 *  Created on: Nov 3, 2018 for CS 112
 *      Author: llw5
 */

#ifndef REVERSEPOEM_H_
#define REVERSEPOEM_H_
#include "Stack.h"
#include <string>

using namespace std;

class ReversePoem {
public:
	ReversePoem(string filename);
	string getTitle();
	string getAuthor();
	string getBody();
	string getBodyReversed();

private:
	string myTitle;
	string myAuthor;
	string myBody;
	string reversedBody;

};


#endif /* REVERSEPOEM_H_ */

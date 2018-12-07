/* Reverses a Poem within a text file using Stacks
 * ReversePoem.cpp
 * Lorrayya Williams
 *
 *  Created on: Nov 3, 2018 for CS 112
 *      Author: llw5
 */

#include "ReversePoem.h"
#include <fstream>
#include <iostream>
#include <cassert>

using namespace std;

//Constructor
ReversePoem::ReversePoem(string filename){
	ifstream in(filename.c_str());
	assert(in.is_open());
	getline(in, myTitle); // intializes my Title
	getline(in, myAuthor); // my Author
	Stack<string> s(1); //creates stack
	string line;
	getline(in,line);
	while(!in.eof()){
		getline(in, line);
		try {
			s.push(line);
		}
		catch(StackException& se){
			s.setCapacity(s.getCapacity()*2);
			s.push(line);
		}
		if(line != ""){
			myBody += line + '\n';
		}

	}
	in.close();
	while (!s.isEmpty()){
		reversedBody += s.pop() + '\n';
	}
}

	// get Title Accessor
string	ReversePoem::getTitle(){
		return myTitle;
	}

	//get Author Accessor
string	ReversePoem::getAuthor(){
		return myAuthor;
	}

	// get Body accessor
string ReversePoem::getBody(){
	return myBody;
}
	///get Body REversed accessor
string	ReversePoem::getBodyReversed(){
		return reversedBody;
	}

 /* namespace std */

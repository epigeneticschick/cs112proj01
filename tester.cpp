/* tester.cpp is a "driver" to run the tests in the StackTester class.
 * Joel Adams, for CS 112 at Calvin College.
 */
 
#include "StackTester.h"
#include "ReversePoem.h"
#include "ReversePoemtester.h"
#include <iostream>
using namespace std;

int main() {
	//	StackTester st;
	//	st.runTests();
	ReversePoemtester r;
	r.runtests();
	cout << "\nEnter the name of the poem file: ";
	string poemFile;
	cin >> poemFile;
	ReversePoem reversePoem(poemFile);
	cout << reversePoem.getTitle() << "\n"
			<< reversePoem.getAuthor() << "\n"
			<< "\n*** Top-To-Bottom ***\n\n"
			<< reversePoem.getBody()
			<< "\n\n*** Bottom-To-Top ***\n\n"
			<< reversePoem.getBodyReversed()
			<< endl;
}


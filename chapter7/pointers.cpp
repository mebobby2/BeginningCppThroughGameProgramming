#include <iostream>
#include <string>
using namespace std;

//You should use references all the time, until you MUST use a pointer.
//These are the cases when you must use a pointer over a reference.
//1. References cannot point to null objects. So if there is chance your reference
//may point to a null, you should use a pointer. Pointers can point to null objects.
//2. You cannot re-assign references. If there is chance that you may need to re-assign
//a reference in your program, you must use a pointer.
//3. The other small difference is you can declare but NOT initialize a pointer, but for
//references, you must declare and initialize a pointer. This lihks back to point 1 where
//references cannot point to nulls.

int main()
{
  int* pAPointer; //declare a pointer

  //constant pointer eg int* const pAPointer = 100
  //Means the pointer always need to point to the same memory address.

  int* pScore = 0; //declare and initialize a pointer. Programmers treat pointers to 0 as null pointers

  int score = 1000;
  pScore = &score; //assign pointer pScore address of variable score

  cout << "Assigning &score to pScore\n";
  cout << "&score is: " << &score << "\n"; //address of score variable
  cout << "pScore is: " << pScore << "\n"; //address stored in pointer
  cout << "score is: " << score << "\n";
  cout << "*pScore is: " << *pScore << "\n\n"; //value pointed to by pointer

  cout << "Adding 500 to score\n";
  score += 500;
  cout << "score is: " << score << "\n";
  cout << "*pScore is: " << *pScore << "\n\n";

  cout << "Adding 500 to *pScore\n";
  *pScore += 500;
  cout << "score is: " << score << "\n";
  cout << "*pScore is: " << *pScore << "\n\n";

  cout << "Assigning &newScore to pScore\n";
  int newScore = 5000;
  pScore = &newScore;
  cout << "&newScore is: " << &newScore << "\n";
  cout << "pScore is: " << pScore << "\n";
  cout << "newScore is: " << newScore << "\n";
  cout << "*pScore is: " << *pScore << "\n\n";

  cout << "Assigning &str to pStr\n";
  string str = "score";
  string* pStr = &str; //pointer to string object
  cout << "str is: " << str << "\n";
  cout << "*pStr is: " << *pStr << "\n";
  cout << "(*pStr).size() is: " << (*pStr).size() << "\n";
  cout << "pStr->size() is: " << pStr->size() << "\n";
  return 0;
}
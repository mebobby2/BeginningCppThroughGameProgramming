#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  // computers generate pseudorandom numbers - not truly random numbers - based on a
  // forumula. One way to think about this is to imagine that the computer
  // reads from a huge book of predetermined numbers. By reading from this book,
  // the computer can appear to produce a sequence of random numbers.
  // But there’s a problem: The computer always starts reading the book from the
  // beginning. Because of this, the computer will always produce the same series of
  // “random” numbers in a program. In games, this isn’t something we’d want. We
  // wouldn’t, for example, want the same series of dice rolls in a game of craps every
  // time we played.
  // A solution to this problem is to tell the computer to start reading from some
  // arbitrary place in the book when a game program begins. This process is called
  // seeding the random number generator. Game programmers give the random
  // number generator a number, called a seed, to determine the starting place in this
  // sequence of pseudorandom numbers.

  srand(static_cast<unsigned int>(time(0))); //seed random number generator
  int randomNumber = rand(); //generate random number
  int die = (randomNumber % 6) + 1; // get a number between 1 and 6
  cout << "You rolled a " << die << endl;
  return 0;
}
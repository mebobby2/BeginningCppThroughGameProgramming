#include <iostream>
using namespace std;

int main()
{
  unsigned int score = 5000;
  cout << "score: " << score << endl;

  //altering the value of a variable
  score = score + 100;
  cout << "score: " << score << endl;

  //combined assignment operator
  score += 100;
  cout << "score: " << score << endl;

  //increment operators
  int lives = 3;
  ++lives;
  cout << "lives: " << lives << endl;

  lives = 3;
  lives++;
  cout << "lives: " << lives << endl;

  lives = 3;
  int bonus = ++lives * 10; //Equilvalent to lives += 1, lives * 10
  cout << "lives, bonus = " << lives << ", " << bonus << endl;

  lives = 3;
  bonus = lives++ * 10; //Equilvalent to lives * 10, lives += 1
  cout << "lives, bonus = " << lives << ", " << bonus << endl;

  //integer wrap around
  score = 4294967295; //this value is to big for an int, so it wraps around, back to 0. 0 since it has the unsigned modifier
  cout << "\nscore: " << score << endl;
  ++score;
  cout << "score: " << score << endl;

  return 0;
}
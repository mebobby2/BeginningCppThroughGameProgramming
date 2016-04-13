#include <iostream>
using namespace std;
int main()
{
  //These are the 4 basic types of c++
  int score;
  double distance;
  char playAgain;
  bool shieldsUp;

  //short (and long) are modifiers. 
  //short decreases the storage space for variable while long increases it.
  //short and long can modify int. long can also modify double.
  //signed and unsigned are also modifiers. However, they do not modify the storage space, they
  //modify the range of values. signed means the variable can store both positive and negative 
  //values, while unsigned means that a variable can store only positive.
  //signed is the default for integer types.

  // short int -32,768 to 32,767
  // unsigned short int 0 to 65,535
  // int -2,147,483,648 to 2,147,483,647
  // unsigned int 0 to 4,294,967,295
  // long int -2,147,483,648 to 2,147,483,647
  // unsigned long int 0 to 4,294,967,295
  // float 3.4E +/- 38 (seven significant digits)
  // double 1.7E +/- 308 (15 significant digits)
  // long double 1.7E +/- 308 (15 significant digits)
  // char 256 character values
  // bool true or false

  short lives, aliensKilled;
  score = 0;

  distance = 1200.76;
  playAgain = 'y';
  shieldsUp = true;
  lives = 3;
  aliensKilled = 10;

  double engineTemp = 6572.89;

  cout << "\nscore: " << score << endl;
  cout << "distance: " << distance << endl;
  cout << "playAgain: " << playAgain << endl;

  cout << "lives: " << lives << endl;
  cout << "aliensKilled: "<< aliensKilled << endl;
  cout << "engineTemp: " << engineTemp << endl;

  int fuel;
  cout << "\nHow much fuel? ";
  cin >> fuel;
  cout << "fuel: " << fuel << endl;

  //typedef defines a new type. In this case ushort = unsigned short int
  typedef unsigned short int ushort;
  ushort bonus = 10;
  cout << "\nbonus: " << bonus << endl;

  return 0;
}
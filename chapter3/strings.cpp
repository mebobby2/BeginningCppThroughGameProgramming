#include <iostream>
#include <string>
using namespace std;

int main()
{
  string word1 = "Game";
  string word2("Over");
  string word3(3, '!');

  //The string type replaces the C-style strings.
  //C-style strings are a array of chars terminated by a null char.
  //e.g. char phrase[] = "Game Over!!!";
  //strings can work seamlessly with C-style strings, that is, you can 
  //concatenate a string and C-style string.
  //Moral is to use strings whereever possible but be prepared to use 
  //C-style strings if necessary.

  string phrase = word1 + " " + word2 + word3;
  cout << "The phrase is: " << phrase << "\n\n";

  cout << "The phrase has " << phrase.size() << " characters in it.\n\n";

  cout << "The character at position 0 is: " << phrase[0] << "\n\n";

  cout << "Changing the character at position 0.\n";
  phrase[0] = 'L';
  cout << "The phrase is now: " << phrase << "\n\n";

  for (unsigned int i = 0; i < phrase.size(); ++i)
  {
  cout << "Character at position " << i << " is: " << phrase[i] << endl;
  }

  cout << "\nThe sequence ’Over’ begins at location ";
  cout << phrase.find("Over") << endl;

  if (phrase.find("eggplant") == string::npos)
  {
  cout << "’eggplant’ is not in the phrase.\n\n";
  }

  phrase.erase(4, 5);
  cout << "The phrase is now: " << phrase << endl;

  phrase.erase(4);
  cout << "The phrase is now: " << phrase << endl;

  phrase.erase();
  cout << "The phrase is now: " << phrase << endl;

  if (phrase.empty())
  {
  cout << "\nThe phrase is no more.\n";
  }
  return 0;
}
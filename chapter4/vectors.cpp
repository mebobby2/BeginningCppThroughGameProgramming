#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  //Vectors are the same as arrays but are dynamic size and supports utility functions 
  //such as searching, sorting etc.
  //Vectors come with a performance hit. i.e. every vector has a specific capacity.
  //When the vector's size reaches its capacity, the vector reallocates memory and 
  //might even copy all the vector's elements to this newly seized chunk of memory
  //real estate.
  vector<string> inventory; 
  inventory.push_back("sword");
  inventory.push_back("armor");
  inventory.push_back("shield");

  cout << "You have " << inventory.size() << " items.\n";

  cout << "\nYour items:\n";
  for (unsigned int i = 0; i < inventory.size(); ++i)
  {
    cout << inventory[i] << endl;
  }

  cout << "\nYou trade your sword for a battle axe.";
  inventory[0] = "battle axe";
  cout << "\nYour items:\n";
  for (unsigned int i = 0; i < inventory.size(); ++i)
  {
    cout << inventory[i] << endl;
  }

  cout << "\nThe item name ’" << inventory[0] << "’ has ";
  cout << inventory[0].size() << " letters in it.\n";

  cout << "\nYour shield is destroyed in a fierce battle.";
  inventory.pop_back();
  cout << "\nYour items:\n";
    for (unsigned int i = 0; i < inventory.size(); ++i)
  {
    cout << inventory[i] << endl;
  }

  cout << "\nYou were robbed of all of your possessions by a thief.";
  inventory.clear();
  if (inventory.empty())
  {
    cout << "\nYou have nothing.\n";
  }
  else
  {
    cout << "\nYou have at least one item.\n";
  }
  return 0;
}
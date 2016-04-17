#include <iostream>
#include <string>
#include <vector>
using namespace std;

//returns a reference to a string.
//Make sure the value the pointer points to is also
//available outside of the function scope. In this case it is.
//However, if we return a reference to a local variable defined
//in the function, it is illegal, because the variable will no 
//longer exist when the function ends.
string& refToElement(vector<string>& vec, int i)
{
  return vec[i];
}

int main()
{
  vector<string> inventory;
  inventory.push_back("sword");
  inventory.push_back("armor");
  inventory.push_back("shield");
  //displays string that the returned reference refers to
  cout << "Sending the returned reference to cout:\n";
  cout << refToElement(inventory, 0) << "\n\n";
  //assigns one reference to another -- inexpensive assignment
  cout << "Assigning the returned reference to another reference.\n";
  string& rStr = refToElement(inventory, 1);
  cout << "Sending the new reference to cout:\n";
  cout << rStr << "\n\n";
  //copies a string object -- expensive assignment
  cout << "Assigning the returned reference to a string object.\n";
  //It cant assign the reference returned since str is not a reference type. Intead,
  //it copies the value the reference points to to str. This has a little overhead
  //compared to the upper assignment.
  string str = refToElement(inventory, 2); 
  cout << "Sending the new string object to cout:\n";
  cout << str << "\n\n";
  //altering the string object through a returned reference
  cout << "Altering an object through a returned reference.\n";
  rStr = "Healing Potion";
  cout << "Sending the altered object to cout:\n";
  cout << inventory[1] << endl;
  return 0;
}

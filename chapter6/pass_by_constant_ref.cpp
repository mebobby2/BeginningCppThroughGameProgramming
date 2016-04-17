#include <iostream>
#include <string>
#include <vector>
using namespace std;


//parameter vec is a constant reference to a vector of strings.
//We use pass by reference because it saves us the overhead of pass by
//value since pass by value makes a copy of the paramter. For big parameters,
//we want to use pass by reference as there no overhead, however, what if we
//don't want the function to change the underlying value of the reference,
//we use a constant reference. It acts as a ready only access.
//Pass by value for built in types such as bool, int, or float are ok as
//the overhead is slow since they are small.
void display(const vector<string>& vec)
{
  cout << "Your items:\n";
  for (vector<string>::const_iterator iter = vec.begin();
  iter != vec.end(); ++iter)
  {
  cout << *iter << endl;
  }
}

int main()
{
  vector<string> inventory;
  inventory.push_back("sword");
  inventory.push_back("armor");
  inventory.push_back("shield");
  display(inventory);
  return 0;
}

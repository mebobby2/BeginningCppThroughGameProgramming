#include <iostream>
using namespace std;

void increase(int* const array, const int NUM_ELEMENTS)
{
  for (int i = 0; i < NUM_ELEMENTS; ++i)
  {
    array[i] += 500;
  }
}

void display(const int* const array, const int NUM_ELEMENTS)
{
  for (int i = 0; i < NUM_ELEMENTS; ++i)
  {
    cout << array[i] << endl;
  }
}

int main()
{
  cout << "Creating an array of high scores.\n\n";
  const int NUM_SCORES = 3;
  int highScores[NUM_SCORES] = {5000, 3500, 2700};

  cout << "Displaying scores using array name as a constant pointer.\n";
  cout << *highScores << endl;

  // This works because we declare the array highScores as an array of int.
  // Ints in C++ are 4 bytes wide. So when we add the integer 1 to highScores,
  // we are adding 4 bytes to the address pointed to by highScores. These
  // are called pointer arithmetics. 
  // If you print out the memory location of the elements of highScores, you 
  // will see that they are 4 bytes apart.
  cout << *(highScores + 1) << endl; 
  cout << *(highScores + 2) << "\n\n";

  cout << "Increasing scores by passing array as a constant pointer.\n\n";
  increase(highScores, NUM_SCORES);

  cout << "Displaying scores by passing array as a constant pointer to a constant.\n";
  display(highScores, NUM_SCORES);

  return 0;
}
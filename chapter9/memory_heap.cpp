#include <iostream>

using namespace std;

int* intOnHeap()
{
  int* pTemp = new int(20);
  return pTemp;
}

void leak1()
{
  int* drip1 = new int(30);
}

void leak2()
{
  int* drip2 = new int(50);
  drip2 = new int(100); //assigns a new chunk of memory so the int(50) from the line above is 'lost'
  delete drip2;
}

int main()
{
  //The key world 'new' creates a chunk of memory in the heap. In this case,
  //We reserve a memory chunk big enough for an int (4 bytes) in the heap
  //and return a pointer to it. Things stored in are heap are persisted even
  //when the function that initialized it has ended. This gives the programmer
  //more control over memory management. But this means the programm must 
  //deallocate memory themselves and get rid of dangling pointers.
  //By default, C++ stores values in the stack. This means when the function ends
  //the variables are also gone. You want to use the heap for efficiency. For 
  //example, you want to initialize 100 enemies for level 1 of your game inside 
  //the heap and they exist independent of functions in your code, then when level
  //1 ends, you deallocate the enemies. This is more efficient then recreating 
  //your enemies each time.
  int* pHeap = new int;
  *pHeap = 10;
  cout << "*pHeap: " << *pHeap << "\n\n";

  int* pHeap2 = intOnHeap();
  cout << "*pHeap2: " << *pHeap2 << "\n\n";

  cout << "Freeing memory pointed to by pHeap.\n\n";
  delete pHeap;

  cout << "Freeing memory pointed to by pHeap2.\n\n";
  delete pHeap2;

  //get rid of dangling pointers
  pHeap = 0;
  pHeap2 = 0;
  return 0;
}


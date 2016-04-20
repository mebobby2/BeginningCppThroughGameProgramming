#include <iostream>
#include <string>
using namespace std;

class Critter
{
  public:
    Critter(const string& name = "", int age = 0);
    ~Critter(); //destructor prototype
    Critter(const Critter& c); //copy constructor prototype
    Critter& operator=(const Critter& c); //overloaded assignmentop
    void Greet() const;

  private:
    string* m_pName;
    int m_Age;
};

Critter::Critter(const string& name, int age)
{
  cout << "Constructor called\n";
  m_pName = new string(name);
  m_Age = age;
}

Critter::~Critter() //destructor definition
{
  cout << "Destructor called\n";
  delete m_pName; //Need to manually clean up the data stored in the heap
}

Critter::Critter(const Critter& c) //copy constructor definition
{
  cout << "Copy Constructor called\n";
  m_pName = new string(*(c.m_pName));
  m_Age = c.m_Age;
}

Critter& Critter::operator=(const Critter& c) //overloaded assignment op def
{
  cout << "Overloaded Assignment Operator called\n";
  if (this != &c) //Test whether if the object is NOT being assigned to itself.
  {
    delete m_pName;
    m_pName = new string(*(c.m_pName));
    m_Age = c.m_Age;
  }
  return *this;
}

void Critter::Greet() const
{
  cout << "I’m " << *m_pName << " and I’m " << m_Age << " years old.\n";
  cout << "&m_pName: " << cout << &m_pName << endl;
}

void testDestructor();
void testCopyConstructor(Critter aCopy);
void testAssignmentOp();

int main()
{
  testDestructor();
  cout << endl;

  Critter crit("Poochie", 5);
  crit.Greet();
  testCopyConstructor(crit); 
  crit.Greet();
  cout << endl;

  testAssignmentOp();
  return 0;
}

void testDestructor()
{
  Critter toDestroy("Rover", 3);
  toDestroy.Greet();
}

//aCopy is passed by value, so C++ automatically copies makes
//a copy of the Critter, and passes it to the function.
//So, when testCopyConstructor func ends, aCopy's destructor
//will be called, which will deallocate m_pName from the heap.
//If we don't have a manual copy constructor, the same pointer
//to the first m_pName will be copied over to aCopy and so 
//when aCopy's destructor is called, it will deallocate the
//first m_pName and so we will have a dangling pointer!
void testCopyConstructor(Critter aCopy)
{
  aCopy.Greet();
}

void testAssignmentOp()
{
  Critter crit1("crit1", 7);
  Critter crit2("crit2", 9);
  crit1 = crit2;

  crit1.Greet();
  crit2.Greet();
  cout << endl;
  Critter crit3("crit", 11);
  crit3 = crit3;
  crit3.Greet();
}

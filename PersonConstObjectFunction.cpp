#include <iostream>
#include <string>

using namespace std;

class Person 
{
  private:
    string FirstName;
    string LastName;
    int Age;

  public:
    Person(string fn, string ln, int a) : FirstName(fn),LastName(ln),Age(a) {}

    string getFirstName() const 
    {
      return FirstName;
    }

    string getLastName() const
    {
      return LastName;
    }

    string getFullName() const
    {
      return FirstName + " " + LastName;
    }


    int getAge() const 
    {
      return Age;
    }

    void setFirstName(string fn) 
    {
      if (fn.length() == 0)
        cerr << "The specified first name is not valid!";
      else
        FirstName=fn;
    }

    void setLastName(string ln) 
    {
      if (ln.length() == 0)
        cerr << "The specified last name is not valid!";
      else
        LastName = ln;
    }

    void setAge(int a) 
    {
      if (a < 0 || a>130)
        cerr << "The calue of the age must be in the [0,130] interval!";
      else
        Age=a;
    }

};

int main() 
{
  const Person p("John","Smith",45);

  cout << "First name: " << p.getFirstName() << endl;
  cout << "Last name: " << p.getLastName() << endl;
  cout << "Age: " << p.getAge() << endl;

  //p.setFirstName("Jane"); // Error
  //p.setAge(24); // Error

  Person j("July","Mei",34);
  j.setFirstName("Jane");
  j.setAge(24);

  cout << "First name: " << j.getFirstName() << endl;
  cout << "Last name: " << j.getLastName() << endl;
  cout << "Age: " << j.getAge() << endl;
  return 0;
}

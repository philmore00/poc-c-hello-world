#include <iostream>
#include<string>
using namespace std;

// what is the sum of a and b
// sum(a, b)
// 
int sum(int& x, int& y) 
{

  return x + y;

}

void name(string& myName) 
{
  cout << myName << endl;
}

void favoriteFoods(string& foodItem, int& timesEaten) {
  cout << foodItem << endl;
  cout << timesEaten << endl;
}

int personName() {
  string name;
  cout << "WHAT IS YOUR NAME? ";
  getline (cin, name);
  cout << "Nice to meet you " << name << ".\n";

  return 0;
}

int main()
{
  
  int x = 1;
  int y = 7;
  int answer = sum(x, y);

  cout << answer << endl;

  string phil = "Phil";
  string danniel = "danniel";
  string random = "random";

  name(phil);
  name(danniel);
  name(random);

  string favoriteFoodItem = "pizza";
  int timesEaten = 1;

  favoriteFoods(favoriteFoodItem, timesEaten);
  personName();

  return 0;
}

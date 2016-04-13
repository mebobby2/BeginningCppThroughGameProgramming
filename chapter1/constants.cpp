#include <iostream>
using namespace std;

int main()
{
  const int ALIEN_POINTS = 150;
  int aliensKilled = 10;
  int score = aliensKilled * ALIEN_POINTS;
  cout << "score: " << score << endl;

  enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE}; //Begins at 0 and increments - ie NOVICE=0, EASY=1, ...
  difficulty myDifficulty = EASY;

  enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50}; //BOMBER_COST = 26
  shipCost myShipCost = BOMBER_COST;
  cout << "\nTo upgrade my ship to a Cruiser will cost "
  << (CRUISER_COST - myShipCost) << " Resource Points.\n";

  return 0;
}
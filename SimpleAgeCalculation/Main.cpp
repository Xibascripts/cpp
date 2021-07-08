/*
Basic stuff here, first project :)
*/
#include <iostream>
using namespace std;
int maxa = 24;			//set this to the age you wanna flag as old!
int mina = 15;			//set this to the age you wanna flag as young!

main ()
{
  int a;
  int b;
  int c;
  cout << "What year where you born in? \n";
  cin >> a;
  cout << "What year are you in right now? \n";
  cin >> b;
  c = b - a;
  if (c > maxa)
    {
      cout << "You are " << c << " years old! (that's kinda old dude)";
    }
  else if (c < mina)
    {
      cout << "You are " << c << " years old! (that's pretty young bud)";
    }
  else
    {
      cout << "You are " << c << " years old!";
    }
}


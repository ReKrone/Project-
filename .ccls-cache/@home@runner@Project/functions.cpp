#include "functions.h"
#include <fstream>
#include <iostream>
using namespace std;

double Functions::functionF()
{
  double x;

  cout << "\nFunction: 2x + 10 \nPlease input an integer for x: ";
  cin >> x;
  double y = (2 * x) + 10;
  cout << "Your function 2 (" << x << ") + 10 = " << y;

  return 0;
}

double Functions::inverseFunctionF()
{
  double x;

  cout << "\nFunction: (x/2) - 10\nPlease input an integer for x: ";

  cin >> x;
  double y = (x / 2) - 10;
  cout << "Your function (" << x << " / 2) - 10 = " << y;

  return 0;
}

double Functions::functionG()
{
  double x;

  cout << "\nFunction: 15x + 36\nPlease input an integer for x: ";
  cin >> x;
  double y = (15 * x) + 36;
  cout << "Your function 15(" << x << ") + 36 = " << y;

  return 0;
}

double Functions::inverseFunctionG()
{
  double x;

  cout << "\nFunction: (x/15) - 36\nPlease input an integer for x: ";
  cin >> x;
  double y = (x / 15) - 36;
  cout << "Your function (" << x << " / 15) - 36 = " << y;

  return 0;
}

double Functions::functionF_of_G()
{
  double x;

  cout << "\nFunction: 2(g(x)) + 10 \n\t\t= 2(15x + 36) + 10 \n\t\t= 30x + "
          "82\nPlease input an integer for x: ";
  cin >> x;
  double y = (30 * x) + 82;
  cout << "Your function 30(" << x << ") + 82 = " << y;

  return 0;
}

double Functions::functionG_of_F()
{
  double x;

  cout << "\nFunction: 15(f(x)) + 36 \n\t\t= 15(2x + 10) + 36 \n\t\t= 30x + "
          "186\nPlease input an integer for x: ";
  cin >> x;
  double y = (30 * x) + 186;
  cout << "Your function 30(" << x << ") + 186 = " << y;

  return 0;
}
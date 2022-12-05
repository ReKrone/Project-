#include "sequenceAndSumm.h"
#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;


int SequenceAndSumm::geometricProgression()
{
  int b;
  int n;
  int m;
  int count;
  double sum;
    cout << "\nSequence: {3(b)^n}n\u03B5\u2115";
    cout << "\nPlease input a number for b: ";
    cin >> b;
    cout << "\nPlease input a number for n: ";
    cin >> n;
    cout << "\nYour sequence {3(" << b << ")^" << n << "}n\u03B5\u2115 outputs to: (";
                
      double geometricSequence[n];
                
        for (int i = 0; i <= n; i++)
          {
              int f = 0;
              f = pow(b, i);
              cout << (geometricSequence[i] = (3 * f));
              if (i < n)
              {
                cout << ", ";
              }
          }
          cout << ")";
          cout << "\n\nNow, input a number for m to sum m terms \n\nm:";
  cin >> m;
  while (m > n)
    {
      cout << "\nInputted number is too large\nTry again: ";
      cin >> m;
    }

  cout << "\nYour m amount of terms are: (";
  for (count = 0;count < m; count++)
    {
      sum += geometricSequence[count];
      cout << geometricSequence[count];
      if (count < m-1)
      {
        cout << ", ";
      }
    }
  cout << ')';
  cout << "\nYour sum is " << sum;

  return 0;
}

int SequenceAndSumm::arithmeticProgression()
{
  int b;
  int n;
  int m;
  int count;
  double sum;
  cout << "\nSequence: {b+2(n)}n\u03B5\u2115";
  cout << "\nPlease input a number for b: ";
  cin >> b;
  cout << "\nPlease input a number for n: ";
  cin >> n;
  cout << "\nYour sequence {" << b << "+2(" << n << ")}n\u03B5\u2115 outputs to: (";

  int arithmeticSequence[n];

    for (int i = 0; i <= n; i++)
    {
      int e;
      cout << (arithmeticSequence[i] = (b + (i * 2)));
        if (i < n)
          {
            cout << ", ";
          }
    }
  cout << ')';
  cout << "\n\nNow, input a number for m to sum m terms\n\nm: ";
  cin >> m;
  while (m > n)
    {
      cout << "Number inputted is too large.\nTry Again: ";
      cin >> m;
    }
  cout << "\nYour m amount of terms are: (";
  for (count = 0;count < m; count++)
    {
      sum += arithmeticSequence[count];
      cout << arithmeticSequence[count];
    
  if (count < m-1)
  {
    cout << ", ";
  }
    }
  cout << ')';
  cout << "\nYour sum is: " << sum;

  return 0;
}
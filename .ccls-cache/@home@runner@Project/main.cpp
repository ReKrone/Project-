#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
#include "functions.h"
#include "sequenceAndSumm.h"
using namespace std;

int menu();
double functionF();
double functionG();
double inverseFunctionF();
double inverseFunctionG();
double functionF_of_G();
double functionG_of_F();
int tryAgain();
Functions f;
SequenceAndSumm e;

int main() {

  int functionChoice;
  int menuChoice;
  int retry;
  int sequenceSummationChoice;
  int geometricSequence[50];
  int arithmeticSequence[50];
  
      menuChoice = menu();
    
  do {
      
    
      
    retry = 0;

    if (menuChoice == 1) {
      do {
        cout << "\n______Functions______\n\nf(x) = 2x + 10  ,  g(x) = 15x + 36\n\n";
        cout << "Please choose one of the functions listed below: \n";
        cout << "1. f(x) \n2. inverse f(x) \n3. g(x) \n4. inverse g(x) \n5. "
                "f(g(x)) \n6. g(f(x))\n";
        cin >> functionChoice;
        if (functionChoice == 1)  
          {
            f.functionF();
          }
        if (functionChoice == 2)
          {
            f.inverseFunctionF();
          }
        if (functionChoice == 3)
          {
            f.functionG();
          }  
        if (functionChoice == 4)
          {  
            f.inverseFunctionG();
          }
        if (functionChoice == 5)
          {
            f.functionF_of_G();
          }
        if (functionChoice == 6)
          {
            f.functionG_of_F();
          }

        retry = tryAgain();
        
        while (retry > 3)
        {
        cout << "Not an option.";
        retry = tryAgain();
        }
        
      } while (retry > 0 && retry < 2);
      if (retry == 2) {
        cout << "Goodbye.";
        break;
      }
      if (retry == 3) {
        cout << endl << endl;
        menuChoice = menu();
      }
      
    }

      retry = 0;

    if (menuChoice == 2) 
    {
      do
        {
          int n;
          int b;
          int m;
          retry = 0;
          cout << "\n_____Sequences and Summations_____\n\nPlease choose one of the options listed below:\n";
          cout << "1. Geometric Progression and Summation\n2. Arithmetic Progression and Summation\n";
          cout << endl;
          cin >> sequenceSummationChoice;
          
            if (sequenceSummationChoice == 1)
              {
                e.geometricProgression();
              }  
          
            if (sequenceSummationChoice == 2)
              {
                e.arithmeticProgression();
              }
          
            
          

          retry = tryAgain();
          while (retry > 3)
            {
              cout << "Not an option";
              retry = tryAgain();
            }
          
        } while (retry == 1);
        if (retry == 2)
        {
          cout << "Goodbye.";
          break;
        }
        if (retry == 3)
        {
          menuChoice = menu();
        }  
    }
    while (menuChoice > 3 || menuChoice < 1)
    {
      cout << "Not an option.";
      menuChoice = menu();
    }

  } while (menuChoice == 1 || menuChoice == 2);

  cout << "Goodbye. ";
    
  return 0;
}

int menu()
{
  int topic;
  cout << "\nWelcome. \nPlease choose one of the following topics.\n";
  cout << "\n1. Functions \n2. Sequences and Summations \n";

  cout << "\n3. Quit\n\n";

  cin >> topic;

  return topic;
}

int tryAgain()
{
  int tryAgainChoice;
  cout << "\n\nWould you like to try again:\n\n1. Yes\n2. No\n\n3. "
                "Return to menu\n";
        cout << endl;
        cin >> tryAgainChoice;

  return tryAgainChoice;
}
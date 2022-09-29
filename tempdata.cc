/**
* @Miles Emerson
* @Lab 5
* @Sept 29, 2022
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  
  //declare variables
  int high[31];
  int low[31];
  int highest = 0;
  int lowest = 100;
  int sentinal = -100;
  int exitcheck = 0;
  int tablesize;

  //record the temps
  while (exitcheck != -100) {
    cout << "Hello user!\n";
    cout << "We will be recording temperature data for the month of September.\n";
    cout << "Enter the value '-100' at any time to end the task.\n";
    for (int i = 0; i < 30; i++){
      cout << "Enter high and low temperatures for September " << i + 1 << " pressing 'Enter' after each: ";
      cin >> high[i] >> low[i];
      if (high[i] == sentinal){
        exitcheck = sentinal;
        tablesize = i;
        break;
        } else if (high[i] > highest){
        highest = high[i];
      }
      if (low[i] == sentinal){
        exitcheck = sentinal;
        tablesize = i;
        break;
      } else if (low[i] < lowest) {
        lowest = low[i];
      }
    }
  }

  //print out table of values
  cout << "----- September Temperatures -----" << endl;
  cout << "  Date:       High:        Low:   " << endl;
  for (int i = 0; i < tablesize; i++){
    if (i < 10){
      if (high[i] > 9) {
        cout << "  " << i + 1 << "           " << high[i] << "           " << low[i] << endl;
      } else if (high[i] > 99){
        cout << "  " << i + 1 << "           " << high[i] << "        " << low[i] << endl;
      } else {
        cout << "  " << i + 1 << "           " << high[i] << "           " << low[i] << endl;
      }
    } else{
      if (high[i] > 9) {
        cout << "  " << i + 1 << "          " << high[i] << "          " << low[i] << endl;
      } else if (high[i] > 99){
        cout << "  " << i + 1 << "          " << high[i] << "         " << low[i] << endl;
      } else {
        cout << "  " << i + 1 << "           " << high[i] << "           " << low[i] << endl;
      }
    }
  }
  cout << "High of month: " << highest << "     Low of month: " << lowest << endl;
  return 0;
}
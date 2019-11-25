#include <iostream>
#include <string>

using namespace std;

int main()
{
  string sMiles;
  cout << "Enter the number of miles: ";

  cin >> sMiles;

  double dMiles = stod(sMiles);

  double dKm = dMiles * 1.60934;

  cout << sMiles << " miles = " << dKm << " Kilometers." << endl;

  return 0;
}
/*By meda hemal*/
#include<iostream>
using namespace std;
int main ()
{
  int a;
  cout << "1:for Blue \n";
  cout << "2:for Yellow\n";
  cout << "3:for red \n";
  cout << "4:for white\n ";
  cin >> a;
  switch (a)
    {
    case 1:
      cout << "Blue";
      break;
      
      case 2:
      cout << "Yellow";
      break;
      case 3:
      cout << "Red";
      break;
      case 4:
      cout << "White";
      break;
    }
}

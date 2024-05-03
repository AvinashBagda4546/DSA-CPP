#include <iostream>

using namespace std;

class ram
{
public:
  void myfun()
  {
    int amount;
    cout << "enter amount : ";
    cin >> amount;
    cout << "avinash :\n";
    cout << "vikash :\n";
    cout << "ankit :\n";
    cout << "rohit :\n";
    string selact;
    cout << "emter your selact name \n";
    cin >> selact;

    if (selact == "avinash")
    {
      cout << "avinash is selected\n";
      if (selact == "avinash")
      {
        cout << "1: hp \n ";
        cout << "2 :bhart \n ";
        cout << "3:indiyan \n ";
        cout << "4 :cp \n ";

        int chuse;
        cout << "enter your compini name \n";
        cin >> chuse;
        if (chuse == 1, 2, 3, 4)
        {
          cout << "920 \n ";
          cout << "1000 \n ";
          cout << "500\n ";
          cout << "999 \n ";
        }
        else
        {
          cout << "enter your repited compini name \n";
          cin >> chuse;
        }
      }
    }

    else if (selact == "vikash")
    {
      cout << "vikash is selected\n";
    }
    else if (selact == "ankit")
    {
      cout << "ankit is selected\n";
    }
    else if (selact == "rohit")
    {
      cout << "rohit is selected\n";
    }
    else
    {
      cout << "invalid selection\n";
    }
  }
};

int main()
{
  ram obj;
  obj.myfun();
}

// int famount;
// int famount = amount - chuse;
// cout<<famount;

// if("avinesh" == chuse)
// {
//     cout<<chuse;

//     int famount = amount - chuse;
//     cout<<famount;
// }
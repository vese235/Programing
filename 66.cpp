#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;
struct cars
{
    char  marka[50];
    char  model[50];
   char  tsvat[50];
   char  gorivo[50];
   int year;
};
void readcars(cars & s)
{
      char p[100];
      cin.getline(p,100);
       cout << "Marka:";
        cin.getline(s.marka,50);
        cout << "Model:";
        cin.getline(s.model,50);
         cout << "Tsvat:";
         cin.getline(s.tsvat,50);
         cout << "Gorivo:";
         cin.getline(s.gorivo,50);
         cout << "Godina na proizvodctvo: ";
        cin >> s.year;
         }
void printcars(const cars &stud)
{   cout<<setw(50)<< stud.marka<< setw(50)<< stud.model<< setw(50)<< stud.tsvat<< setw(50)<< stud.gorivo<< setw(50)<< stud.year<< setw(10)<<endl;
}
 int main()
{ cars table[40];
cout<<"Vavedete broia na kolite";
 int n;
  cin>>n;
  for(int i=0;i<n;i++)
 readcars(table[i]);
 cout<<"kolite sa \n"; 
  for(int i=0;i<n;i++)
   {   printcars(table[i]);
   cout<<endl;
}
 return 0;
}


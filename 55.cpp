#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;
struct uchenik
{
    char  ime[20];
    char  familya[20];
   char  adres[20];
   int year;
};
void readuchenik(uchenik & s)
{
      char p[100];
      cin.getline(p,100);
       cout << "Ime:";
        cin.getline(s.ime,20);
        cout << "Familya:";
        cin.getline(s.familya,20);
        cout << "Adres:";
         cin.getline(s.adres,20);
        cout << "Godina: ";
        cin >> s.year;
         }
void printuchenik(const uchenik &stud)
{   cout<<setw(20)<< stud.ime<< setw(10)<< stud.familya<< setw(10)<< stud.adres<< setw(5)<< stud.year<< setw(5)<<endl;
}
 int main()
{ uchenik table[30];
cout<<"Vavedete broia na uchenicite";
 int n;
  cin>>n;
  for(int i=0;i<n;i++)
 readuchenik(table[i]);
 cout<<"uchenicite sa \n"; 
  for(int i=0;i<n;i++)
   {   printuchenik(table[i]);
   cout<<endl;
}
 return 0;
}


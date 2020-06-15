#include <iostream>
#include <iomanip>
#include<fstream>


//Äåôèíèðàéòå êëàñ êîëè(cars), 
//êîéòî èìà ñëåäíèòå ïðîìåíëèâè:
// ìàðêà, ìîäåë, ãîäèíà íà ïðîèçâîäñòâî, öâÿò


using namespace std;
class cars
{private:
char marka[20];
char model[20] ;
int age;
char color[10];
public:
void read();
void print() const;
int get_age() const;
void print_fail() const;
};


void cars::read()
{cout << "marka: ";
cin>>marka;
cout<<"model";
cin>>model;
cout<<"godina";
cin>>age;
cout<<"color";
cin>>color;
}
void cars::print() const
{cout<<setw(22)<<marka<<setw(22)<<model<<setw(6)<<age<<setw(10)<<color;
}
void cars::print_fail() const
{ ofstream file_out("auto.txt",ios::app); 
file_out<<setw(22)<<marka<<setw(22)<<model<<setw(6)<<age<<setw(10)<<color;
file_out<<endl;
}


int cars::get_age() const
{return age;
}
int main()
{cars table[20];
int n;
cout<<"Broj na kolite";
cin>>n;
for(int i=0;i<n;i++)
{table[i].read();

}
cout<<"\t\t\tCARS LIST\n\n";

for(int i=0;i<n;i++)
{table[i].print();
cout<<endl;
}
   for(int i=0;i<n;i++)
   {
        table[i].print_fail();
        cout<<endl;
        
        
   }
 



return 0;
}


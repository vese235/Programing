#include <iostream>
#include <iomanip>
#include<fstream>




using namespace std;
class article
{private:
char ime[20] ;
char marka[20] ;
int age;
char proizvodstvo[20] ;
int godnost;
double chena;
public:
void read();
void print() const;
int get_age() const;
void print_fail() const;
};


void article::read()
{cout << "ime: " ;
cin >> ime ;
cout << "marka: " ;
cin >> marka ;
cout << "proizvodstvo: " ;
cin >> age ;
cout << "godnost: " ;
cin >> age ;
cout << "chena: " ;
cin >> chena ;
}

void article::print() const
{cout<<setw(20)<<ime<<setw(20)<<marka<<setw(40)<<age<<setw(10)<<chena/1.74;
}
void article::print_fail() const
{ ofstream file_out("article.txt",ios::app); 
cout<<setw(20)<<ime<<setw(20)<<marka<<setw(40)<<age<<setw(10)<<chena/1.74;
file_out<<endl;
}


int article::get_age() const
{return age ;
}
int main()
{article table[20] ;
int n;
cout << "Broj na articulite: " ;
cin >> n;
for(int i=0;i<n;i++)
{table[i].read();

}
cout<<"\t\t\tARTICLE LIST\n\n";

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



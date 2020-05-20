#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
struct Book //Дефинира се структура Book.
{
   char title[51];
   char author[51];
   double price;
   char ISBN_num[16];
};
int main()
{
   Book books[50]; //Въвежда се броят на книгите.
   int i,n;
   cout<<"Vavedi broi knigi:";
   cin>>n;
   for(i=0;i<n;i++)
   { //Данните за всяка книга се въвеждат последователно в масив от тип Book.
       cin.get();
       cout<<"Title:";
       cin.getline(books[i].title,51);
       cout<<"Autor:";
       cin.getline(books[i].author,51);
       cout<<"Price:";
       cin>>books[i].price;
       cout<<"ISBN number:";
       cin>>books[i].ISBN_num;
   } 
   ofstream file_out; //Файлът се отваря за четене. В цикъл се извличат последователно всички елементи 
   file_out.open("file_1.txt"); //За всеки запис се извършва сравнение на ISBN номера с този, въведен от клавиатурата. 
      for(i=0;i<n;i++) //Когато се намери съвпадение на номерата, цикълът се прекратява.
   {
        file_out<<books[i].title<<'\n';
        file_out<<books[i].author<<'\n';
        file_out<<books[i].price<<'\n';
        file_out<<books[i].ISBN_num<<'\n';
   }
 
   file_out.close();
   char buf_str[51],isbn[16];
   double buf;
   ifstream file_in;
   file_in.open("file_1.txt");
   cout<<"Enter ISBN number:";
   cin>>isbn; //От клавиатурата се въвежда ISBN номер.
   for(i=0;i<n;i++)
   {
        file_in.getline(buf_str,51);
        file_in.getline(buf_str,51);
        file_in>>buf;
        file_in>>buf_str;
        if(strcmp(buf_str,isbn)==0)break; // Проверява се стойността на брояча. 
        //Ако тази стойност е по-малка от броя на книгите,
        //то е намерена книга, съответстваща на въведения ISBN номер.
        //Извежда се подходящо съобщение.
   } //В противен случай се извежда съобщение, че не е намерена такава книга.
   
   if(i<n)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
   file_in.close();
   return 0;
}


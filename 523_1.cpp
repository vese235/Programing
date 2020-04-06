#include <iostream>
#include <queue>
using namespace std;
int main()
{
     queue<int> q;
     cout<<"Broi elementi:"<<q.size()<<endl;
     q.push(1);
    q.push(2);
    q.push(3);
    cout<<"Broi elementi:"<<q.size()<<endl;
    cout<<"Purviq element:"<<q.front()<<endl;
    cout<<"Posledniq element:"<<q.back()<<endl;
    q.pop();
    cout<<"Broi elementi:"<<q.size()<<endl;
    cout<<"Purviq element:"<<q.front()<<endl;
    cout<<"Posledniq element:"<<q.back()<<endl;
    q.pop();
    cout<<"Broi elementi:"<<q.size()<<endl;
    cout<<"Purviq element:"<<q.front()<<endl;
    cout<<"Posledniq element:"<<q.back()<<endl;
    cout<<"_________"<<endl;
    queue<char> a;
    a.push('a');
    a.push('b');
    a.push('c');
    a.push('d');
    a.push('e');
    a.push('f');
    a.push('g');
    cout<<"Broi elementi:"<<a.size()<<endl;
    while(!a.empty()){
    a.pop();
    cout<<"Broi elementi:"<<a.size()<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
class indate
{
      public:
      int day, month, year;
      void mesin()
      {
           cout<<"write day"<<endl;
           cin>>day;
           cout<<"write month"<<endl;
           cin>>month;
           cout<<"write year"<<endl;
           cin>>year;
      }
};
class outdate
{
      public:
      int day, month, year;
      void mesout()
      {
           cout<<day<<endl;
           cout<<month<<endl;
           cout<<year<<endl;
      }
};
int main()
{
    indate objectindate; 
    outdate objectoutdate;
    objectindate.mesin();
    objectoutdate.day=objectindate.day;
    objectoutdate.month=objectindate.month;
    objectoutdate.year=objectindate.year;
    objectoutdate.mesout();
    
    system ("pause");
    return 0;
} 


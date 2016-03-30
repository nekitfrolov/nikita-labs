#include <iostream>
using namespace std;
class MyClass{
      public:
      int a;
      int b;
      int c;
    
      
      void setmn(int a,int b,int c){
      this->a=a;
      this->b=b;
      this->c=c;
      }
      MyClass change(){
      cout<<(this->a+this->b+this->c)*this->a<<endl;
      }
      };
      int main(){
      MyClass obj;
      int a,b,c;
     cout<<"¬ведите а= "<<endl;
     cin>>a;
     cout<<"¬ведите b= "<<endl;
     cin>>b;
     cout<<"¬ведите c= "<<endl;
     cin>>c;
      obj.setmn(a,b,c);
      obj.change();
    
      system ("pause");
      return 0;
      }

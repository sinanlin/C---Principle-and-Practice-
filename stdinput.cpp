#include <iostream>
using namespace std;

int main(){
   double a,b,c;


  while (cin>>a) {
    if(a==b){
    cout<<"a and b are equal"<<a<<"\n";
    c=0.0;
    }
    else if(a<b) {
      cout<<"The smaller value is: "<<a<<"\n";
      cout<<"The larger value is: "<<b<<"\n";
      c=b-a;
    }
    else{
      cout<<"The smaller value is: "<<b<<"\n";
      cout<<"The larger value is: "<<a<<"\n";
      c=a-b;
    }
    if(c!=0 && c<0.001){
      cout<<"The numbers are almost equal"<<"\n";
    }

  }
    return 0;
}


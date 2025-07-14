using namespace std;
#include <iostream>

int main()
{
 int length;
  cout<<"enter number of the length:";
  cin>>length;
  
  int*number =new int[length];
  
  for(int n=0;n<length;n++){
      number[n]=n+1;
  }
  for(int n=0;n<length;n++){
      cout<<number[n]<<endl;
  }
    delete[]number;
    
}
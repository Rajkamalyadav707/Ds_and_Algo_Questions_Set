#include<bits/stdc++.h>
using namespace std; 

class Linear_Search{

private:
  int length ; 
  int size ; 
  int *p; 

public:
  Linear_Search(int size);
  void setData();
  int display();
  ~Linear_Search();

};

Linear_Search::Linear_Search(int size){
  this->size = size; 
  p = new int[size];
}
void Linear_Search::setData(){
  cin>>length;
  for (int i = 0; i < length; ++i)
  {
    cin>>p[i];
  }
}
int Linear_Search::display(){
  for (int i = 0; i < length; ++i)
  {
    int key; 
    cin>>key; 
    if (key == p[i])
    {
      cout<<p[i]<<endl; 
      return 0 ;
    }
  }cout<<"Not found"<<endl;
  return -1; 
}
Linear_Search::~Linear_Search(){
delete[]p;
cout<<"Deleted";
}
int main(){

Linear_Search s{10};
s.setData();
s.display();
return 0; 
}


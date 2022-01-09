#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;

  int sum = 0;
  for( int i = 0; i < n; i++){

    sum +=i;

  }
  cout<<sum;

  cout<<endl<<endl;

int m;
cin>>m;
int Ecount = 0;
for(int i = 0; i < m; i=i+2){
  Ecount +=i;
}
cout<<Ecount;

cout<<endl<<endl;
int k;
cin>>k;

for(int i = 2; i < k; i++){
  if( k % i == 0){
    cout<<"not prime "<<i<<endl;
  }else{
    cout<<"prime "<<i<<endl;
  }
}

  return 0;
}

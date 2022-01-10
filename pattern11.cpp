#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

for(int i = 1; i <= n; i++ ){
  for(int j = 1; j <= n; j++){
        char ch = 'A' +i+j-2;
    cout<< ch <<" ";

  }
  cout<<endl;
}
  
//   Another approach
  
for(int i = 1; i <= n; i++ ){
      char ch = 'A'+i-1;
  for(int j = 1; j <= n; j++){

    cout<< ch <<" ";

    ch++;
  }
  
 
 // A B C
 // B C D
 // C D E
  return 0;
}

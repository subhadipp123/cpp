#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    bool temp= true;
    for(int i=2; i<=n-1; i++){ 
        if(n%i==0){ // i is factor of n
        temp=false;
        break;
        }
    }
        if(n==1) cout<<"1 is neither prime nor composite."<<endl;
        else if(temp==true) cout<<n<<" is a prime number."<<endl;
        else cout<<n<<" is a composite number."<<endl;
    
}
// check if a number is prime or not
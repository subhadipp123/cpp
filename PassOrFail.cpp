#include <iostream>
using namespace std;

int main() {
 int passingMark,aMark;
 cout<<"Enter passing marks :";
 cin>>passingMark;
 cout<<"Marks obtained :";
 cin>>aMark;

 cout<<(aMark >= passingMark? "pass":"fail")<<endl;
	return 0;
}

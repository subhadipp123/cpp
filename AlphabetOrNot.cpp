#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter an character :";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
        cout<<"It's a character.";
    }else{
        cout<<"Not a character.";
    }
    return 0;
}
//check if a given input is character or not
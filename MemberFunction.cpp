#include<iostream>
using namespace std;
class player{
    public:
    int score;
    int health;

    void showHealth(){
        cout<<"Health is: "<<health;
    }
};
int main(){
    player Subhadip;
    Subhadip.score=1000;
    Subhadip.health=90;
    Subhadip.showHealth();
}
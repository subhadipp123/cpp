#include<iostream>
using namespace std;
class player{
    private:
    int score;
    int health;
    public:
    void setHealth(int h){
        health= h;
    }
    void setScore(int s){
        score= s;
    }
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
};
int main(){
    player Subhadip;
    Subhadip.setHealth(100);
    Subhadip.setScore(1471);
    cout<<Subhadip.getScore()<<endl;
    cout<<Subhadip.getHealth();
}
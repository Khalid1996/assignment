#include<iostream>
using namespace std;
int main(){

int x,player_1,player_2;
x=21;
while (true){

    cout << "player_1 >> you can choice:1 or 2 or 3" << endl;
    cout << " Enter your choice:";
    cin >> player_1;
    if (player_1== 1 | player_1== 2| player_1== 3){
        x=x-player_1;
        cout << x << endl;
    }

    else
            break;

    if (x <=0 ){
        cout << "Player_1, you lost " << endl;
        break;

    }
    if (x==1){
        cout << "Player_1, you won " << endl;
        break;
    }



    //else():{
           // break;




    cout << "player_2 >> you can choice:1 or 2 or 3" << endl;
    cout << "Enter your choice: ";
    cin >> player_2;
    if (player_2==1 | player_2== 2 | player_2== 3){
        x=x-player_2;
            cout << x << endl;
    }

    else
            break;


    if (x<=0){
        cout << "Player_2, you lost" << endl;
        break;
    }
    if (x==1){
        cout << "Player_2, you won" << endl;
        break;
    }





}






}

//write later
#include<iostream>
#include<ctime>
#include<string>
using namespace std;

char choose();
void drawBoard(char* spaces);
void playerMove(char* spaces, char player);
void computerMove(char *spaces, char computer);
int tackle(char* spaces, char computer);
int checkWinner(char* spaces, char move, string display);
void tie(int running);
int chk(int running);
int main(){
    srand(time(0));
    bool gameover = false;int running=0;
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = choose(),computer = (player=='o')?'x': 'o';
    while(!gameover){
        drawBoard(spaces);
        playerMove(spaces,player);
        if(checkWinner(spaces,player,"You Won\n")){gameover=true;break;}
        running++;
        if(!chk(running)){running=-1;break;}
        else{computerMove(spaces,computer);}
        if(checkWinner(spaces,computer,"You Lost\n")){gameover=true;break;}
    }
    drawBoard(spaces);tie(running);
/*  o | x | o 
   ---|---|---
    o | x | o
   ---|---|---
    x | 0 | x */
return 0;
}

int chk(int running){return (running<5);}

void computerMove(char* spaces, char computer){
    int place = tackle(spaces,computer);
    if(place == -1){
    place = rand()%9;
    while(true){if(spaces[place]!=' '){place = (place+7)%9;}
    else{break;}}}
    spaces[place]=computer;
}

void tie(int running){
    cout<<"\n"<<((running == -1)? "TIE" : "Thank you for playing");
}

char choose(){char player = ' ';
     do{
    cout<<((player == ' ')?"Enter your team(o or x): " 
                           : "Choose The team wisely(o or x): ");
    cin>>player;
    }while(player!='o' && player !='x');
    return player;
}

void playerMove(char* spaces, char player){ int place;
    do{
    cout<<"enter the spot(1-9): ";
    cin>>place;}
    while(place<1 || place>9);
    if (spaces[--place] == ' '){spaces[place] = player;}
    else{playerMove(spaces,player);}
}

void drawBoard(char* spaces){
    int index = 0;
    for (int i=0;i<5;i++){
    for(int j=0;j<11;j++){
        if (j==3 || j==7){
        cout<<'|';}
        else if(i==1 || i==3 ){
        cout<<'-';
        }
        else if(j==1 || j==5 || j == 9){
        cout<<spaces[index++];
        }
        else if (j==3 || j==7){
        cout<<'|';
        }
        else{cout<<' ';}
    }cout<<endl;}
}

int tackle(char* spaces, char computer){
    char player = (computer == 'x')?'o':'x';
    //offense
//horizontal = 012 : 345 : 678 ==> (i+1)*3
    for(int first=0;first<7;first+=3){int count=0,second=first+1,third=first+2;
        int difference = 0,sum = (first+1)*3;
        if(spaces[first]==computer){difference+=first;count++;} 
        if(spaces[second]==computer){difference+=second;count++;}  
        if(spaces[third]==computer){difference+=third;count++;}
        if(spaces[first]==player || spaces[second]==player || spaces[third]==player){count--;}  
        if(count == 2){int target = sum - difference;
if (spaces[target] == ' ') return target;}
    }
    //vertical = 036 : 147 : 258 ==> (i+3)*3
    for(int first=0;first<3;first++){int count=0,second=first+3,third=first+6;
        int difference = 0,sum = (first+3)*3;
        if(spaces[first]==computer){difference+=first;count++;} 
        if(spaces[second]==computer){difference+=second;count++;}  
        if(spaces[third]==computer){difference+=third;count++;}
        if(spaces[first]==player ||spaces[second]==player || spaces[third]==player){count--;}   
        if(count == 2){int target = sum - difference;
if (spaces[target] == ' ') return target;}
    }
    //cross = 048 : 246 ==> 12
    for(int first=0;first<3;first+=2){int count=0,second=4-first,third=8-first;
        int difference = 0,sum = 12;
        if(spaces[first]==computer){difference+=first;count++;} 
        if(spaces[second]==computer){difference+=second;count++;}  
        if(spaces[third]==computer){difference+=third;count++;}
        if(spaces[first]==player || spaces[second]==player || spaces[third]==player){count--;}  
        if(count == 2){int target = sum - difference;
if (spaces[target] == ' ') return target;}
    }

    //difence
    //horizontal = 012 : 345 : 678 ==> (i+1)*3
    for(int first=0;first<7;first+=3){int count=0,second=first+1,third=first+2;
        int difference = 0,sum = (first+1)*3;
        if(spaces[first]== player){difference+=first;count++;} 
        if(spaces[second]== player){difference+=second;count++;}  
        if(spaces[third]== player){difference+=third;count++;}
        if(spaces[first]==computer || spaces[second]==computer || spaces[third]==computer){count--;}  
        if(count == 2){int target = sum - difference;
if (spaces[target] == ' ') return target;}
    }
    //vertical = 036 : 147 : 258 ==> (i+3)*3
    for(int first=0;first<3;first++){int count=0,second=first+3,third=first+6;
        int difference = 0,sum = (first+3)*3;
        if(spaces[first]== player){difference+=first;count++;}  
        if(spaces[second]== player){difference+=second;count++;}  
        if(spaces[third]== player){difference+=third;count++;}
        if(spaces[first]==computer || spaces[second]==computer || spaces[third]==computer){count--;}   
        if(count == 2){int target = sum - difference;
if (spaces[target] == ' ') return target;}
    }
    //cross = 048 : 246 ==> 12
    for(int first=0;first<3;first+=2){int count=0,second=4-first,third=8-first;
        int difference = 0,sum = 12;
        if(spaces[first]== player){difference+=first;count++;}  
        if(spaces[second]== player){difference+=second;count++;}  
        if(spaces[third]== player){difference+=third;count++;}  
        if(spaces[first]==computer || spaces[second]==computer || spaces[third]==computer){count--;} 
        if(count == 2){int target = sum - difference;
if (spaces[target] == ' ') return target;}
    }
    return -1;
}
int checkWinner(char* spaces, char move,string display){
    //horizontal = 012 : 345 : 678
    for(int first=0;first<7;first+=3){int count=0,second=first+1,third=first+2;
        if(spaces[first]==move&&spaces[second]==move&&spaces[third]==move){
        cout<<display;return 1;}}
    //vertical = 036 : 147 : 258 
    for(int first=0;first<3;first++){int count=0,second=first+3,third=first+6;
        if(spaces[first]==move&&spaces[second]==move&&spaces[third]==move){
        cout<<display;return 1;}}
    //cross = 048 : 246
    for(int first=0;first<3;first+=2){int count=0,second=4-first,third=8-first;
        if(spaces[first]==move&&spaces[second]==move&&spaces[third]==move){
        cout<<display;return 1;}}
    return 0;
}

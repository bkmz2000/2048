#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
int match[4][4], cont=0, place=0, score=0, spawn=0, a=0, b=0, c=0, d=0, g=0;
char mup[4][4], m;
using namespace std;
void move(){
    if(m=='w'){
         for(int x=0;x<b; x+=c){
             for(int y=a; y<b; y+c){
                if(match[x][y]==match [x+d][y+g]){
                    match[x+d][y+g]=match[x+d][y+g]*2;
                    match[x][y]=0;
                    score+=match[x+d][y+g];
                    cont+=1;
                }
                if(match[x][y]!=0 && match[x+d][y+g]==0){
                    match[x+d][y+g]=match[x][y];
                    match[x][y]=0;
                    cont+=1;
                }
            }
        }
    }
    if(m=='s'){
        a=3;
        b=1;
        c=-1;
        d=-1;
        g=0;
         for(int x=a;x>b; x+=c){
             for(int y=a; y<b; y+=c){
                if(match[x][y]==match [x+d][y+g]){
                    match[x+d][y+g]=match[x+d][y+g]*2;
                    match[x][y]=0;
                    score+=match[x+d][y+g];
                    cont+=1;
                }
                if(match[x][y]!=0 && match[x+d][y+g]==0){
                    match[x+d][y+g]=match[x][y];
                    match[x][y]=0;
                    cont+=1;
                }
            }
        }
    }
    if(m=='d'){
        a=0;
        b=2;
        c=1;
        d=0;
        g=1;
         for(int x=a;x<b; x+=c){
             for(int y=a; y<b; y+=c){
                if(match[x][y]==match [x+d][y+g]){
                    match[x+d][y+g]=match[x+d][y+g]*2;
                    match[x][y]=0;
                    score+=match[x+d][y+g];
                    cont+=1;
                }
                if(match[x][y]!=0 && match[x+d][y+g]==0){
                    match[x+d][y+g]=match[x][y];
                    match[x][y]=0;
                    cont+=1;
                }
            }
        }
    }
    if(m=='a'){
        a=3;
        b=1;
        c=-1;
        d=0;
        g=-1;
         for(int x=a;x>b; x+=c){
             for(int y=a; y<b; y+=c){
                if(match[x][y]==match [x+d][y+g]){
                    match[x+d][y+g]=match[x+d][y+g]*2;
                    match[x][y]=0;
                    score+=match[x+d][y+g];
                    cont+=1;
                }
                if(match[x][y]!=0 && match[x+d][y+g]==0){
                    match[x+d][y+g]=match[x][y];
                    match[x][y]=0;
                    cont+=1;
                }
            }
        }
    }
    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            if(match[x][y]==0){
                place++;
            }
        }
    }
    if(cont>0 && place>0){
        int a=1;
        while(a==1){
        int x=rand()%3;
        int y=rand()%3;
        if(match[x][y]==0){
            match[x][y]=spawn;
            cont=0;
            place=0;
            a=0;
        }
    }
}
}
int main(){
for(int x=0; x<=3; x++){
    for(int y=0; y<=3; y++){
        match[x][y]=0;
    }
}
for(int g=0; g<=1; g++){
int a=rand()%3;
int b=rand()%3;
match[a][b]=2;
}
while (1){
    for(int x=0; x<=3; x++){
        for(int y=0; y<=3; y++){
            cout<<match[x][y];
            }
         cout<<endl;
        }

    int a=rand()%3;
    if(a==0 || a==1 || a==2){
       spawn=2;
    }
    if(a==3){
        spawn=4;
    }
    cin>>m;
    if (m=='d')
    move();
    system("cls");

    }
}

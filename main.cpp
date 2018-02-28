#include <iostream>
using namespace std;

class character{
private:
    char *name;
    char *class_subclass;
    char *race_subrace;
    int STR;
    int DEX;
    int CON;
    int INT;
    int WIS;
    int CHA;
public:
    void setStat(char c[], int num){
        if(num>0 && num <=20){
            if(c[0]=='S'){
                STR=num;
            }else if(c[0]=='D'){
                DEX=num;
            }else if(c[0]=='C'&&c[1]=='O'){
                CON=num;
            }else if(c[0]=='I'){
                INT=num;
            }else if(c[0]=='W'){
                WIS=num;
            }else if(c[0]=='C'&&c[1]=='H'){
                CHA=num;
            }
        }
    }
    void setName(char c[]){
        int i=0;
        for(int j=0; c[j]!='\0'; j++){
            i++;
        }
        name=new char[i];
        for(int j=0; j<=i; j++){
            name[j]=c[j];
        }
    }
    void setClass(char c[]){
        int i=0;
        for(int j=0; c[j]!='\0'; j++){
            i++;
        }
        class_subclass=new char[i];
        for(int j=0; j<=i; j++){
            class_subclass[j]=c[j];
        }
    }
    void setRace(char c[]){
        int i=0;
        for(int j=0; c[j]!='\0'; j++){
            i++;
        }
        race_subrace=new char[i];
        for(int j=0; j<=i; j++){
            race_subrace[j]=c[j];
        }
    }
    int getStat(char c[]){
        if(c[0]=='S'){
            return STR;
        }
        if(c[0]=='D'){
            return DEX;
        }
        if(c[0]=='C'&&c[1]=='O'){
            return CON;
        }
        if(c[0]=='I'){
            return INT;
        }
        if(c[0]=='W'){
            return WIS;
        }
        if(c[0]=='C'&&c[1]=='H'){
            return CHA;
        }
        return 0;
    }
    int getModifier(char c[]){
        if(getStat(c)==20){
            return 5;
        }
        if(getStat(c)==19||getStat(c)==18){
            return 4;
        }
        if(getStat(c)==17||getStat(c)==16){
            return 3;
        }
        if(getStat(c)==15||getStat(c)==14){
            return 2;
        }
        if(getStat(c)==13||getStat(c)==12){
            return 1;
        }
        if(getStat(c)==11||getStat(c)==10){
            return 0;
        }
        if(getStat(c)==9||getStat(c)==8){
            return -1;
        }
        if(getStat(c)==7||getStat(c)==6){
            return -2;
        }
        if(getStat(c)==5||getStat(c)==4){
            return -3;
        }
        if(getStat(c)==3||getStat(c)==2){
            return -4;
        }
        if(getStat(c)==1){
            return -5;
        }
        return 0;
    }
    char *getName(){
        int i=0;
        for(int j=0; name[j]!='\0'; j++){
            i++;
        }
        char *c = new char[i-1];
        for(int j=0; j<i; j++){
            c[j]=name[j];
        }
        return c;
    }
    char *getClass(){
        int i=0;
        for(int j=0; class_subclass[j]!='\0'; j++){
            i++;
        }
        char *c = new char[i-1];
        for(int j=0; j<i; j++){
            c[j]=class_subclass[j];
        }
        return c;
    }
    char *getRace(){
        int i=0;
        for(int j=0; race_subrace[j]!='\0'; j++){
            i++;
        }
        char *c = new char[i-1];
        for(int j=0; j<i; j++){
            c[j]=race_subrace[j];
        }
        return c;
    }
};

int main(){
    //I haven't actually written anything other than part of the character class yet
    return 0;
}

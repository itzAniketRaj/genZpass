#include<iostream>
#include<cstdlib>
#include<ctime>
#include<bits/stdc++.h>
using namespace std;

string getpass(int length){
    string password= "";
    string randomcharacter="aquickbrownfoxjumpoverthelazydogAquickbrownfoxjumpsoverthelazydog0123456789";
    int charsize=randomcharacter.size();
    srand(time(0));
     
     int randomIndex;
     for (int i=0;i<length;i++){
        randomIndex=rand()%charsize;
        password=password+randomcharacter[randomIndex];
     }
     return password;
}

int main(){
 
 int length;
 cout<<"Enter the length of the Password required:"<<endl;;
 cin>>length;

 string password=getpass(length);
 cout<<"Password generated sucessfully::"<<endl<<password;

 
return 0;
}
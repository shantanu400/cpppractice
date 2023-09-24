//ASCII val of  A is 65 and a is 97
//ASCII val of  is 48 and for 1 is 49 and for nine is 57
// also for character there is ASCII val
// "space" ASCII is 13 "enter is" 10m and of "Esc" is 27
//total ascii is 0 t0 127 means total is 128 in no
// array of character  is same as string

#include <bits/stdc++.h>
using namespace std;

int main(){
// char a="a"; wrong way of assigning as we should use only ''
// char a='ab'; wrong way as single character can be feed in this way if we want to feed multiple character then we havr to use arrey of character
// char a=a; wrong way as no '' mark

char  a='a';
 //ARRAY OF CHARACTER

 char b[3]={'a','b','c'};
//char c[3];
//c={'a','b','c'}; //wrong way  // use loop to feed data
char d[]={'a','b','c'};
char e[12]={'a','b','c'};
char f[]={'a','b','c','\0'};
char h[12]={'a','b','c','\0'};
char g[]="krishna";

// in conditional statement wjile using a[i]>97 or we can use a[i]>'A'

string s1="hare";
string s2;
cin>>s2;
 if (s1==s2){
    cout<<"equal";

 }
 else 
 cout<<"not equal";

 string s4,s5,s6,s7,s8,s3="Okrishnaa";
 s3[0]='G';  // we can not assign as  s3[0]="G"; as s[0] indicating a character and we assign character using '' not ""
cout<<endl<<s3.size() ; //give out put the size of string s3


cin>>s6; //feed it hare krishna it will take only hare not krishna as it has space in between
cin>>s4>>s5;  //now input the s4 as hare and s4 as krishna and out as as follows
cout<<endl<<s4<<" "<<s5<<endl; //it will print hare krishna
//OR
s7=s4+" "+s5;
cout<<s7<<endl;

//OR

getline(cin,s8);
cout<<s8<<endl;

// using get line for multiple input as if we write hare krishna then if  we only use only normal cin>>s8 then it will t ake only hare but if we use getline then it will store hare krishna

int t;
cin>>t;
while(t--){
    string s9;
    getline(cin,s9);
    
    cout<<s9<<endl; // it will print a line of input less as after entering the no of input the curser will be at next to that where will be there a space or \n so it will enter to next loop and one line of input will exceed and it will take a line of input less than the sctual so print less so we use cin.ignore to ignore the effect of  space after no of input

}
int r;
cin>>r;
cin.ignore();
while(r--){
    string s10;
    getline(cin,s10);
    cout<<s10<<endl;}
    


//str_rev.pushback(s[i]) //use to print reverse of a string s'



return 0;



}

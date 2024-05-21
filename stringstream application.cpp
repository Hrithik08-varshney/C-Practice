/*1. Count the number of words in a string-*/
/*
#include<bits/stdc++.h>
using namespace std;
int countWords(string str){
  stringstream s(str);
  string word;
  int count=0;
  while(s>>word){
    count++;
    cout<<word<<endl;
  }
  return count;
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string s = "geeks for geeks geeks "
               "contribution placements";
    cout << " Number of words are: " << countWords(s);
  return 0;
}*/

/*2. Print frequencies of individual words in a string-*/

/*#include<bits/stdc++.h>
using namespace std;
int printFrequency(string str){
  
  map<string,int>FW; //mapping words with there freq

  stringstream ss(str); //breaking words

  string Word;

   while(ss>>Word){
    FW[Word]++;
   }
   map<string,int>::iterator m;
   for (m = FW.begin(); m != FW.end(); m++)
        cout << m->first << "-> "
             << m->second << "\n";
             return 0;
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string s = "Geeks For Geeks Ide";
    printFrequency(s);
    return 0;
  }*/

/*Removing spaces from a string using Stringstream*/

/*#include<bits/stdc++.h>
using namespace std;
string removeSpaces(string str){
    stringstream ss;
    string temp;

    ss<<str; //storing whole string into string stream
    str="";
    while(!ss.eof()){
      ss>>temp;
      str+=temp;
    }
    return str;
}
int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string s = "This is a test";
    cout << removeSpaces(s) << endl;
 
    s = "geeks for geeks";
    cout << removeSpaces(s) << endl;
 
    s = "geeks quiz is awesome!";
    cout << removeSpaces(s) << endl;
 
    s = "I love     to     code";
    cout << removeSpaces(s) << endl;
 
    return 0;
}*/

/*Converting Strings to Numbers in C/C++*/

#include<bits/stdc++.h>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string s="12345";
  stringstream str(s);
  int x=0;
  str>>x;
  cout<<x;
}
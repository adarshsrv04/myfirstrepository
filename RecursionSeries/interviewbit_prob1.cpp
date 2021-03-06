/*
Find maximum substring with no repeating characters
*/

#include<bits/stdc++.h>
#define NO_OF_CHARS 256
using namespace std;
//This is the func to find smallest window containing 
//all characters of T
string minWindow(string S, string T) {
    int Slen = S.length();
    int Tlen = T.length();
    //check if string's len is less than T's len
    //If yes then no such window can exist
    if( Slen<Tlen)
    {
        cout<<"";
    }
    int S_count[NO_OF_CHARS]={0};//initializing S&T=0
    int T_count[NO_OF_CHARS]={0};
    //store occurence of char of 't'
    for(int i=0;i<Tlen;i++)
    {
        T_count[T[i]]++;
    }
    int start=0, start_index=-1, min_len=INT_MAX;
    //start traversing the string
    int count=0;//initial count of characters 
    for(int i=0;i<Slen;i++)
    {
        //count occurence of characters of string S
        S_count[S[i]]++;
        //If S's char matches with T's char 
        //Then increment count
        if(T_count[S[i]]!=0 && S_count[S[i]]<=T_count[S[i]])
            count++;
        //if all the characters are matched
        if(count==Tlen)
        {
            //minimize the current window
            //if the current window has a character the
            //occured more num than the chat in T string //then remove the starting chars
            while(S_count[S[start]]>T_count[S[start]]||T_count[S[start]]==0)
            {
                if(S_count[S[start]]>T_count[S[start]])
                S_count[S[start]]--;
                start++;
            }
            //update the window size
            int len_window=i-start+1;
            if(min_len>len_window)
            {
                min_len=len_window;
                start_index=start;
            }
        }
    }
    //if no window found
    if(start_index==-1)
    {
        cout<<"";
    }
    //Return substring starting from start_index
    //and length min_len
    return S.substr(start_index,min_len);
}
int main()
{
  string S,T;
  cin>>S>>T;
  //call the func minWindow
  cout<<minWindow(S,T)<<endl;
}

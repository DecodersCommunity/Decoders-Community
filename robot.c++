#include<bits/stdc++.h>
using namespace std;
 
int CheckPassword(char str[],int n)
{
   if(n<4) return 0;
   int a=0,cap=0,nu=0,low=0;
   while(a<n)
   {
       if(str[a]==' ' || str[a]=='/') return 0;
       if(str[a]>=65&&str[a]<=90) {cap++;}
       if(str[a]-32>=65&&str[a]-32<=90) {low++;}
       
       else if(str[a]-'0'>=0 && str[a]-'0'<=9) nu++;
       a++;
   }
   return cap>0 && nu>0 && low>0 ;
}
 
int main()
{
    string s;
    getline(cin,s);
    int len=s.size();
    char *c=&s[0];
    if(CheckPassword(c,len))
    cout<<"password valid";
    else cout<<"Invalid password, try again";
}

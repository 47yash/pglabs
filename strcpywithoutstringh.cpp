#include<iostream>
using namespace std;
 

void CopyString(char* st1, char* st2)
{
    int i = 0;
 
      for (i = 0; st1[i]!='\0'; i++)
      {
          st2[i] = st1[i];
      }
    st2[i] = '\0';
}
 

int main()
{
      char str1[100] = "tis string is being copied", str2[100];
  
    CopyString(str1, str2);
     
    cout<<"String s1:"<< str1<<endl;
     cout<<"String s2:"<< str2<<endl<<
       
      return 0;
}

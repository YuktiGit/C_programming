#include<stdio.h>
int main(){  
  int n=6,result,i;   
   int a=0;    int b=1; 
      for(i=0;i<n;i++)    {   
           printf(" %d",a);        
           result=a+b;  
                 a=b;  
                       b=result;   
                            }     
                                return 0;        }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
   int temp;
   cin>>n;
   int grades[n];
   
   for(int i=0;i<n;i++)
   {
   	cin>>grades[i];
   }
    
    for(int i=0;i<n;i++)
   {
   	if(grades[i]>=38){
	   
   switch(grades[i]%5){
   
   case 3:
   	{
   		grades[i]+=2;
   		break;
	   }
   case 4:
   	{
   			grades[i]+=1;
   			break;
	   }
  
}
}
}
      for(int i=0;i<n;i++)
   {
   	cout<<grades[i]<<endl;
   }
    
    return 0;
}


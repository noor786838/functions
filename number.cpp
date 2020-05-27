#include<iostream>
using namespace std;
int pri(int num)
{
	int flag=1;
	int i;
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			flag=0;
			break;
		}
	}
	
}
int main()
{
   int num,i;
   cout<<"enter a number"<<endl;
   cin>>num;
   for(i=0;i<=num/2;i++){
   if(pri(i)){
   		if(pri(num - i)){
   			cout<<num<<"="<<i<<"+"<<num -i<<endl;
		   }
	}
   }
   return 0;	
}

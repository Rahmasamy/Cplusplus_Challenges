#include <iostream>
using namespace std;
int main (){
	//program to convert from decimal to binary 
   int decimal;
   int bin[20];
   int i=0;
   int rem=0;
   cout<<"enter the decimal number you want to be converted in binary"<<endl;
   cin>>decimal;
  int n=decimal;
   while (decimal>0){
       rem=decimal%2;
	   bin[i]=rem;
	   decimal=decimal/2;
	   i++;
}
    cout<<"the binary equvalient of the decimal number "<<n<<"is = ";

   for (int j=i-1;j>=0;j--){
   
   cout<<bin[j];
   }
  
   system("pause");
	return 0;
}
// functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int sum (int x,int y){
   int sum=0;
   if (x!=y){
	   int z=x+y;
	   sum+=z;
   }
   else {
	   int w=x+y;
	   sum+=2*w;
   }

   return sum;
}

int absoulatedifferent (int x){
	int y=0;
	if (x<=21){
      y=21-x;
	}
	else 
	{
	   int w=21-x;
	   y=2*w;
	}

	return y;


}
    void parameter (bool weekend,bool vaction){
    
	 if (weekend==true && vaction==false)
	    cout<<"false"<<endl;
	 if (weekend==true && vaction==true)
	     cout<<"false"<<endl;
	 if (weekend==false && vaction==true)
	     cout<<"true"<<endl;
	 if (weekend==false && vaction==false)
	     cout<<"true"<<endl;
	
   }
	void pasneg (int x,int y){
	  
		if (x<0 && y<0)
			cout<<"true"<<endl;
	    if (x>0 && y<0)
			cout<<"true"<<endl;
		if (x<0 && y>0)
			cout<<"true"<<endl;
		if (x>0 && y>0)
			cout<<"false"<<endl;
	} 
	void close10( int x,int y){
	  int close=0;
	  int close2=0;
	  if (x>10){
	  close=x-10;
	  }
	  if (x<10){
	  close=10-x;

	  }
	   if (y>10){
	  close2=y-10;
	  }
	  if (y<10){
	  close2=10-y;

	  }
	 if (close<close2){
	   cout<<"the close number is "<<x<<endl;
	 }
	  if (close>close2){
	   cout<<"the close number is "<<y<<endl;
	 }
	   if (close==close2){
	   cout<<"the close number is = "<<"0"<<endl;
	 }
	}
	void lonesum(int x,int y,int z){
	int sum=0;
	if (x!=y&&x!=z &&z!=y){
	   sum+=x+y+z;
	   cout<<"the sum of the numbers is = "<<sum<<endl;
	}
	if (x==y && y==z && z==x){
		cout<<"0"<<endl;
	}
	if (x==y){
	cout<<z<<endl;
	}
	if (x==z){
	   cout<<y<<endl;
	}
	if (y==z){
	
     cout<<x<<endl;
	}
	}
	void luckeysum(int x,int y,int z){
	  int sum=0;
	     if (x!=13&&y!=13&&z!=13){
		  sum+=x+y+z;
         cout<<"the sum is= " <<sum<<endl;
		 }

		 if (x==13){
		 cout<<"0"<<endl;
		 
		 }
		 if (y==13){
		 cout<<x<<endl;
		 }
		 if (z==13){
			  sum+=(x+y);
		   cout<<"the sum is = "<<sum<<endl;
		 }
	
	}

	void initotal ( int n,bool x){
	
		if (n>=1 && n<=10){
		cout<<"true"<<endl;
		
		}
		if (x==true){
		   cout<<"true"<<endl;
		}
		if (x==false){
		  cout<<"false"<<endl;
		
		}
	}
	void  multiple11(int x){
	
		if (x%11==0 ||x%11==1){
		  cout<<"true"<<endl;
		}
		else {
		
	      cout<<"false"<<endl;
		}
	}
	void multiple20(int x){
		if (x%20==1||x%20==2){
		  cout<<"true"<<endl;
		}
		else {
		  cout<<"false"<<endl;
		}
	}
	void multiple10(int x){
		if (x%10<2 ||10-x%10<2){
		  cout<<"true"<<endl;
		}
		else 
		{
		  cout<<"false"<<endl;
		}
	
	
	}
	void teen(int x,int y){
		int sum=0;
		if (x>=13&&x<=19&&y>=13&&y<=19){
		
			cout<<"19"<<endl;
		} 
		else {
		sum+=x+y;
		
		}
	
	}
	void answercall(bool sleep,bool morning,bool normal){
		 bool mom;
		if (sleep==true){
		   cout<<"false"<<endl;
		}
		if (morning==true){
			if (mom==true){
			    cout<<"true"<<endl;
			}
		}
		if (normal==true){
		      cout<<"true"<<endl;
		}
	}
	int factorial (int x){
	
	  int fact=1;
	  for (int i=1;i<=x;i++){
	     fact=fact*i;
	  }
	   return fact;
	}
	int fiboncii(int n){
	
	int first=0;
	int second=1;
	int next;
	for (int i=0;i<=n;i++){
	
	  cout<<first<<endl;
	  next=first+second;
	  first=second;
	  second=next;
	}
	
	 return next;
	}
	int triangleblocks (int n){
		
		int block=0;
		for (int i=0;i<=n;i++){
		
		    block++;
		
		}
		cout<<"the number of blocks";
			return block;
	
	
	}
	int sumdigits (int n){
	     int x=0;
		 int sum=0;
		while (n>0){
		   x=n%10;
		   sum+=x;
		   n=n/10;
		}
	
	  return sum;
	}
	int countdigit7(int n){
	  int count=0;
	  while(n>0){
	   int x=n%10;
		if (x==7){
		  count++;
		}
	    n=n/10;
	  }
	 return count;
	
	}
	int countdigit8(int n){

     int array[10];
	  int count=0;
	  int count1=0;
	  for (int i=0;i<n;i++){
	     int x=n%10;
		 if (x>0){
	     count++;
		 }
		 n=n/10;
	  }
	 for (int i=0;i<count;i++){
	     int x=n%10;
	     array[i]=x;
		if (i>count/2&&array[i]==8){
		  count1++;
		}
	    
		if (i<count/2&&array[i]==8){
		   2*count1++;
		}
		 
	  }

	 return count1;
	
	}
	int power2 (int base,int power){
		 int sum=1;
		for (int i=1;i<=power;i++){
		    sum*=base;
		
		}
	
	return sum;
	}
	int linearsearch(int array[],int s,int z){
		
		for (int i=0;i<s;i++){
		
			if (z==array[i]){
			  return i;
			}
		}
	   return -1;
	}
	int binarysearch(int array[],int s,int z){
	  int low=0;
	  int high=s-1;
	  int mid=0;
	  mid=(high+low)/2;
	    if (z==array[mid]){
	      return mid;
		}
	  else if (z>array[mid]){
	      low=mid+1;
	  }

	  else {
	   high=mid-1;
	  
	  }
	 return -1;
	}
	int countbinarysearch(int array[],int s,int z){
	  int low=0;
	  int count=0;
	  int high=s-1;
	  int mid=0;
	  while (low<high){
		  count++;
	  mid=(high+low)/2;
	    if (array[mid]==z){
	      break;
		}
	  else if (z>array[mid]){
	      low=mid+1;
	  }

	  else {
	   high=mid-1;
	  
	  }
	  }
	 return count;
	}
	int countlinearsearch(int array[],int s,int z){
		int count=0;
		for (int i=0;i<s;i++){
		       count++;
			if (z==array[i]){
			 break;
			}
		}
	   return count;
	}
	int* bubblesort(int arr[],int size){
		for (int i=0;i<size;i++){
			for (int j=0;j<size-1;j++){
				if (arr[j]>arr[j+1]){
				   int temp=arr[j];
				   arr[j]=arr[j+1];
				   arr[j+1]=temp;
				
				}
			}
		
		}
	 return arr;
	
	}
int _tmain(int argc, _TCHAR* argv[])
{
	int choice;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	
	if (choice==1){
	int x,y;
	  cout<<"enter your first numbert"<<endl;
	  cin>>x;
	   cout<<"enter your second numbert"<<endl;
	  cin>>y;
	  cout<<sum(x,y)<<endl;
	
	}
	if (choice==2){
	int x;
	  cout<<"enter you number to absoluate"<<endl;
	  cin>>x;
	  cout<<absoulatedifferent(x)<<endl;

	}
	if (choice==3){
   	bool weekend,vaction;;
    cout<<"enter the week end 1 for true and 0 for false"<<endl;
	cin>>weekend;
    cout<<"enter the vaction 1 for true and 0 for false"<<endl;
    cin>>vaction;
    parameter(weekend,vaction);
	   
	}
	if (choice==4){
	 int x,y; 
	  cout<<"enter your first number"<<endl;
	  cin>>x;
	   cout<<"enter your second number"<<endl;
	  cin>>y;
	  pasneg(x,y);
	
	
	}
	if (choice==5){
	int x,y; 
	  cout<<"enter your first number"<<endl;
	  cin>>x;
	   cout<<"enter your second number"<<endl;
	  cin>>y;
	  close10(x,y);
	
	}
	if (choice==6){
	 int x,y,z;
	  cout<<"enter your first number"<<endl;
	  cin>>x;
	  cout<<"enter your second number"<<endl;
	  cin>>y;
	  cout<<"enter your third number"<<endl;
	  cin>>z;
	  lonesum(x, y,z);
	
	}
	if (choice==7){
	 int x,y,z;
	  cout<<"enter your first number"<<endl;
	  cin>>x;
	  cout<<"enter your second number"<<endl;
	  cin>>y;
	  cout<<"enter your third number"<<endl;
	  cin>>z;
	  luckeysum(x, y,z);

	
	}
	if (choice==8){
  int n,x;
	  cout<<"enter your  number"<<endl;
	  cin>>n;
	  cout<<"enter 1 for true 0 for false"<<endl;
	  cin>>x;
	initotal ( n,x);
	
	}
	if (choice==9){
	int x;
	 cout<<"enter your  number"<<endl;
	  cin>>x;
	multiple11(x);
	}
	if (choice==10){
	int x;
	 cout<<"enter your  number"<<endl;
	  cin>>x;
	 multiple20(x);
	}
	if (choice==11){
	int x;
	 cout<<"enter your  number"<<endl;
	  cin>>x;
	 multiple10(x);
	}
	if (choice==12){
	int x,y; 
	  cout<<"enter your first number"<<endl;
	  cin>>x;
	   cout<<"enter your second number"<<endl;
	  cin>>y;
	teen(x,y);
	}
	if (choice==13){
	    int x,y,z;
	  cout<<"enter your first number if false 0 if true 1"<<endl;
	  cin>>x;
	  cout<<"enter your second number if false 0 if true 1"<<endl;
	  cin>>y;
	  cout<<"enter your third number if false 0 if true 1"<<endl;
	  cin>>z;
	  luckeysum(x, y,z);
	
	}
	if (choice==14){
	int x;
	 cout<<"enter your  number"<<endl;
	 cin>>x;
	cout<<"the factorial of the number "<<x<<"is = "<<factorial(x)<<endl;
	
	}
	if (choice==15){
	  int n;
	  cout<<"enter your number "<<endl;
	  cin>>n;

	  fiboncii(n);
	}
	if (choice==16){
		int n;
	    cout<<"enter your number"<<endl;
		cin>>n;
		if (n==0){
		   cout<<"the number of blocks"<<"0"<<endl;
		}
	    triangleblocks (n);
	}
	if (choice==17){
	    int n;
	    cout<<"enter your number"<<endl;
		cin>>n;
	
    	cout<<"the sum of the digits is = "<<sumdigits ( n)<<endl;
	}
	if (choice==18){
	    int n;
	    cout<<"enter your number"<<endl;
		cin>>n;
	    cout<<"the accurance is "<< countdigit7(n)<<endl;
	}
	if (choice==19){
	   int n;
	    cout<<"enter your number"<<endl;
		cin>>n;
	cout<<"the occurance of 8 is "<<countdigit8( n)<<endl;
	}
	if (choice==20){
	int power,base;
	  cout<<"enter the power "<<endl;
	  cin>>power;
	  cout<<"enter the base"<<endl;
	  cin>>base;
	cout<<"the power of the number"<<base<<"is ="<< power2( base,power)<<endl;
	}
	if (choice==21){
	
	int array[10];
	cout<<"enter the array numbers"<<endl;
	for (int i=0;i<10;i++){
	   cin>>array[i];
	}
	int z;
	cout<<"enter the number to found"<<endl;
	cin>>z;
	int y= linearsearch(array, 10, z);
	if (y==-1){
	  cout<<"not found"<<endl;
	}
	else 
	{
		cout<<"found"<<endl;
	}
	}
	if (choice==22){
		int x[]={3,2,11,12,16,20,56,70};
		int k=56;
	   int ls=linearsearch(x,8,k);
	   int bs=binarysearch(x,8,k);
	   cout<<ls<<endl;
	   cout<<bs<<endl;

	}
	if (choice==23){
	int x[]={3,2,11,12,16,20,56,70};
	int k=56;
	   int ls=countlinearsearch(x,8,k);
	   int bs=countbinarysearch(x,8,k);
	   cout<<ls<<endl;
	   cout<<bs<<endl;
	
	}
	if (choice==24){
		int *x[]={3,5,7,1,4,9};
		int y[]=bubblesort( x,6);
	
	}
	system("pause");
	return 0;
}


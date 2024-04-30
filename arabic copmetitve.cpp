// arabic copmetitve.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
 
bool test (int i,int j){
	char inp[4][4];
	if (i+1==4 ||j+1==4)
		return false;
	
	return inp[i][j]==inp[i][j+1]&&inp[i][j]==inp[i+1][j]&&inp[i][j]==inp[i+1][j+1];

}
bool test (){

	for (int i=0;i<4;++i){
		for (int j=0;j<4;++j){
		
		
			if (test(i,j)){
			
			return true;
			}
		}
	}
	return false;

}
int myfun (int x,int y){
	int z=0;
	for (int i=0;i<y;i++){
	  z+=x;

	}

   return z;`

}
int _tmain(int argc, _TCHAR* argv[])
{
	//problem43
	int choice;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	if (choice==1){
	int n,ans=0;
	cout<<"enter the numbers of the problems"<<endl;
	cin>>n;
	for (int i=0;i<n;i++){
	int x,y,z;
	cout<<"enter the three members"<<endl;
	cin>>x>>y>>z;
		ans+= (x+y+z>=2);
	}
	cout<<"the answer is"<<ans;
	}
	if (choice==2){
	int x;
	for(int i=0;i<5;i++){
	  for (int j=0;j<5;j++){
		  cout<<"enter your X"<<endl;
		  cin>>x;
		  if (x==1){
		  cout<<"the position is "<<abs(i-3)+abs(j-3);
		    break;
		  
		  }
	}
	}
	}//problem 45
	if (choice==3){
	
	char inp[4][4];
	cout<<"enter the matrix"<<endl;
	for (int i=0;i<4;++i){
		for (int j=0;j<4;++j){
			cin>>inp[i][j];
		}
	}
	bool wedit=test();
	
	for (int i=0;i<4;++i){
		for (int j=0;j<4;++j){
			char org=inp[i][j];
			if (inp[i][j]=='#')
				inp[i][j]='.';
			else
			inp[i][j]='#';
		
	if (test())
	
	  wedit=true;
	  inp[i][j]=org;
	if (wedit)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;

	}
	}
	}
	//problem 46
	if (choice==4){
	int n;
	int i=0;
	int count=0;
	int a[100];
	cout<<"enter the numbers of the array"<<endl;
	cin>>n;
	cout<<"enter the array elements"<<endl; 
	for (int i=0;i<n;i++)
		cin>>a[i];
	//first we sort the array 
	sort(a,a+n);
	for (int i=0;i<n;i++){
	    if (a[i]==a[i+1]){
           count++;
	     }

	     }
        cout<<"the numbers of roofs"<<count<<endl;
	}
	if (choice==5){
	int n,k;
	int cover=0;
	cout<<"enter the N and the K"<<endl;
	cin>>n>>k;
	for (int i=0;i<n;i++){
	int start,end;
	cout<<"enter the start and the end"<<endl;
	cin>>start>>end;
	cover+=((start+end)-1);

	}
	cover%=k;
	if (cover!=0)
		cover=k-cover;
	
	cout<<"the cover of the list"<<cover<<endl;
	}
	if (choice==6){
	 int n,people,capicty;
	 int x,count=0;
	 cout<<"enter the numbers of the rooms"<<endl;
	 cin>>n;
	 for (int i=0;i<n;i++){
	 cout<<"how many people in the room "<<endl;
	 cin>>people;
	 cout<<"what is the capicty of the rooms"<<endl;
	 cin>>capicty;
	 x=capicty-people;
	 }
	 if (x<2){
	  cout<<"the room is full please try another room"<<endl;
	 }
	 else {
		 count++;	 
	 } 
	 cout<<"the number of the rooms are free for alex and george"<<" "<<count<<endl;
	
	}
	if (choice==7){
	
	int x;
	int count=0;
	cout<<"enter the numbers of the bacetria"<<endl;
	cin>>x;
	while (x>0){
		if (x%2==1)
			count++;
	x=x/2;
	}
	cout<<"the count is "<<count<<endl;
	}
	if (choice==8){
	
	string s;
	cout<<"enter your string"<<endl;
	cin>> s;
	int len=s.length();
	int smoves=0;
	int strt=0;
	for (int i=0;i<len;i++){
	   int index=s[i]-97;
	   int walkes=abs(strt-index);
	   if (walkes<13){
	   smoves+=walkes;
	   }
	   else {
	   smoves+=26-walkes;
	   
	   }
	   strt=index;
	}
	
	cout<<"the amount of moves"<<" "<<smoves<<endl;
	
	}
	if (choice==9){
	int  n;
	int count=0;
	cout<<"enter the number of the array"<<endl;
	cin>>n;
	int arr[100];
	    cout<<"enter the array contents"<<endl;
	for (int i=0;i<n;i++)
		cin>>arr[i];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
		    if (arr[i]==arr[j])
				count++;
			
	
	if (count==n/2){
				cout<<"yes"<<endl;
			}
	else {
		cout<<"no"<<endl;
	}
			count=0;
	
	
	
		}
	}
	}
	if (choice==10){
	 
	  int n;
	  int arr[10];
	  int i=0;
	  cout<<"enter your array size"<<endl;
	  cin>>n;
	  cout<<"enter your array elements"<<endl;
	  for (int i=0;i<n;i++){
		  cin>>arr[i];
	  }
	 
	
	  if (arr[0]==6 || arr[n-1]==6)
	     {
       cout<<"true"<<endl;
	     }
	   else {
	  cout<<"false"<<endl;
	   }
	}
	if (choice==11){
	int n;
	int arr[10];
	int i=0;
	 cout<<"enter your array size"<<endl;
	  cin>>n;
	  cout<<"enter your array elements"<<endl;
	  for (int i=0;i<n;i++){
		  cin>>arr[i];
	  }
	
	if (n>=1 && arr[0]==arr[n-1])
	{
	cout<<"true"<<endl;
	}
	else {
	cout<<"false"<<endl;
	}
	
	}
	if (choice==12){
	int n;
	int arr[10];
	int arr2[10];
	int i=0;

	 cout<<"enter your array size"<<endl;
	  cin>>n;
	  cout<<"enter your array elements"<<endl;
	  for (int i=0;i<n;i++){
		  cin>>arr[i];
	  }
	  cout<<"enter your array2 size"<<endl;
	  cin>>n;
	  cout<<"enter your array2 elements"<<endl;
	  for (int i=0;i<n;i++){
		  cin>>arr2[i];
	  }
	  if (arr[0]==arr2[0] ||arr[n-1]==arr2[n-1]){
	  
	    cout<<"true"<<endl;
	  }
	  else 
	  {
	    cout<<"false"<<endl;

	  }
	}
	if (choice==13){
	  int n;
	int arr[3];
	int i=0;
	int sum=0;
	 cout<<"enter your array size"<<endl;
	  cin>>n;
	  cout<<"enter your array elements"<<endl;
	  for (int i=0;i<n;i++){
		  cin>>arr[i];
	  }
	
	  for (int i=0;i<n;i++){
	      sum+=arr[i];
	  }
	  cout<<"the sum of the array is "<<sum<<endl;
	
	
	}
	if (choice==14){
	    int n;
	int arr[10];
	int i=0;
	int count=0;
	 cout<<"enter your array size"<<endl;
	  cin>>n;
	  cout<<"enter your array elements"<<endl;
	  for (int i=0;i<n;i++){
		  cin>>arr[i];
	  }

	  for (int i=0;i<n;i++){
	  
	    if (arr[i]%2==0)
			count++;
	  
	  }
	cout<<"the count of the even numbers"<<count<<endl;
}

	if (choice==14){
	
	    int n;
	int arr[10];
	int i=0;
	int count=0;
	int max = arr[0];
    int min = arr[0];
	 cout<<"enter your array size"<<endl;
	  cin>>n;
	  cout<<"enter your array elements"<<endl;
	  for (int i=0;i<n;i++){
		  cin>>arr[i];
	  }
	  for (int i=0;i<n;i++)
	  {
   
        if(arr[i] > max){
            max = arr[i];
		}
        if(arr[i] < min){
            min = arr[i];
		}
	   int bigdiff=max-min;
	  cout<<"the big different"<<bigdiff<<endl;
	
	}
	}
	if (choice==15){
	  int n;
	  int arr[10];
	  int sum=0;
	 cout<<"enter your array size"<<endl;
	  cin>>n;
	  cout<<"enter your array elements"<<endl;
	  for (int i=0;i<n;i++){
		  cin>>arr[i];
	  
	  while (n<0){
	  
	   cout<<"the array is empty and it's invlaid"<<endl;
	   cin>>arr[i];
	  
	  }
	  }
	  for (int i=0;i<n;i++){
	     if (arr[i]==13){
			 continue;
		 }
       sum+=arr[i];
  
	  }
	  cout<<"the sum of the array elements"<<sum<<endl;
	
	
	}
	if (choice==16){
	    
	   int n;
	  int arr[10];
	  int sum=0;
	 cout<<"enter your array size"<<endl;
	  cin>>n;
	  cout<<"enter your array elements"<<endl;
	  for (int i=0;i<n;i++){
		  cin>>arr[i];
	  }
	  for (int i=0;i<n;i++){
		  if (arr[i]==2){
		     sum+=arr[i];
			 if (sum==8){
			     cout<<"true"<<endl;
			 }
			 else 
				 cout<<"false"<<endl;
		  }
	  
	  
	  }
	
	}
	if (choice==17){
	 
	
	
	
	
	}
	
	if (choice==19){
	int repeat=0;
	int clump=0;
	int bigclump;
	int arr[10];
	int n;
	
	 cout<<"enter your array size"<<endl;
	  cin>>n;
	 cout<<"enter your array elements"<<endl;
	   for (int i=0;i<n;i++){
	     cin>>arr[i];
	     }
	   for (int i=0;i<n;i++){
	       if (arr[i]==arr[i+1]){
			   repeat++;
			   //max= repeat 
			 
		   }
		   else if (repeat>=2){
			   clump++;
			   
		       repeat=0;  
		   }

	   }

	
	}

	system("pause");

	return 0;
}


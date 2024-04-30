#include <iostream>

using namespace std;
  double miden(int array[],int size){
      //cheking the function is even or odd

      if ( size%2!=0)
    return  array[size/2];
else
    return (array [size/2] +array[(size-1)/2])/2.0;
  }

void shiftright(int array[],int size,int n){

    //body of the function
  // the code that solves the problem

     int i,b[size];
     for (i=0;i<size;i++){
        b[(i+n)%size]=array[i];
     }
     for (i=0;i<size;i++){
        cout<<b[i];
     }
}
 void sorting (int array[],int choice,int size ){
      int j,temp;
   if (choice==1){
   for (int i=0;i<size;i++){
      for(j=0;j<size-i-1;j++){
        if (array[j]<array[j+1]){
        temp=array[j+1];
        array[j+1]=array[j];
        array[j]=temp;
      }
   }
   }

   }
if (choice== 2){
    for (int i=0;i<size;i++){
      for(j=0;j<size-i-1;j++){
        if (array[j]>array[j+1]){
        temp=array[j+1];
        array[j+1]=array[j];
        array[j]=temp;
      }
   }
   }

}
   for ( int i = 0; i < size; i++)
    cout<< array[i] <<" ";


 }
 void Mode (){ int count=0,most=0,Size,less=-1,tempmost,tempcount;
   cout<<"How many number you will enter"<<endl;
   cin>>Size;
   int num[Size];
   cout<<"Please enter the numbers"<<endl;
   for(int i=0;i<Size;i++)cin>>num[i];
   for(int j=0;j<Size;j++){
     tempmost=num[j];
     tempcount=0;
    for(int x=0;x<Size;x++){
        if(num[x]==tempmost) tempcount++;
        if (tempcount>count){
            most=tempmost;
           count=tempcount;}
           }
   }
if(tempcount==1)
{    cout<<"The mode=-1"<<endl;
}
else{cout<<"The Mode = "<<most;}
    }

 void Mean(){{  int Size;
 float z;
         cout<<"How many number you will enter"<<"\n";
        cin>>Size;
        int arr[Size];
        cout<<"Please enter the numbers"<<"\n";
       for (int i=0;i<Size;i++)
       {
         cin>>arr[Size];
         z+=arr[Size];}
         z=z/Size;
        cout<<"The mean="<<z;
}
}
int Range(int* array, int size)
{
	int min = array[0], max = array[0];
	for (int i = 1; i <= size - 1; i++)
	{
		if (array[i] > max)
			max = array[i];
		if (array[i] < min)
			min = array[i];
	}
	return max - min;
}
int** ElementFrequency(int* array, int size, int & actualSize)
{
	actualSize = 1;
	bool flag = false;
	for (int i = 1; i <= size - 1; i++)
	{
		flag = false;
		for (int j = 0; j <= i - 1; j++)
			if (array[i] == array[j])
			{
				flag = true;
				break;
			}
		if (flag == false)
			actualSize++;
	}
	int** Freq = new int*[actualSize];
	for (int i = 0; i < actualSize; ++i)
		Freq[i] = new int[2];
	Freq[0][0] = array[0];
	Freq[0][1] = 1;
	int place = 1;
	for (int i = 1; i <= size - 1; i++)
	{
		flag = false;
		for (int j = 0; j <= place - 1; j++)
			if (array[i] == Freq[j][0])
			{
				flag = true;
				Freq[j][1]++;
				break;
			}
		if (flag == false)
		{
			Freq[place][0] = array[i];
			Freq[place][1] = 1;
			place++;
		}
	}
	return Freq;
}
int main()
{
    int choice;
    cout << "eneter your choice" << endl;
    cout << "1-mode" << endl;
    cout << "2-miden" << endl;
    cout << "3-mean" << endl;
    cout << "4-sort" << endl;
    cout << "5-range" << endl;
    cout << "6-element freqency" << endl;
    cout << "7-shift element circular" << endl;
    cin>>choice;

    if (choice==1){

       Mode();
    }
    char yourchoice;
    cout<<"do you want to continue?"<<endl;
    cin>> yourchoice;
    if (yourchoice==true){

            cout<<"choose another number"<<endl;
            cin>>choice;
    }
    if (choice==2){
         //size declartion
    int size;
    cout<<"enter the array size"<<endl;
    cin>>size;
    //array declaration
    int array[size];
    cout<<"enter the numbers of the array"<<endl;
    for ( int i=0;i<size;i++){
        cin>>array[i];
    }
    //we sort the array
     for (int i=0;i<size;i++){
      for( int j=0;j<size-i-1;j++){
        if (array[j]>array[j+1]){
        int temp;
        temp=array[j+1];
        array[j+1]=array[j];
        array[j]=temp;
      }
   }
   }

    cout << "Median = " << miden(array, size) << endl;


        }
        if (choice==3){
            Mean();
        }
        if (choice==4){

            //declartion the size
    int size;
    cout<<"enter your array size"<<endl;
    cin>>size;
    int i=0;
    //deleclarition the array
    int array[i];
    cout<<"eneter your array elements"<<endl;
    for( int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<< "what do you want 1-descending or 2-asceding order"<<endl;
    int choice;
    cin>>choice;
    if (choice==1){
    cout<<"the array descending order :"<<endl;
    //calling the function into the main
   sorting (array,choice,size);
    }
  else {
    cout<<"the array ascending order :"<<endl;
    //calling the function into the main
   sorting (array,choice,size);
  }
        }
    if (choice==5){
    int size;
	cout << "Enter Size ... " << endl;
	cin >> size;
	int* arr = new int[6];
	int actualSize;
	int Input;
	cout << "Enter Integers ... " << endl;
	for (int i = 0; i <= size - 1; i++)
		cin >> arr[i];
	cout << "Range is  " << Range(arr, size) << endl << endl;

    }
    if (choice==6){
        int size;
	cout << "Enter Size ... " << endl;
	cin >> size;
	cout << endl;
	int* arr = new int[6];
	int actualSize;
	int Input;
	cout << "Enter Integers ... " << endl;
	for (int i = 0; i <= size - 1; i++)
		cin >> arr[i];

	int** Freq = ElementFrequency(arr, size, actualSize);
 	cout << "Frequencies ... " << endl;
	for (int i = 0; i <= actualSize-1 ; i++)
		cout << Freq[i][0] << "  " << Freq[i][1] << endl;
    }
        if (choice==7){
                //declartion the size
    int size;
    cout<<"eneter your array size"<<endl;
    cin>>size;
    //declarition the array
    int array[size];
    cout<<"enter your array elements"<<endl;
    for (int i=0 ;i<size;i++)
        cin>>array[i];
    //the numbers that the user wants to shift
    int n;
    cout<<"enter how many numbers you wanted to shiffted"<<endl;
    cin>>n;
     if (n>size||n<0)
       cout<<"null"<<endl;
    else
    shiftright(array,size,n);

        }

    return 0;
}


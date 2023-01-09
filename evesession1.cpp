#include<iostream>
using namespace std;
//question 1
/*int main()
{
	int a[7]= {-1,-3,5,7,9,12,17};
	for (int i=0; i<6; i++)
	{
		if(a[i]>0)
		cout<<"positive" << a[i] <<"\n";
		else if(a[i]<0)
		cout<<"negative" << a[i] <<"\n";
		else
		cout<<"Zero";		
	}
}*/
//question 2
/*int main()
{
	int a[7] = {1, 2, 5, 8, 9, 10, 12};
	for(int i=0;i<7;i++)
	{
		if(a[i]%2!=0)
		cout<<a[i]<<endl;
	}
}*/
//question 3
/*int main()
{
	
    int a[7]={-1,2,4,6,0,-1,2};

	for (int i=0; i<7; i++)
    {
        if(a[i]>0)
        cout<<"positive"<<endl;

        else if(a[i]<0)
        cout<<"negative"<<endl;

        else
        cout<<"zero"<<endl;
    }
}*/
//question 4
/*int main()
{
    int arr[] = {7,12,9,15,19,32,56,70};
    int size_ = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<size_; i++)
    {
        for(int j = 0; j<size_-i-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    
    cout<<arr[1];

}*/
//question 5
/*int main()
{
    int arr[]={4,5,9,12,9,22,45,7};
    int maxcnt=1;
    int maxocc;
    for(int i=0;i<8;i++){
        int cnt=0;
        for(int j=0;j<8;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
            if(cnt>maxcnt){
                maxcnt=cnt;
                maxocc=arr[i];
            }

        }
    }
    cout<<maxcnt<<endl;
    cout<<maxocc;

}*/
//question 6
/*int main()
{
	int a=56;
	(a>0)?cout<<"Number is positive":cout<<"Number is negative";
	
	
	return 0;
}*/



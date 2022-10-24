#include<iostream>
using namespace std;
int binarysearch(int number[],int n,int newnumber){
   int start=0;
   int end=n;
   int fount=0;
  while (start<=end){
        int mid=(start+end)/2;  

        if(number[mid]==newnumber){
            fount=1;
            break;
        }
        else if(number[mid]>newnumber){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
  }
     if(fount){
            cout<<"New number is present is this array "<<newnumber<<" "<<(char)3<<endl;
        }
        else
            cout<<"New number is not present is this array "<<(char)1<<endl;

}
int main(){

    int n;
    cout<<"Enter size of array "<<(char)26<<" ";
    cin>>n;
   int number[n],newnumber,fount=0;
   for(int i=0;i<n;i++){
       cout<<"Enter "<<i+1<<" number "<<(char)26<<" ";
       cin>>number[i];
   }
   cout<<"Enter New number who is searcing in this array "<<(char)26;
   cin>>newnumber;
//    binarysearch(number,n,newnumber);



// Binary search without function 
    int start=0;
   int end=n;
  while (start<=end){
        int mid=(start+end)/2;  

        if(number[mid]==newnumber){
            fount=1;
            break;
        }
        else if(number[mid]>newnumber){     //first half move on ending point
            end=mid-1;
        }
        else{                               //second half move on starting point
            start=mid+1;
        }
  }
     if(fount){
            cout<<"New number is present is this array "<<newnumber<<" "<<(char)3<<endl;
        }
        else
            cout<<"New number is not present is this array "<<(char)1<<endl;


   return 0;
}
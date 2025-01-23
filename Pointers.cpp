#include<iostream>
using namespace std;
int main()
{
   int size ;
   cout<<"Enter the size of Dynamic array "<<endl;
   cin>>size;
   int *array = new int[size];
   cout<<"Enter the "<<size<<" values in array "<<endl;
   for(int i =0; i<size; ++i){
      cin>>array[i];
   }
   cout<<"Values you entered in array"<<endl;
   for(int i = 0; i<size; ++i){
    cout<<array[i]<<' ';
   }

   delete []array;

   return 0;
}
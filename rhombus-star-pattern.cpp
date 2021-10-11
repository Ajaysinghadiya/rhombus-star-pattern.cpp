#include<iostream>//header
using namespace std;//standard

int main()//execution of program begins from main function
{
    int raw;//declaring a variable named raw
    cout<<"enter the number of raws"<<endl;//printing a line
    cin>>raw;//taking input from user in the raw variable
    for(int i=1;i<=raw;i++)//this is an outer loop,this will print the number of raws
    {
        //there is two inner loops
        for(int j=1;j<=raw-i;j++)/*this is a 1st inner loop and will print the all spaces beffore the stars 
        and will start from j=1 and will go to the raw - raw number(i)*/
        {
            cout<<" ";//printing the spaces
        }
        for(int j=1;j<=raw;j++)/* this the 2nd innner loop and will work to print all the stars,and this loop
        stars from j=1 to raws*/
        {
            cout<<"* ";//printing the stars
        }
        cout<<endl;//moving to the next line
    }
    return 0;
}

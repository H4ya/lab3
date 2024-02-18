#include <iostream>
using namespace std;
int main(){
    int size=5,item,x[size]={10,20,30,40,50};
cin>>item;
for(int i = 0; i < size; ++i )
if(x[i]== item){
cout<<"Item found in "<<i+1;
break;
}
else
cout<<"Item not found";
return 0;}
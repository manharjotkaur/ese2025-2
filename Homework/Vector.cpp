//Darshan Mistry....
//Programm for vector string...


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    vector<string> array ;
    string VECSTR;
    cout<< "Enter words for sorting. press <CTRL><D> to signal EoF"<<endl;

    while(cin>>VECSTR)

    array.push_back(VECSTR);
    sort (array.begin(),array.end());
    cout<< "Sorted words are: "<<endl;

    int s= array.size();

    if(s==0)

    {
        cout<<"NO WORDS"<<endl;
        return 1;
    }
    for (int i = 0; i < s; ++i)
    	{cout<< array[i]<<endl;}
}

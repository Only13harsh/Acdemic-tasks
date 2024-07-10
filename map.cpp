
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, int> mp;

	mp["one"] = 1;
	mp["two"] = 2;
	mp["three"] = 3;
    mp["three"] = 5;
    mp["three"] = 4;
    mp["four"] = 4;
    mp["five"] = 5;
    string ky;
	cout << "Size of map: " << mp.size() << endl;
    cout<<"enter the key of your choice :"<<endl;
    getline(cin,ky);
if(ky=="one")
{
    cout<<mp["one"];
}
else if (ky=="two")
{
    cout<<mp["two"];
}

else if (ky=="three")
{
    cout<<mp["three"];
}

	return 0;
}

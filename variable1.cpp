#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter a variable name:";
    cin>>name;

    if(name.at(0)>='0' && name.at(0)<='9'){
        cout<<"Invalid variable name"<<endl;
        return 0;
    }

    for(int i=0;i<name.length();i++){
        char ch=name.at(i);
        if(!((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z')|| (ch>='0' && ch<='9')|| ch=='_'))
        {
            cout<<"Invalid variable name"<<endl;
            return 0;
        }
    }
    if(name=="int" || name=="float" || name=="char" || name=="double" || name =="string" || name=="static"|| name=="public" || name=="private" || name=="class" )
    {
        cout<<"Invalid variable name"<<endl;
        return 0;
    }
    cout<<"Valid variable name"<<endl;
    return 0;

}




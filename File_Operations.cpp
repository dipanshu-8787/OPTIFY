#include<iostream>
#include<string>
using namespace std;
int main(){
    string text ,line;
    int letters =0,words=0,lines=0,spaces=0;
    bool inword=false;
    cout<<"Enter text (press CTRL+D or an empty line to stop): ";
    while(getline(cin,line)){
        if(line.empty())break;
        text+=line +'\n';
        lines++;
    }
    for(char ch:text){
        if(isalpha(ch))letters++;
        if(ch==' ')spaces++;
        if(isspace(ch))inword=false;
        else if(!inword){
            words++;
            inword=true;
        }
    }
    cout<<"Letters: "<<letters<<endl;
    cout<<"Words: "<<words<<endl;
    cout<<"Lines: "<<lines<<endl;
    cout<<"Spaces: "<<spaces<<endl;

}
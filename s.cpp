#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string search(string,string);
void rw(string,string);
main()
{
    cout<<"please input filename:";
    string fname;
    cin>>fname;
    ifstream in(fname);
    while(!in)
    {
        //in.close();
        cout<<"file open failed,try it again!"<<endl;
        cout<<"please input filename:";
        cin>>fname;
        cout<<fname<<endl;
        ifstream in(fname);
        if(in)
            break;
    }
    cout<<"file opened succesfully!"<<endl;
    string f1,f2;
    while(getline(in,f2))
    {
        f1+=f2;
        f1+='\n';
    }
    cout<<f1;
    in.close();
    cout<<"please input keyword to find:";
    string kw;
    cin>>kw;
    //cout<<kw<<" repeated "<<search(f1,kw)<<" times in "<<fname;
    cout<<search(f1,kw);
    rw(fname,search(f1,kw));

}
string search(string s,string kw)
{
    int i,ct=0;
    string::size_type pos=0;
    string st;
    while((pos=s.find(kw,pos))!=string::npos)
    {
        ct++;
        i=pos;
        for(int j=0; j!=30; j++,i++)
        {
            st+=s[i];
        }
        ++pos;
    }
    return st;
}
void rw(string fname,string file)
{
    string::size_type pos=0;
    pos=fname.find(".",pos);
    string newf;
    for(int i=0; i<pos; i++)
        newf+=fname[i];
    string f=newf+".out";
    ofstream of(f);
    of<<file;
    of.close();

}

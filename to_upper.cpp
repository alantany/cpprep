#include<iostream>
#include<cctype>
#include<fstream>
using namespace std;
main()
{
    cout<<"input filename:";
    string fname;
    cin>>fname;
    ifstream in(fname);
    //load file content into string
    string sfile,temp;
    while(getline(in,temp))
    {
        sfile+=temp;
        sfile+='\n';
    }
    in.close();
    //change lower c into upper
    string supper,tmp;
    for(int i=0; i<sfile.size(); i++)
    {
        if(islower(sfile[i]))
            supper+=toupper(sfile[i]);
        else if(isupper(sfile[i]))
            supper+=tolower(sfile[i]);
        else
            supper+=sfile[i];
    }
    cout<<supper;
    ofstream of("out.txt");
    of<<supper;
    of.close();
}

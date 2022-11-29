#include<fstream>
#include<iostream>
#include<string>
#include<climits>
using namespace std;

int main()
{
    // #Declare file-stream variable
    ofstream fileOut;
    string filename;
    string chkfilename;

    string message;
    ifstream myfile;

    //FILE NAME
    cout << "Enter filename: ";
    cin >> chkfilename;
    myfile.open(chkfilename);
    if (myfile)
    {
        cout << "File exists";
    }
    else{
        // cout << "Enter filename: ";
        filename = chkfilename;
        cin.ignore(INT_MAX, '\n');
        //Store the text in the File 
        cout << "Enter the Text message : ";
        getline(cin , message);

        //Write into file
        fileOut.open(filename);

        fileOut << message << endl;
        fileOut.close();
    }
    return 0;

}
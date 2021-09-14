#include <UTF16Reader.h>
#include <iostream>

using namespace std; 

namespace RAS
{

UTF16Reader::UTF16Reader ( string fileName ):iFileReader( fileName ){
    cout << "Created UTF8Reader onject." << endl;
}

UTF16Reader::~UTF16Reader() {
    cout << "destructing UTF8Reader object." << endl;
}

string UTF16Reader::GetNextLine( int numLines ){ //default for numLines = 1
    string lines =  "returning lines 1 - " + to_string( numLines ) + "in UTF16";
    return lines; 
}

}//end of namespace
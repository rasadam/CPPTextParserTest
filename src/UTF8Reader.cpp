#include <UTF8Reader.h>
#include <iostream>

using namespace std; 

namespace RAS
{

UFT8Reader::UFT8Reader ( string fileName ):iFileReader( fileName ){
    cout << "Created UTF8Reader onject." << endl;
}

UFT8Reader::~UFT8Reader() {
    cout << "destructing UTF8Reader object." << endl;
}

string UFT8Reader::GetNextLine( int numLines ){ //default for numLines = 1
    string lines =  "returning lines 1 - " + to_string( numLines );
    return lines; 
}

}//end of namespace
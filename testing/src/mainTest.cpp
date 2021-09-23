#include <iFileReader.h>
#include <UTF8Reader.h>
#include <UTF16Reader.h>
#include <iostream>
#include <map>

using namespace RAS;
using namespace std;

map<string, iFileReader*> GetParsers ();

int main(int argc, char const *argv[])
{
    // iFileReader* readers[2];
    map<string, iFileReader*> parsers = GetParsers();

    // readers[0] = new UFT8Reader( "SomeFile.txt" );
    // readers[1] = new UTF16Reader( "SomeFile.txt" );
    cout << parsers[ "UTF8" ]->GetNextLine() << endl;
    cout << parsers[ "UTF8" ]->GetNextLine( 10 ) << endl;
    cout << parsers[ "UTF16" ]->GetNextLine() << endl;
    cout << parsers[ "UTF16" ]->GetNextLine( 10 ) << endl;

    delete parsers[ "UTF8" ];
    delete parsers[ "UTF16" ];
    
    return 0;
}

map<string, iFileReader*> GetParsers () {
    map<string, iFileReader*> parsers;
    parsers[ "UTF8" ] = new UFT8Reader( "SomeFile.txt" );
    parsers[ "UTF16" ] = new UTF16Reader( "SomeFile.txt" );
    return parsers;
}
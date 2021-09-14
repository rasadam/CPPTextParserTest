#include <iFileReader.h>
#include <UTF8Reader.h>
#include <UTF16Reader.h>
#include <iostream>

using namespace RAS;
using namespace std;
int main(int argc, char const *argv[])
{
    iFileReader* readers[2];
    readers[0] = new UFT8Reader( "SomeFile.txt" );
    readers[1] = new UTF16Reader( "SomeFile.txt" );
    cout << readers[0]->GetNextLine() << endl;
    cout << readers[0]->GetNextLine( 10 ) << endl;
    cout << readers[1]->GetNextLine() << endl;
    cout << readers[1]->GetNextLine( 10 ) << endl;
    return 0;
}

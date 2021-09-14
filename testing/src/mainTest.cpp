#include <iFileReader.h>
#include <UTF8Reader.h>
#include <iostream>

using namespace RAS;
using namespace std;
int main(int argc, char const *argv[])
{
    iFileReader*  reader = new UFT8Reader( "SomeFile.txt" );
    cout << reader->GetNextLine() << endl;
    cout << reader->GetNextLine( 10 ) << endl;
    return 0;
}

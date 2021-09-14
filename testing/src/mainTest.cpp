#include <iFileReader.h>
#include <UTF8Reader.h>
#include <iostream>

using namespace RAS;
using namespace std;
int main(int argc, char const *argv[])
{
    UFT8Reader reader = UFT8Reader( "SomeFile.txt" );
    cout << reader.GetNextLine() << endl;
    return 0;
}

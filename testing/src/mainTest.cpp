#include <iFileReader.h>
#include <UTF8Reader.h>

using namespace RAS;

int main(int argc, char const *argv[])
{
    UFT8Reader reader = UFT8Reader( "SomeFile.txt" );
    reader.GetNextLine();
    return 0;
}

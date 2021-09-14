#ifndef RAS_UTF8READER
#define RAS_UTF8READER 

#include <iFileReader.h>

namespace RAS 
{

class UFT8Reader : public iFileReader
{
public:
     UFT8Reader ( std::string filename );
    ~UFT8Reader ();

    std::string GetNextLine( int numLines = 1 );

}; // end of class

} //end of namespace

#endif // ifndef
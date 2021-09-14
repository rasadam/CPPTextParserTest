#ifndef RAS_UTF16READER
#define RAS_UTF16READER 

#include <iFileReader.h>

namespace RAS 
{

class UTF16Reader : public iFileReader
{
public:
     UTF16Reader ( std::string filename );
    ~UTF16Reader ();

    std::string GetNextLine( int numLines = 1 );

}; // end of class

} //end of namespace

#endif // ifndef
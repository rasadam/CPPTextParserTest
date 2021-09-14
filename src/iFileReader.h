#ifndef RAS_IFILEREADER
#define RAS_IFILEREADER 


#include <string>
namespace RAS 
{

class iFileReader
{
public:
    iFileReader ( std::string fileName ): fileName( fileName ) {};
    virtual std::string GetNextLine( int numLines = 1 ) = 0;

private:
    const std::string fileName;

}; ///end of class

} // end of namespace

#endif // ifndef

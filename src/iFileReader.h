#ifndef RAS_IFILEREADER
#define RAS_IFILEREADER 


#include <string>
namespace RAS 
{

class iFileReader
{
public:
    iFileReader ( std::string fileName ): fileName( fileName ) {};

private:
    const std::string fileName;

}; ///end of class

} // end of namespace

#endif // ifndef

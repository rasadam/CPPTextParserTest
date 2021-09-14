#include <string>
namespace RAS 
{

class iFileReader
{
public:
    iFileReader ( std::string fileName ): fileName( fileName ) {};
    virtual ~iFileReader() = 0; 

private:
    const std::string fileName;

}; ///end of class

} // end of namespace
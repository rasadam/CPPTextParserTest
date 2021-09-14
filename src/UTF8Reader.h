#include <iFileReader.h>;

namespace RAS 
{

class UFT8Reader : public iFileReader
{
public:
     UFT8Reader ( std::string filename );
    ~UFT8Reader ();

}; // end of class

} //end of namespace
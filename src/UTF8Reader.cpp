#include <UTF8Reader.h>; 
#include <iostream>;
namespace RAS
{

UFT8Reader::UFT8Reader ( std::string fileName ):iFileReader( fileName ){
    std::cout << "Created UTF8Reader onject." << std::endl;
}

}//end of namespace
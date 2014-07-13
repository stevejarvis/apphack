/*
 * Make this binary to say hello, always.
 */

#include <iostream>
#include <string.h>

using std::cout;
using std::endl;

const char * secret = "please";

int main( int argc, char **argv )
{
    if( argc != 2 ) {
        cout << "usage: ./main <password>" << endl;
        return -1;
    }

    if( 0 == strcmp( argv[1], secret ) ) {
        cout << "Access granted: Hello World!" << endl;
    }

    return 0;
}

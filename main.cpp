#include <iostream>
#include "libraries/Livella.h"

using namespace std;

int main() {

    Piston * mypiston1;
    Piston * mypiston2;
    Plate * myplate;

    cout << "Distanza fissa tra i pistoni di: 350" << endl;

    //                       posx  posy  alt1 larg1  alt1  larg1
    mypiston1 = piston_init( 100,  400,  150,  50,   100,   20);
    mypiston2 = piston_init( 500,  400,  150,  50,   100,   20);

    myplate = plate_init(30, 500, mypiston1, mypiston2);


    // Informazioni sulle parti del meccanismo
    cout << "Informazioni su pistoni e piastra:" << endl;
    info_parti( mypiston1, mypiston2, myplate );

     guida_to_SVG( mypiston1, mypiston2, myplate, "test");

    return 0;

}

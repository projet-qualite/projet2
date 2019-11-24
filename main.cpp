#include <iostream>
#include "robot1g.h"
#include "robot2g.h"

using namespace std;

int main()
{
    robot1g r1g{{4.0,7.0}};
    cout<<r1g.position()<<endl;
    r1g.ddroit(5);

    cout<<r1g.position()<<endl;
    r1g.dgauche(7);

    cout<<r1g.position()<<endl;
    r1g.dhaut(4);

    cout<<r1g.position()<<endl;
    r1g.dbas(8);

    cout<<r1g.position()<<endl;


    return 0;
}

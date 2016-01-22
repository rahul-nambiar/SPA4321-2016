#include <iostream>
#include <cmath>
//Need to have '#include <cmath>' whenever mathematical functions are used.

using namespace std;

int main() {
    float mpi = 139.57;
    float plab = 500;
    float mp = 938.27;
    //May also use double; the values provided are 5 sig. figures max, so this is not needed.

    double el = sqrt(pow(mpi,2)+pow(plab,2));
    double ec = sqrt(pow(mpi,2)+pow(mp,2)+(2*mp*el));
    double pc = plab*(mp/ec);

    cout << "Centre of Mass Energy = " << ec << " " <<"MeV" << endl;
    cout << "Centre of Mass Momentum = " << pc << " " << "Ns" << endl;

    return 0;
}
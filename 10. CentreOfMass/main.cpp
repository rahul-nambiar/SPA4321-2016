#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double mpi = 139.57;
    double plab = 500;
    double mp = 938.27;

    double el = sqrt(pow(mpi,2)+pow(plab,2));
    double ec = sqrt(pow(mpi,2)+pow(mp,2)+(2*mp*el));
    double pc = plab*(mp/ec);

    cout << "Centre of Mass Energy = " << ec << " " <<"MeV" << endl;
    cout << "Centre of Mass Momentum = " << pc << " " << "Ns" << endl;

    return 0;
}
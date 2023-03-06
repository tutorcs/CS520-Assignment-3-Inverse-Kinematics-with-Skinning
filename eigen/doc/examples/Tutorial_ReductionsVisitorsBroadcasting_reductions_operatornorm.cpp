https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
  MatrixXf m(2,2);
  m << 1,-2,
       -3,4;

  cout << "1-norm(m)     = " << m.cwiseAbs().colwise().sum().maxCoeff()
       << " == "             << m.colwise().lpNorm<1>().maxCoeff() << endl;

  cout << "infty-norm(m) = " << m.cwiseAbs().rowwise().sum().maxCoeff()
       << " == "             << m.rowwise().lpNorm<1>().maxCoeff() << endl;
}

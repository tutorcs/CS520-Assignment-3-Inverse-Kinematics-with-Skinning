https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
Matrix3d m = Matrix3d::Random();
cout << "Here is the matrix m:" << endl << m << endl;
cout << "Here is the sum of each row:" << endl << m.rowwise().sum() << endl;
cout << "Here is the maximum absolute value of each row:"
     << endl << m.cwiseAbs().rowwise().maxCoeff() << endl;

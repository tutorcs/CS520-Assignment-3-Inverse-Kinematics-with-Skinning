https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
Matrix3d m = Matrix3d::Identity();
m(0,2) = 1e-4;
cout << "Here's the matrix m:" << endl << m << endl;
cout << "m.isUnitary() returns: " << m.isUnitary() << endl;
cout << "m.isUnitary(1e-3) returns: " << m.isUnitary(1e-3) << endl;

https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
Matrix3d m;
m << 1,1,0,
     1,3,2,
     0,1,1;
cout << "Here is the matrix m:" << endl << m << endl;
cout << "Notice that the middle column is the sum of the two others, so the "
     << "columns are linearly dependent." << endl;
cout << "Here is a matrix whose columns have the same span but are linearly independent:"
     << endl << m.fullPivLu().image(m) << endl;

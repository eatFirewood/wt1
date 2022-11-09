#include <QApplication>  
#include "helloQT.h"  
 
int main(int argc,char *argv[])  
{  
      QApplication a(argc,argv);  
      helloQT hello;  
      hello.show();  
      return a.exec();  
} 

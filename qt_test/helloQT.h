#ifndef HELLOQT_H  
#define HELLOQT_H  
#include <QWidget> 
 
namespace Ui{  
  class Form;  
}  
 
class helloQT:public QWidget  
{  
  Q_OBJECT  
   
 public:  
  helloQT(QWidget *parent=0);  
  ~helloQT();  
   
 private:  
  Ui::Form *ui;  
   
  public slots:  
    void on_pushButton_clicked();  
   
};  // 不能少分号,否则出错  
     
#endif 

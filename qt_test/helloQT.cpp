
#include "helloQT.h"  
#include "ui_helloQT.h"  
     
helloQT::helloQT(QWidget *parent):  
  QWidget(parent),  
  ui(new Ui::Form)  
{  
  ui->setupUi(this);  
}  
     
helloQT::~helloQT()  
{  
  delete ui;  
}  
     
void helloQT::on_pushButton_clicked()  
{  
  ui->label->setText("helloQT");  
} 

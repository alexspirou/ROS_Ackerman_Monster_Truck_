#include "CameraDialog.h"
#include "ui_CameraDialog.h"

CameraDialog::CameraDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CameraDialog)
{
    ui->setupUi(this);
}

CameraDialog::~CameraDialog()
{
    delete ui;
}

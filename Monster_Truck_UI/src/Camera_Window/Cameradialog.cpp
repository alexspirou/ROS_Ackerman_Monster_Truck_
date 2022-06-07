#include "Cameradialog.h"
#include "ui_Cameradialog.h"
#include <QCamera>
#include <QtMultimediaWidgets/QCameraViewfinder>
#include <QCameraImageCapture>
#include <QVBoxLayout>
#include <QMenu>
#include <QAction>
#include <QCameraInfo>
#include <QScrollArea>

CameraDialog::CameraDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CameraDialog)
{
    ui->setupUi(this);
    // Camera init
    m_Camera = new QCamera(this);
    m_CameraViewFinder = new QCameraViewfinder(this);
    m_CameraImapgeCapture = new QCameraImageCapture(m_Camera, this);
    m_Layout = new QVBoxLayout;

//    m_Options = new QMenu("Option", this);
//    m_StartCamera = new QAction("Start Camera", this);
//    m_StopCamera = new QAction("Stop Camera", this);

//    m_Options->addActions({m_StartCamera, m_StopCamera});

    m_Camera->setViewfinder(m_CameraViewFinder);
    m_Layout->addWidget(m_CameraViewFinder);
    m_Layout->setMargin(0);

    ui->scrollArea->setLayout(m_Layout);
//    connect(m_StartCamera, &QAction::triggered, [&](){m_Camera->start(); } );
//    connect(m_StopCamera, &QAction::triggered, [&](){m_Camera->stop(); } );
}

CameraDialog::~CameraDialog()
{
    delete ui;
    delete m_Camera; delete m_CameraViewFinder;
    delete m_CameraImapgeCapture; delete m_Layout;
}

void CameraDialog::on_m_CameraStartButon_clicked()
{

    auto const camList = QCameraInfo::availableCameras();
    for(auto const& device : camList)
    {
       qDebug() << (device.deviceName());
    }
    qDebug() << "Here";

    m_Camera->start();
}

void CameraDialog::on_m_CameraStopButton_clicked()
{
    m_Camera->stop();
}

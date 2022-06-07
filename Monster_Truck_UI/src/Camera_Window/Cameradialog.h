#ifndef CAMERADIALOG_H
#define CAMERADIALOG_H

#include <QWidget>

namespace Ui {
class CameraDialog;
}

class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;
class QMenu;
class QAction;
class QScrollArea;

class CameraDialog : public QWidget
{
    Q_OBJECT

public:
    explicit CameraDialog(QWidget *parent = nullptr);
    ~CameraDialog();

public Q_SLOTS:
    void on_m_CameraStartButon_clicked();
    void on_m_CameraStopButton_clicked();

private:
    Ui::CameraDialog *ui;

    QCamera* m_Camera;
    QCameraViewfinder* m_CameraViewFinder;
    QCameraImageCapture* m_CameraImapgeCapture;
    QVBoxLayout* m_Layout;

    QMenu* m_Options;
    QAction* m_StartCamera;
    QAction* m_StopCamera;

    QScrollArea* m_ScrollArea;

};

#endif // CAMERADIALOG_H

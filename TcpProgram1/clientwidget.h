#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>
#include <QTcpSocket>//通信套接字

QT_BEGIN_NAMESPACE
namespace Ui { class ClientWidget; }
QT_END_NAMESPACE

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();

private slots:

    void on_buttonSend_clicked();
    void on_buttonClose_clicked();
    void on_ButtonConnect_clicked();

private:
    Ui::ClientWidget *ui;
    QTcpSocket *tcpSocket;
};
#endif // CLIENTWIDGET_H

﻿#ifndef TcpServer_H
#define TcpServer_H
#include <QTcpServer>
#include <QHash>
#include <QTime>
#include "tcpsocket.h"

class TcpServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit TcpServer(QObject *parent = nullptr,int numConnections = 10000);
    ~TcpServer();
    void setMaxPendingConnections(int numConnections);//重写设置最大连接数函数

    void SendData(int clientID, char *data, int len);
    void SendDataCurrent(char data[],int len);
    void SendDataAll(char data[],int len);

private:
    QHash<qintptr,TcpSocket *> * tcpClients;
    TcpSocket* CurrentClient;
    int maxConnections;
    QString m_ip;
    int m_port;

protected:
    void incomingConnection(qintptr handle);

signals:
    void ClientReadData(int clientID,QByteArray data);
    void ClientConnected(int clientID,QString IP,int Port);
    void ClientDisConnected(int clientID,QString IP,int Port);
    void sendDisConnect(int i);

    //new
    void SendReadData(QByteArray data);

public slots:
    void clear();
    void ReadData(int clientID,QByteArray data);
    void DisConnected(int clientID,QString IP,int Port);
    void SetTcpListen(QString ip,int port);
};

#endif // TcpServer_H

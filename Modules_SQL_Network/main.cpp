#include <QCoreApplication>
#include <QSqlQuery>
#include <QTcpSocket>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlQuery query;
    query.clear();

    QAbstractSocket absSocket(QAbstractSocket::TcpSocket, nullptr);

    return a.exec();
}

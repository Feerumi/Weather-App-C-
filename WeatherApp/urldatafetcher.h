#ifndef URLDATAFETCHER_H
#define URLDATAFETCHER_H

#include <QObject>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

class URLDataFetcher : public QObject
{
    Q_OBJECT
public:
     explicit URLDataFetcher(QUrl imageUrl, QObject *parent = 0);
     virtual ~URLDataFetcher();
     QByteArray downloadedData() const;

signals:
     void downloaded();

private slots:
     void fileDownloaded(QNetworkReply* pReply);

private:
     QNetworkAccessManager m_WebCtrl;
     QByteArray m_DownloadedData;

};

#endif //URLDATAFETCHER_H

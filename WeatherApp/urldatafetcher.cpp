#include "urldatafetcher.h"

URLDataFetcher::URLDataFetcher(QUrl imageUrl, QObject *parent) :
 QObject(parent)
{
 connect(
  &m_WebCtrl, SIGNAL (finished(QNetworkReply*)),
  this, SLOT (fileDownloaded(QNetworkReply*))
  );

 QNetworkRequest request(imageUrl);
 m_WebCtrl.get(request);
}

URLDataFetcher::~URLDataFetcher() { }

void URLDataFetcher::fileDownloaded(QNetworkReply* pReply) {
 m_DownloadedData = pReply->readAll();
 //emit a signal
 pReply->deleteLater();
 emit downloaded();
}

QByteArray URLDataFetcher::downloadedData() const {
 return m_DownloadedData;
}

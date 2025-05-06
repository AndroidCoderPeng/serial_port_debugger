//
// Created by pengx on 2025/5/6.
//

#include "com_message.hpp"
#include <QDateTime>

ComMessage::ComMessage(const QByteArray &d, const QString &dir, qint64 ts): data(d), direction(dir), timestamp(ts) {
    formattedTime = QDateTime::fromMSecsSinceEpoch(ts).toString("hh:mm:ss.zzz");
}

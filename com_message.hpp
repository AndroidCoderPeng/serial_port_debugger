//
// Created by pengx on 2025/5/6.
//

#ifndef COM_MESSAGE_HPP
#define COM_MESSAGE_HPP

#include <QMap>

struct ComMessage {
  QByteArray data;       // 收发的数据内容
  QString direction;     // 方向："发" 或 "收"
  qint64 timestamp;      // 时间戳（毫秒）
  QString formattedTime; // 格式化时间（如 "14:30:00.123"）

  QMap<QString, QString> decodedStrings; // 缓存各编码解析结果

  explicit ComMessage(const QByteArray &d, const QString &dir, qint64 ts);
};

#endif // COM_MESSAGE_HPP

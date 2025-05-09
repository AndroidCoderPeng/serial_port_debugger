//
// Created by pengx on 2025/5/6.
//

#ifndef UTILS_HPP
#define UTILS_HPP

#include <QByteArray>
#include <QString>

class Utils {
public:
  Utils() = default;

  static QString formatByteArray(const QByteArray &data);

  static QByteArray formatHexString(const QString &command);

  static bool isHexString(const QString &command);

  static bool isPositiveInt(const QString &str);

  static QString decodeDataWithEncoding(const QByteArray &data,
                                        const QString &encode);
};

#endif // UTILS_HPP

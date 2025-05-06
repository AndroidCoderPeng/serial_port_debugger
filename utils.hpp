//
// Created by pengx on 2025/5/6.
//

#ifndef UTILS_HPP
#define UTILS_HPP

#include <QString>
#include <QByteArray>

class Utils {
public:
    Utils() = default;

    static QString formatByteArray(const QByteArray &data);

    static QByteArray formatHexString(const QString &command);

    static bool isHexString(const QString &command);
};


#endif //UTILS_HPP

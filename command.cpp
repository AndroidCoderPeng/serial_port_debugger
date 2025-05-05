//
// Created by Administrator on 2025/5/5.
//

#include "command.hpp"

const QString &Command::getValue() const {
    return _value;
}

void Command::setValue(const QString &value) {
    _value = value;
}

const QString &Command::getRemark() const {
    return _remark;
}

void Command::setRemark(const QString &remark) {
    _remark = remark;
}

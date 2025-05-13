//
// Created by Administrator on 2025/5/5.
//

#include "command.hpp"

const qint16 &Command::getId() const { return _id; }

void Command::setId(const qint16 &id) { _id = id; }

const QString &Command::getValue() const { return _value; }

void Command::setValue(const QString &value) { _value = value; }

const QString &Command::getRemark() const { return _remark; }

void Command::setRemark(const QString &remark) { _remark = remark; }

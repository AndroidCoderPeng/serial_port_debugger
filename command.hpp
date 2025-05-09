//
// Created by Administrator on 2025/5/5.
//

#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <QString>

class Command {
public:
  Command() = default;

  const QString &getValue() const;

  void setValue(const QString &value);

  const QString &getRemark() const;

  void setRemark(const QString &remark);

private:
  QString _value;
  QString _remark;
};

#endif // COMMAND_HPP

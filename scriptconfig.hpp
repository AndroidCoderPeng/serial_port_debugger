#ifndef SCRIPTCONFIG_HPP
#define SCRIPTCONFIG_HPP

#include <QString>

class ScriptConfig {
public:
  ScriptConfig() = default;

  const QString &getCommand() const;

  void setCommand(const QString &command);

  const QString &getRemark() const;

  void setRemark(const QString &remark);

  const qint16 &getInterval() const;

  void setInterval(const qint16 &interval);

private:
  QString _command;
  QString _remark;
  qint16 _interval;
};

#endif // SCRIPTCONFIG_HPP

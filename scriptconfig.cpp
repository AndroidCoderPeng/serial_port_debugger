#include "scriptconfig.hpp"

const QString &ScriptConfig::getCommand() const { return _command; }

void ScriptConfig::setCommand(const QString &command) { _command = command; }

const QString &ScriptConfig::getRemark() const { return _remark; }

void ScriptConfig::setRemark(const QString &remark) { _remark = remark; }

const qint16 &ScriptConfig::getInterval() const { return _interval; }

void ScriptConfig::setInterval(const qint16 &interval) { _interval = interval; }

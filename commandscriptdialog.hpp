#ifndef COMMANDSCRIPTDIALOG_HPP
#define COMMANDSCRIPTDIALOG_HPP

#include <QDialog>
#include <QList>

#include "command.hpp"

namespace Ui {
class CommandScriptDialog;
}

class CommandScriptDialog : public QDialog {
  Q_OBJECT

public:
  explicit CommandScriptDialog(
      QWidget *parent = nullptr,
      const QList<Command> commands = QList<Command>());
  ~CommandScriptDialog();

  void onConfirmButtonClicked();

  void onCancelButtonClicked();

private:
  Ui::CommandScriptDialog *ui;
};

#endif // COMMANDSCRIPTDIALOG_HPP

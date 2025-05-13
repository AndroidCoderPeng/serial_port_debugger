#ifndef COMMANDSCRIPTDIALOG_HPP
#define COMMANDSCRIPTDIALOG_HPP

#include <QDialog>
#include <QItemSelection>
#include <QList>
#include <QStandardItemModel>

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

  void onCommandSelectionChanged(const QItemSelection &selected,
                                 const QItemSelection &deselected);

  void onConfirmButtonClicked();

  void onCancelButtonClicked();

  // ScriptConfig getScriptConfig() const;

private:
  Ui::CommandScriptDialog *ui;
  QStandardItemModel *commandItemModel;
};

#endif // COMMANDSCRIPTDIALOG_HPP

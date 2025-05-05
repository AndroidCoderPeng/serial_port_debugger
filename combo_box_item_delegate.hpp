//
// Created by Administrator on 2025/5/5.
//

#ifndef COMBO_BOX_ITEM_DELEGATE_HPP
#define COMBO_BOX_ITEM_DELEGATE_HPP

#include <QStyledItemDelegate>

class ComboBoxItemDelegate : public QStyledItemDelegate {
    Q_OBJECT

public:
    explicit ComboBoxItemDelegate(QObject *parent = nullptr);

    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const override;

    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};


#endif //COMBO_BOX_ITEM_DELEGATE_HPP

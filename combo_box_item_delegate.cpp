//
// Created by Administrator on 2025/5/5.
//

#include "combo_box_item_delegate.hpp"

#include <QPainter>

ComboBoxItemDelegate::ComboBoxItemDelegate(QObject *parent)
    : QStyledItemDelegate(parent) {
}

QSize ComboBoxItemDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const {
    QSize size = QStyledItemDelegate::sizeHint(option, index);
    size.setHeight(30);
    return size;
}

void ComboBoxItemDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
    // 定义 padding 值
    constexpr int left = 4;
    constexpr int right = 8;
    constexpr int top = 4;
    constexpr int bottom = 4;

    // 计算绘制文本的矩形区域，padding
    const QRect textRect = option.rect.adjusted(left, top, -right, -bottom);

    // 绘制背景
    if (option.state & QStyle::State_Selected) {
        painter->fillRect(option.rect, option.palette.highlight());
    } else if (option.state & QStyle::State_MouseOver) {
        painter->fillRect(option.rect, QColor(240, 240, 240));
    }

    // 获取显示文本
    const QString text = index.data(Qt::DisplayRole).toString();
    // 绘制文本
    painter->drawText(textRect, Qt::AlignVCenter | Qt::AlignLeft, text);
}
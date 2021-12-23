/********************************************************************************
** Form generated from reading UI file 'mrichtextedit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MRICHTEXTEDIT_H
#define UI_MRICHTEXTEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/mtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_MRichTextEdit
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *f_toolbar;
    QHBoxLayout *horizontalLayout;
    QComboBox *f_paragraph;
    QFrame *line_4;
    QToolButton *f_undo;
    QToolButton *f_redo;
    QToolButton *f_cut;
    QToolButton *f_copy;
    QToolButton *f_paste;
    QFrame *line;
    QToolButton *f_link;
    QFrame *line_3;
    QComboBox *f_fontsize;
    QFrame *line_6;
    QToolButton *f_image;
    QSpacerItem *horizontalSpacer;
    QToolButton *f_menu;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *f_bold;
    QToolButton *f_italic;
    QToolButton *f_underline;
    QToolButton *f_strikeout;
    QToolButton *f_list_bullet;
    QToolButton *f_list_ordered;
    QFrame *line_2;
    QToolButton *f_indent_dec;
    QToolButton *f_indent_inc;
    QFrame *line_5;
    QToolButton *f_bgcolor;
    QToolButton *f_fgcolor;
    QFrame *line_7;
    QToolButton *f_align_left;
    QToolButton *f_align_center;
    QToolButton *f_align_right;
    QToolButton *f_align_justify;
    QSpacerItem *horizontalSpacer_2;
    MTextEdit *f_textedit;

    void setupUi(QWidget *MRichTextEdit)
    {
        if (MRichTextEdit->objectName().isEmpty())
            MRichTextEdit->setObjectName(QString::fromUtf8("MRichTextEdit"));
        MRichTextEdit->resize(576, 290);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        MRichTextEdit->setFont(font);
        MRichTextEdit->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MRichTextEdit);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        f_toolbar = new QWidget(MRichTextEdit);
        f_toolbar->setObjectName(QString::fromUtf8("f_toolbar"));
        horizontalLayout = new QHBoxLayout(f_toolbar);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        f_paragraph = new QComboBox(f_toolbar);
        f_paragraph->setObjectName(QString::fromUtf8("f_paragraph"));
        f_paragraph->setFocusPolicy(Qt::ClickFocus);
        f_paragraph->setEditable(true);

        horizontalLayout->addWidget(f_paragraph);

        line_4 = new QFrame(f_toolbar);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        f_undo = new QToolButton(f_toolbar);
        f_undo->setObjectName(QString::fromUtf8("f_undo"));
        f_undo->setEnabled(false);
        f_undo->setFocusPolicy(Qt::ClickFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons_textedit/Undo-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_undo->setIcon(icon);
        f_undo->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_undo);

        f_redo = new QToolButton(f_toolbar);
        f_redo->setObjectName(QString::fromUtf8("f_redo"));
        f_redo->setEnabled(false);
        f_redo->setFocusPolicy(Qt::ClickFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/icons_textedit/Redo-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_redo->setIcon(icon1);
        f_redo->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_redo);

        f_cut = new QToolButton(f_toolbar);
        f_cut->setObjectName(QString::fromUtf8("f_cut"));
        f_cut->setFocusPolicy(Qt::ClickFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/icons_textedit/Cut-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_cut->setIcon(icon2);
        f_cut->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_cut);

        f_copy = new QToolButton(f_toolbar);
        f_copy->setObjectName(QString::fromUtf8("f_copy"));
        f_copy->setFocusPolicy(Qt::ClickFocus);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/icons_textedit/Copy-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_copy->setIcon(icon3);
        f_copy->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_copy);

        f_paste = new QToolButton(f_toolbar);
        f_paste->setObjectName(QString::fromUtf8("f_paste"));
        f_paste->setFocusPolicy(Qt::ClickFocus);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/icons_textedit/Paste-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_paste->setIcon(icon4);
        f_paste->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_paste);

        line = new QFrame(f_toolbar);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        f_link = new QToolButton(f_toolbar);
        f_link->setObjectName(QString::fromUtf8("f_link"));
        f_link->setFocusPolicy(Qt::ClickFocus);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/icons_textedit/Link-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_link->setIcon(icon5);
        f_link->setIconSize(QSize(16, 16));
        f_link->setCheckable(true);

        horizontalLayout->addWidget(f_link);

        line_3 = new QFrame(f_toolbar);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        f_fontsize = new QComboBox(f_toolbar);
        f_fontsize->setObjectName(QString::fromUtf8("f_fontsize"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(f_fontsize->sizePolicy().hasHeightForWidth());
        f_fontsize->setSizePolicy(sizePolicy);
        f_fontsize->setFocusPolicy(Qt::ClickFocus);
        f_fontsize->setEditable(true);

        horizontalLayout->addWidget(f_fontsize);

        line_6 = new QFrame(f_toolbar);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_6);

        f_image = new QToolButton(f_toolbar);
        f_image->setObjectName(QString::fromUtf8("f_image"));
        f_image->setText(QString::fromUtf8("Insert Image"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/res/icons_textedit/Add Image-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_image->setIcon(icon6);

        horizontalLayout->addWidget(f_image);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        f_menu = new QToolButton(f_toolbar);
        f_menu->setObjectName(QString::fromUtf8("f_menu"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/res/icons_textedit/Menu 2-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_menu->setIcon(icon7);

        horizontalLayout->addWidget(f_menu);

        f_paragraph->raise();
        line_4->raise();
        f_undo->raise();
        f_redo->raise();
        f_cut->raise();
        f_copy->raise();
        f_paste->raise();
        line->raise();
        f_link->raise();
        line_3->raise();
        f_fontsize->raise();
        f_image->raise();
        line_6->raise();
        f_menu->raise();

        verticalLayout->addWidget(f_toolbar);

        widget = new QWidget(MRichTextEdit);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        f_bold = new QToolButton(widget);
        f_bold->setObjectName(QString::fromUtf8("f_bold"));
        f_bold->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        f_bold->setToolTip(QString::fromUtf8("Bold (CTRL+B)"));
#endif // QT_NO_TOOLTIP
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/res/icons_textedit/Bold-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_bold->setIcon(icon8);
        f_bold->setIconSize(QSize(16, 16));
        f_bold->setCheckable(true);

        horizontalLayout_2->addWidget(f_bold);

        f_italic = new QToolButton(widget);
        f_italic->setObjectName(QString::fromUtf8("f_italic"));
        f_italic->setFocusPolicy(Qt::ClickFocus);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/res/icons_textedit/Italic-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_italic->setIcon(icon9);
        f_italic->setIconSize(QSize(16, 16));
        f_italic->setCheckable(true);

        horizontalLayout_2->addWidget(f_italic);

        f_underline = new QToolButton(widget);
        f_underline->setObjectName(QString::fromUtf8("f_underline"));
        f_underline->setFocusPolicy(Qt::ClickFocus);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/res/icons_textedit/Text Color-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_underline->setIcon(icon10);
        f_underline->setIconSize(QSize(16, 16));
        f_underline->setCheckable(true);

        horizontalLayout_2->addWidget(f_underline);

        f_strikeout = new QToolButton(widget);
        f_strikeout->setObjectName(QString::fromUtf8("f_strikeout"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/res/icons_textedit/Strikethrough-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_strikeout->setIcon(icon11);
        f_strikeout->setCheckable(true);

        horizontalLayout_2->addWidget(f_strikeout);

        f_list_bullet = new QToolButton(widget);
        f_list_bullet->setObjectName(QString::fromUtf8("f_list_bullet"));
        f_list_bullet->setFocusPolicy(Qt::ClickFocus);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/res/icons_textedit/Bulleted List-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_list_bullet->setIcon(icon12);
        f_list_bullet->setIconSize(QSize(16, 16));
        f_list_bullet->setCheckable(true);

        horizontalLayout_2->addWidget(f_list_bullet);

        f_list_ordered = new QToolButton(widget);
        f_list_ordered->setObjectName(QString::fromUtf8("f_list_ordered"));
        f_list_ordered->setFocusPolicy(Qt::ClickFocus);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/res/icons_textedit/Numbered List-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_list_ordered->setIcon(icon13);
        f_list_ordered->setIconSize(QSize(16, 16));
        f_list_ordered->setCheckable(true);

        horizontalLayout_2->addWidget(f_list_ordered);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        f_indent_dec = new QToolButton(widget);
        f_indent_dec->setObjectName(QString::fromUtf8("f_indent_dec"));
        f_indent_dec->setFocusPolicy(Qt::ClickFocus);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/res/icons_textedit/Indent-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_indent_dec->setIcon(icon14);
        f_indent_dec->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(f_indent_dec);

        f_indent_inc = new QToolButton(widget);
        f_indent_inc->setObjectName(QString::fromUtf8("f_indent_inc"));
        f_indent_inc->setFocusPolicy(Qt::ClickFocus);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/res/icons_textedit/Outdent-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_indent_inc->setIcon(icon15);
        f_indent_inc->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(f_indent_inc);

        line_5 = new QFrame(widget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_5);

        f_bgcolor = new QToolButton(widget);
        f_bgcolor->setObjectName(QString::fromUtf8("f_bgcolor"));
        f_bgcolor->setFocusPolicy(Qt::ClickFocus);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/res/icons_textedit/Fill Color-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_bgcolor->setIcon(icon16);
        f_bgcolor->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(f_bgcolor);

        f_fgcolor = new QToolButton(widget);
        f_fgcolor->setObjectName(QString::fromUtf8("f_fgcolor"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(f_fgcolor->sizePolicy().hasHeightForWidth());
        f_fgcolor->setSizePolicy(sizePolicy1);
        f_fgcolor->setIcon(icon16);

        horizontalLayout_2->addWidget(f_fgcolor);

        line_7 = new QFrame(widget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_7);

        f_align_left = new QToolButton(widget);
        f_align_left->setObjectName(QString::fromUtf8("f_align_left"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/res/icons_textedit/Align Left-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_align_left->setIcon(icon17);
        f_align_left->setCheckable(true);

        horizontalLayout_2->addWidget(f_align_left);

        f_align_center = new QToolButton(widget);
        f_align_center->setObjectName(QString::fromUtf8("f_align_center"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/res/icons_textedit/Align Center-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_align_center->setIcon(icon18);
        f_align_center->setCheckable(true);

        horizontalLayout_2->addWidget(f_align_center);

        f_align_right = new QToolButton(widget);
        f_align_right->setObjectName(QString::fromUtf8("f_align_right"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/res/icons_textedit/Align Right-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_align_right->setIcon(icon19);
        f_align_right->setCheckable(true);

        horizontalLayout_2->addWidget(f_align_right);

        f_align_justify = new QToolButton(widget);
        f_align_justify->setObjectName(QString::fromUtf8("f_align_justify"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/res/icons_textedit/Align Justify-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_align_justify->setIcon(icon20);
        f_align_justify->setCheckable(true);

        horizontalLayout_2->addWidget(f_align_justify);

        horizontalSpacer_2 = new QSpacerItem(192, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);

        f_textedit = new MTextEdit(MRichTextEdit);
        f_textedit->setObjectName(QString::fromUtf8("f_textedit"));
        f_textedit->setAutoFormatting(QTextEdit::AutoNone);
        f_textedit->setTabChangesFocus(true);

        verticalLayout->addWidget(f_textedit);

        QWidget::setTabOrder(f_textedit, f_image);
        QWidget::setTabOrder(f_image, f_menu);

        retranslateUi(MRichTextEdit);

        QMetaObject::connectSlotsByName(MRichTextEdit);
    } // setupUi

    void retranslateUi(QWidget *MRichTextEdit)
    {
#ifndef QT_NO_TOOLTIP
        f_paragraph->setToolTip(QApplication::translate("MRichTextEdit", "Paragraph formatting", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        f_undo->setToolTip(QApplication::translate("MRichTextEdit", "Undo (CTRL+Z)", nullptr));
#endif // QT_NO_TOOLTIP
        f_undo->setText(QApplication::translate("MRichTextEdit", "Undo", nullptr));
#ifndef QT_NO_TOOLTIP
        f_redo->setToolTip(QApplication::translate("MRichTextEdit", "Redo", nullptr));
#endif // QT_NO_TOOLTIP
        f_redo->setText(QApplication::translate("MRichTextEdit", "Redo", nullptr));
#ifndef QT_NO_TOOLTIP
        f_cut->setToolTip(QApplication::translate("MRichTextEdit", "Cut (CTRL+X)", nullptr));
#endif // QT_NO_TOOLTIP
        f_cut->setText(QApplication::translate("MRichTextEdit", "Cut", nullptr));
#ifndef QT_NO_TOOLTIP
        f_copy->setToolTip(QApplication::translate("MRichTextEdit", "Copy (CTRL+C)", nullptr));
#endif // QT_NO_TOOLTIP
        f_copy->setText(QApplication::translate("MRichTextEdit", "Copy", nullptr));
#ifndef QT_NO_TOOLTIP
        f_paste->setToolTip(QApplication::translate("MRichTextEdit", "Paste (CTRL+V)", nullptr));
#endif // QT_NO_TOOLTIP
        f_paste->setText(QApplication::translate("MRichTextEdit", "Paste", nullptr));
#ifndef QT_NO_TOOLTIP
        f_link->setToolTip(QApplication::translate("MRichTextEdit", "Link (CTRL+L)", nullptr));
#endif // QT_NO_TOOLTIP
        f_link->setText(QApplication::translate("MRichTextEdit", "Link", nullptr));
#ifndef QT_NO_TOOLTIP
        f_fontsize->setToolTip(QApplication::translate("MRichTextEdit", "Font size", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        f_image->setToolTip(QApplication::translate("MRichTextEdit", "Insert image...", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        f_menu->setToolTip(QApplication::translate("MRichTextEdit", "Menu", nullptr));
#endif // QT_NO_TOOLTIP
        f_menu->setText(QApplication::translate("MRichTextEdit", "...", nullptr));
        f_bold->setText(QApplication::translate("MRichTextEdit", "Bold", nullptr));
#ifndef QT_NO_TOOLTIP
        f_italic->setToolTip(QApplication::translate("MRichTextEdit", "Italic (CTRL+I)", nullptr));
#endif // QT_NO_TOOLTIP
        f_italic->setText(QApplication::translate("MRichTextEdit", "Italic", nullptr));
#ifndef QT_NO_TOOLTIP
        f_underline->setToolTip(QApplication::translate("MRichTextEdit", "Underline (CTRL+U)", nullptr));
#endif // QT_NO_TOOLTIP
        f_underline->setText(QApplication::translate("MRichTextEdit", "Underline", nullptr));
        f_strikeout->setText(QApplication::translate("MRichTextEdit", "Strike Out", nullptr));
#ifndef QT_NO_TOOLTIP
        f_list_bullet->setToolTip(QApplication::translate("MRichTextEdit", "Bullet list (CTRL+-)", nullptr));
#endif // QT_NO_TOOLTIP
        f_list_bullet->setText(QApplication::translate("MRichTextEdit", "Bullet list", nullptr));
#ifndef QT_NO_TOOLTIP
        f_list_ordered->setToolTip(QApplication::translate("MRichTextEdit", "Ordered list (CTRL+=)", nullptr));
#endif // QT_NO_TOOLTIP
        f_list_ordered->setText(QApplication::translate("MRichTextEdit", "Ordered list", nullptr));
#ifndef QT_NO_TOOLTIP
        f_indent_dec->setToolTip(QApplication::translate("MRichTextEdit", "Decrease indentation (CTRL+,)", nullptr));
#endif // QT_NO_TOOLTIP
        f_indent_dec->setText(QApplication::translate("MRichTextEdit", "Decrease indentation", nullptr));
#ifndef QT_NO_TOOLTIP
        f_indent_inc->setToolTip(QApplication::translate("MRichTextEdit", "Increase indentation (CTRL+.)", nullptr));
#endif // QT_NO_TOOLTIP
        f_indent_inc->setText(QApplication::translate("MRichTextEdit", "Increase indentation", nullptr));
#ifndef QT_NO_TOOLTIP
        f_bgcolor->setToolTip(QApplication::translate("MRichTextEdit", "Text background color", nullptr));
#endif // QT_NO_TOOLTIP
        f_bgcolor->setText(QString());
#ifndef QT_NO_TOOLTIP
        f_fgcolor->setToolTip(QApplication::translate("MRichTextEdit", "Text color", nullptr));
#endif // QT_NO_TOOLTIP
        f_fgcolor->setText(QString());
#ifndef QT_NO_TOOLTIP
        f_align_left->setToolTip(QApplication::translate("MRichTextEdit", "Align Left", nullptr));
#endif // QT_NO_TOOLTIP
        f_align_left->setText(QString());
#ifndef QT_NO_TOOLTIP
        f_align_center->setToolTip(QApplication::translate("MRichTextEdit", "Align Center", nullptr));
#endif // QT_NO_TOOLTIP
        f_align_center->setText(QString());
#ifndef QT_NO_TOOLTIP
        f_align_right->setToolTip(QApplication::translate("MRichTextEdit", "Align Right", nullptr));
#endif // QT_NO_TOOLTIP
        f_align_right->setText(QString());
#ifndef QT_NO_TOOLTIP
        f_align_justify->setToolTip(QApplication::translate("MRichTextEdit", "Align Justify", nullptr));
#endif // QT_NO_TOOLTIP
        f_align_justify->setText(QString());
        Q_UNUSED(MRichTextEdit);
    } // retranslateUi

};

namespace Ui {
    class MRichTextEdit: public Ui_MRichTextEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MRICHTEXTEDIT_H

/********************************************************************************
** Form generated from reading UI file 'bilimiao.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILIMIAO_H
#define UI_BILIMIAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_bilimiaoClass
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *b_load;
    QPushButton *b_youke;
    QPushButton *b_close;
    QRadioButton *radioButton;

    void setupUi(QDialog *bilimiaoClass)
    {
        if (bilimiaoClass->objectName().isEmpty())
            bilimiaoClass->setObjectName(QStringLiteral("bilimiaoClass"));
        bilimiaoClass->resize(509, 365);
        bilimiaoClass->setStyleSheet(QLatin1String("#bilimiaoClass{\n"
"\n"
"	\n"
"	background-color: rgb(248, 248, 248);\n"
"}"));
        lineEdit = new QLineEdit(bilimiaoClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 80, 410, 40));
        lineEdit->setStyleSheet(QLatin1String("\n"
"	/* Font & Text */\n"
"	font-family: \"Helvetica Neue\", Helvetica, Arial, \"Microsoft Yahei\", \"Hiragino Sans GB\", \"Heiti SC\", \"WenQuanYi Micro Hei\", sans-serif;\n"
"	font-size: 14px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: normal;\n"
"	letter-spacing: normal;\n"
"	line-height: normal;\n"
"	text-decoration: none solid rgb(170, 170, 200);\n"
"	text-align: start;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: middle;\n"
"	white-space: normal;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	background-color: rgb(255, 255, 255);\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"color: rgb(30, 30, 30);\n"
"\n"
"	/* Box */\n"
"	height: 18px;\n"
"	width: 388px;\n"
"	border: 1px solid rgb(246, 100, 149);\n"
"	border-top: 1px solid rgb(246, 100, 149);\n"
"	border-right: 1px solid rgb(246, 100, 149);\n"
"	border-bottom: 1px solid rgb(246, 100, 149);\n"
"	bo"
                        "rder-left: 1px solid rgb(246, 100, 149);\n"
"	margin: 0px;\n"
"	padding: 10px;\n"
"	max-height: none;\n"
"	min-height: 0px;\n"
"	max-width: none;\n"
"	min-width: 0px;\n"
"\n"
"	/* Positioning */\n"
"	position: static;\n"
"	top: auto;\n"
"	bottom: auto;\n"
"	right: auto;\n"
"	left: auto;\n"
"	float: none;\n"
"	display: inline-block;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: none;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: auto;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0s ease 0s;\n"
"	outline: rgb(255, 0, 0) dashed 1px;\n"
"	outline-offset: -2px;\n"
"	box-sizing: content-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
"	word-wrap: normal;\n"
"	box-shado"
                        "w: none;\n"
"	border-top-left-radius: 4px;\n"
"	border-top-right-radius: 4px;\n"
"	border-bottom-left-radius: 4px;\n"
"	border-bottom-right-radius: 4px;\n"
""));
        lineEdit_2 = new QLineEdit(bilimiaoClass);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 160, 410, 40));
        lineEdit_2->setStyleSheet(QLatin1String("\n"
"	/* Font & Text */\n"
"	font-family: \"Helvetica Neue\", Helvetica, Arial, \"Microsoft Yahei\", \"Hiragino Sans GB\", \"Heiti SC\", \"WenQuanYi Micro Hei\", sans-serif;\n"
"	font-size: 14px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: normal;\n"
"	letter-spacing: normal;\n"
"	line-height: normal;\n"
"	text-decoration: none solid rgb(170, 170, 170);\n"
"	text-align: start;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: middle;\n"
"	white-space: normal;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	background-color: rgb(255, 255, 255);\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"color: rgb(30, 30, 30);\n"
"	/* Box */\n"
"	height: 18px;\n"
"	width: 388px;\n"
"	border: 1px solid rgb(246, 100, 149);\n"
"	border-top: 1px solid rgb(246, 100, 149);\n"
"	border-right: 1px solid rgb(246, 100, 149);\n"
"	border-bottom: 1px solid rgb(246, 100, 149);\n"
"	border-"
                        "left: 1px solid rgb(246, 100, 149);\n"
"	margin: 0px;\n"
"	padding: 10px;\n"
"	max-height: none;\n"
"	min-height: 0px;\n"
"	max-width: none;\n"
"	min-width: 0px;\n"
"\n"
"	/* Positioning */\n"
"	position: static;\n"
"	top: auto;\n"
"	bottom: auto;\n"
"	right: auto;\n"
"	left: auto;\n"
"	float: none;\n"
"	display: inline-block;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: none;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: auto;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0s ease 0s;\n"
"	outline: rgb(255, 0, 0) dashed 1px;\n"
"	outline-offset: -2px;\n"
"	box-sizing: content-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
"	word-wrap: normal;\n"
"	box-shadow: no"
                        "ne;\n"
"	border-top-left-radius: 4px;\n"
"	border-top-right-radius: 4px;\n"
"	border-bottom-left-radius: 4px;\n"
"	border-bottom-right-radius: 4px;\n"
""));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        b_load = new QPushButton(bilimiaoClass);
        b_load->setObjectName(QStringLiteral("b_load"));
        b_load->setGeometry(QRect(50, 270, 186, 38));
        b_load->setCursor(QCursor(Qt::PointingHandCursor));
        b_load->setStyleSheet(QLatin1String("QPushButton{\n"
"	/* Font & Text */\n"
"	font-family: \"Helvetica Neue\", Helvetica, Arial, \"Microsoft Yahei\", \"Hiragino Sans GB\", \"Heiti SC\", \"WenQuanYi Micro Hei\", sans-serif;\n"
"	font-size: 14px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: normal;\n"
"	letter-spacing: normal;\n"
"	line-height: 38px;\n"
"	text-decoration: none solid rgb(255, 255, 255);\n"
"	text-align: center;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: baseline;\n"
"	white-space: normal;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	background-color: rgb(0, 167, 222);\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"	/* Box */\n"
"	height: 36px;\n"
"	width: 184px;\n"
"	border: 1px solid rgb(3, 129, 170);\n"
"	border-top: 1px solid rgb(3, 129, 170);\n"
"	border-right: 1px solid rgb(3, 129, 170);\n"
"	border-bottom: 1px solid rgb(3, 129, 170);\n"
""
                        "	border-left: 1px solid rgb(3, 129, 170);\n"
"	margin: 0px;\n"
"	padding: 0px;\n"
"	max-height: none;\n"
"	min-height: 0px;\n"
"	max-width: none;\n"
"	min-width: 0px;\n"
"\n"
"	/* Positioning */\n"
"	position: static;\n"
"	top: auto;\n"
"	bottom: auto;\n"
"	right: auto;\n"
"	left: auto;\n"
"	float: none;\n"
"	display: inline-block;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: none;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: pointer;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0.3s ease 0s;\n"
"	outline: rgb(255, 255, 255) dashed 0px;\n"
"	outline-offset: 0px;\n"
"	box-sizing: content-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
"	word-wrap: normal;\n"
"	b"
                        "ox-shadow: none;\n"
"	border-top-left-radius: 2px;\n"
"	border-top-right-radius: 2px;\n"
"	border-bottom-left-radius: 2px;\n"
"	border-bottom-right-radius: 2px;\n"
"}\n"
"QPushButton:hover {\n"
"\n"
"	background-color: rgb(0, 190, 231);\n"
"\n"
"}"));
        b_youke = new QPushButton(bilimiaoClass);
        b_youke->setObjectName(QStringLiteral("b_youke"));
        b_youke->setGeometry(QRect(240, 270, 220, 38));
        b_youke->setCursor(QCursor(Qt::PointingHandCursor));
        b_youke->setStyleSheet(QLatin1String("QPushButton{\n"
"	/* Font & Text */\n"
"	font-family: \"Helvetica Neue\", Helvetica, Arial, \"Microsoft Yahei\", \"Hiragino Sans GB\", \"Heiti SC\", \"WenQuanYi Micro Hei\", sans-serif;\n"
"	font-size: 14px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: normal;\n"
"	letter-spacing: normal;\n"
"	line-height: 38px;\n"
"	text-decoration: none solid rgb(85, 85, 85);\n"
"	text-align: center;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: baseline;\n"
"	white-space: normal;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"	color: rgb(85, 85, 85);\n"
"\n"
"	/* Box */\n"
"	height: 36px;\n"
"	width: 184px;\n"
"	border: 1px solid rgb(204, 204, 204);\n"
"	border-top: 1px solid rgb(204, 204, 204);\n"
"	border-right: 1px solid rgb(204, 204, 204);\n"
"	border-bottom: 1px solid rgb(204, 204, 204)"
                        ";\n"
"	border-left: 1px solid rgb(204, 204, 204);\n"
"	margin: 0px 0px 0px 34px;\n"
"	padding: 0px;\n"
"	max-height: none;\n"
"	min-height: 0px;\n"
"	max-width: none;\n"
"	min-width: 0px;\n"
"\n"
"	/* Positioning */\n"
"	position: static;\n"
"	top: auto;\n"
"	bottom: auto;\n"
"	right: auto;\n"
"	left: auto;\n"
"	float: none;\n"
"	display: inline-block;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: none;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: pointer;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0.3s ease 0s;\n"
"	outline: rgb(85, 85, 85) dashed 0px;\n"
"	outline-offset: 0px;\n"
"	box-sizing: content-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
"	word-wr"
                        "ap: normal;\n"
"	box-shadow: none;\n"
"	border-top-left-radius: 2px;\n"
"	border-top-right-radius: 2px;\n"
"	border-bottom-left-radius: 2px;\n"
"	border-bottom-right-radius: 2px;\n"
"}\n"
"QPushButton:hover {\n"
"\n"
"	background-color: rgb(247, 247, 247);\n"
"\n"
"}"));
        b_close = new QPushButton(bilimiaoClass);
        b_close->setObjectName(QStringLiteral("b_close"));
        b_close->setGeometry(QRect(465, -1, 46, 28));
        b_close->setMinimumSize(QSize(46, 28));
        b_close->setMaximumSize(QSize(46, 28));
        b_close->setCursor(QCursor(Qt::PointingHandCursor));
        b_close->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"\n"
"	background-color: rgb(232, 17, 35);\n"
"\n"
"}\n"
"QPushButton {\n"
"	/* Font & Text */\n"
"	font-family: Lato, \"Lucida Grande\", \"Lucida Sans Unicode\", Tahoma, sans-serif;\n"
"	font-size: 15px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: normal;\n"
"	letter-spacing: normal;\n"
"	line-height: 18px;\n"
"	text-decoration: none solid rgb(255, 255, 255);\n"
"	text-align: center;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: baseline;\n"
"	white-space: nowrap;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"	/* Box */\n"
"	\n"
"	border: 3px solid rgba(0, 0, 0, 0);\n"
"	border-top: 3px solid rgba(0, 0, 0, 0);\n"
"	border-right: 3px solid rgba(0, 0, 0, 0);\n"
"	border-bottom: 3px solid rgba(0, 0, 0, 0);\n"
"	border-left: 3px solid rgba(0, 0, 0, 0);\n"
""
                        "\n"
"\n"
"	/* Positioning */\n"
"	position: relative;\n"
"	top: 0px;\n"
"	bottom: 0px;\n"
"	right: 0px;\n"
"	left: 0px;\n"
"	float: none;\n"
"	display: block;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: disc;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: pointer;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0s ease 0s;\n"
"	outline: rgb(255, 0, 0) dashed 1px;\n"
"	outline-offset: 0px;\n"
"	box-sizing: border-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: ellipsis;\n"
"	word-wrap: normal;\n"
"	box-shadow: none;\n"
"	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"	border-bottom-left-radius: 3px;\n"
"	border-bottom-right-radius: 3px;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_close->setIcon(icon);
        radioButton = new QRadioButton(bilimiaoClass);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(50, 220, 120, 36));
        radioButton->setMaximumSize(QSize(16777215, 16777215));
        radioButton->setStyleSheet(QLatin1String("\n"
"	font-family: \"Helvetica Neue\", Helvetica, Arial, \"Microsoft Yahei\", \"Hiragino Sans GB\", \"Heiti SC\", \"WenQuanYi Micro Hei\", sans-serif;\n"
"	font-size: 12px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: normal;\n"
"	letter-spacing: normal;\n"
"	line-height: normal;\n"
"	text-decoration: none solid rgb(113, 113, 113);\n"
"	text-align: left;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: baseline;\n"
"	white-space: normal;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"	color: rgb(113, 113, 113);\n"
"\n"
"	/* Box */\n"
"	\n"
"	border: 0px none rgb(113, 113, 113);\n"
"	border-top: 0px none rgb(113, 113, 113);\n"
"	border-right: 0px none rgb(113, 113, 113);\n"
"	border-bottom: 0px none rgb(113, 113, 113);\n"
"	border-left: 0px none rgb(113, 113, 113);\n"
"\n"
"	/* Pos"
                        "itioning */\n"
"	position: static;\n"
"	top: auto;\n"
"	bottom: auto;\n"
"	right: auto;\n"
"	left: auto;\n"
"	float: none;\n"
"	display: inline;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: none;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: default;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0s ease 0s;\n"
"	outline: rgb(255, 0, 0) dashed 1px;\n"
"	outline-offset: 0px;\n"
"	box-sizing: content-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
"	word-wrap: normal;\n"
"	box-shadow: none;\n"
"	border-top-left-radius: 0px;\n"
"	border-top-right-radius: 0px;\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
""));

        retranslateUi(bilimiaoClass);
        QObject::connect(b_close, SIGNAL(clicked()), bilimiaoClass, SLOT(close()));

        QMetaObject::connectSlotsByName(bilimiaoClass);
    } // setupUi

    void retranslateUi(QDialog *bilimiaoClass)
    {
        bilimiaoClass->setWindowTitle(QApplication::translate("bilimiaoClass", "bilimiao", Q_NULLPTR));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("bilimiaoClass", "\344\275\240\347\232\204\346\211\213\346\234\272\345\217\267/\351\202\256\347\256\261", Q_NULLPTR));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("bilimiaoClass", "\345\257\206\347\240\201", Q_NULLPTR));
        b_load->setText(QApplication::translate("bilimiaoClass", "\347\231\273\345\275\225", Q_NULLPTR));
        b_youke->setText(QApplication::translate("bilimiaoClass", "\346\270\270\345\256\242", Q_NULLPTR));
        b_close->setText(QString());
        radioButton->setText(QApplication::translate("bilimiaoClass", "\350\256\260\344\275\217\346\210\221", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bilimiaoClass: public Ui_bilimiaoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILIMIAO_H

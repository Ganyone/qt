/********************************************************************************
** Form generated from reading UI file 'GL_study.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GL_STUDY_H
#define UI_GL_STUDY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GL_studyClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *b_load;
    QSpacerItem *horizontalSpacer_4;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *b_close;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *GL_studyClass)
    {
        if (GL_studyClass->objectName().isEmpty())
            GL_studyClass->setObjectName(QStringLiteral("GL_studyClass"));
        GL_studyClass->resize(430, 514);
        GL_studyClass->setStyleSheet(QLatin1String("#GL_studyClass{background-color: rgb(38, 41, 44);}\n"
"###GL_studyClass{background-color: rgb(0, 0, 0);}\n"
"\n"
"QPushButton{\n"
"\n"
"border:0px;\n"
"\n"
"}"));
        layoutWidget = new QWidget(GL_studyClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 450, 431, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("\n"
"\n"
"color: rgb(153, 153, 153);"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        layoutWidget1 = new QWidget(GL_studyClass);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 342, 431, 91));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        b_load = new QPushButton(layoutWidget1);
        b_load->setObjectName(QStringLiteral("b_load"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(b_load->sizePolicy().hasHeightForWidth());
        b_load->setSizePolicy(sizePolicy);
        b_load->setMinimumSize(QSize(242, 61));
        b_load->setMaximumSize(QSize(242, 61));
        b_load->setCursor(QCursor(Qt::PointingHandCursor));
        b_load->setStyleSheet(QLatin1String("QPushButton{\n"
"	\n"
"\n"
"	/* Font & Text */\n"
"	font-family: -apple-system-font, \"Helvetica Neue\", Helvetica, sans-serif;\n"
"	font-size: 18px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: normal;\n"
"	letter-spacing: normal;\n"
"	line-height: 46px;\n"
"	text-decoration: none solid rgb(0, 0, 0);\n"
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
"	color: rgb(255, 255, 255);\n"
"\n"
"	/* Box */\n"
"	\n"
"	border: 1px solid  rgb(255, 255, 255);\n"
"	border-top: 1px solid  rgb(255, 255, 255);\n"
"	border-right: 1px solid  rgb(255, 255, 255);\n"
"	border-bottom: 1px solid  rgb(255, 255, 255);\n"
"	border-left: 1px solid  rgb(255, 255, 255);\n"
"	margin: 0px;\n"
"\n"
"	\n"
"	\n"
""
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
"	overflow: hidden;\n"
"	cursor: auto;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0s ease 0s;\n"
"	outline: rgb(0, 0, 0) dashed 1px;\n"
"	outline-offset: 0px;\n"
"	box-sizing: border-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
"	word-wrap: normal;\n"
"	box-shadow: none;\n"
"	border-top-left-radius: 5px;\n"
"	border-top-right-radius: 5px;\n"
"	border-bottom-left-radius: 5px;\n"
"	border-bottom-right-radius: 5px;\n"
"\n"
"}\n"
"\n"
" \n"
"\n"
"\n"
"QPushButton:hover {\n"
"\n"
"    \n"
"	border-color: rgb(195, 176, 145) ;\n"
"	color: rgb(195, 176, 145) ;\n"
"}"));

        horizontalLayout_2->addWidget(b_load);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        layoutWidget2 = new QWidget(GL_studyClass);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 190, 361, 136));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"\n"
"font-family : -apple-system-font, \"Helvetica Neue\", Helvetica, sans-serif;\n"
"font-size : 18px;\n"
"font-weight : normal;"));

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(359, 40));
        lineEdit->setStyleSheet(QString::fromUtf8(" border-style: outset;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:  rgb(39, 40, 40);\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"\n"
"font-family : -apple-system, BlinkMacSystemFont, \"Segoe UI\", Helvetica, Arial, sans-serif, \"Apple Color Emoji\", \"Segoe UI Emoji\", \"Segoe UI Symbol\";\n"
"font-size : 16px;\n"
"font-weight : normal;\n"
"line-height : 20px;\n"
"text-decoration : none solid rgb(36, 41, 46);\n"
"vertical-align : middle;\n"
"word-spacing : 0px;\n"
"padding-bottom:4px"));

        verticalLayout->addWidget(lineEdit);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"font-family : -apple-system-font, \"Helvetica Neue\", Helvetica, sans-serif;\n"
"font-size : 18px;\n"
"font-weight : normal;"));

        verticalLayout->addWidget(label_3);

        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setMinimumSize(QSize(359, 40));
        lineEdit_2->setStyleSheet(QString::fromUtf8(" border-style: outset;\n"
"background-color: rgb(39, 40, 40);\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"font-family : -apple-system, BlinkMacSystemFont, \"Segoe UI\", Helvetica, Arial, sans-serif, \"Apple Color Emoji\", \"Segoe UI Emoji\", \"Segoe UI Symbol\";\n"
"font-size : 16px;\n"
"font-weight : normal;\n"
"line-height : 20px;\n"
"text-decoration : none solid rgb(36, 41, 46);\n"
"vertical-align : middle;\n"
"word-spacing : 10px;\n"
"padding-bottom:5px\n"
""));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_2);

        b_close = new QPushButton(GL_studyClass);
        b_close->setObjectName(QStringLiteral("b_close"));
        b_close->setGeometry(QRect(400, 0, 32, 31));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(b_close->sizePolicy().hasHeightForWidth());
        b_close->setSizePolicy(sizePolicy2);
        b_close->setCursor(QCursor(Qt::PointingHandCursor));
        b_close->setStyleSheet(QLatin1String("QPushButton{\n"
"background: transparent;\n"
"border:0px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(229, 70, 38);\n"
"  border-radius: 4px;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_close->setIcon(icon);
        layoutWidget3 = new QWidget(GL_studyClass);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 60, 431, 71));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 16pt \"Arial\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        retranslateUi(GL_studyClass);
        QObject::connect(b_close, SIGNAL(clicked()), GL_studyClass, SLOT(close()));

        QMetaObject::connectSlotsByName(GL_studyClass);
    } // setupUi

    void retranslateUi(QDialog *GL_studyClass)
    {
        GL_studyClass->setWindowTitle(QApplication::translate("GL_studyClass", "GL_study", Q_NULLPTR));
        label->setText(QApplication::translate("GL_studyClass", "\346\234\254\350\275\257\344\273\266\347\224\261\345\271\277\347\220\206\345\256\236\350\267\265\344\270\255\345\277\203\347\220\206\345\267\2451024\345\233\242\351\230\237\345\274\200\345\217\221", Q_NULLPTR));
        b_load->setText(QApplication::translate("GL_studyClass", "Stary Now", Q_NULLPTR));
        label_2->setText(QApplication::translate("GL_studyClass", "\345\255\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("GL_studyClass", "\345\257\206\347\240\201", Q_NULLPTR));
        b_close->setText(QString());
        label_4->setText(QApplication::translate("GL_studyClass", "GL_study", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GL_studyClass: public Ui_GL_studyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GL_STUDY_H
